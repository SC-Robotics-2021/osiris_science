"""
Author: Ro Sharaf, Austin Lake
Program: science gui and Command & Control
Date: 3/15/2022
"""

import rclpy
import sys
import time

from PyQt5.QtCore import QFile
from PyQt5.QtWidgets import QApplication, QWidget
from PyQt5.QtCore import QTimer, pyqtSignal, pyqtSlot, Qt, QThread
from PyQt5 import uic, QtGui
from PyQt5.QtWidgets import QWidget, QApplication, QLabel, QVBoxLayout
from PyQt5.QtGui import QPixmap
import sys
import numpy as np
import cv2
from threading import Thread

from ui_form import Ui_MainView

from funnel_cake import FunnelCake
from lowering_platform import Platform
from cameras import Cameras


# class VideoThread(QThread):
#     change_pixmap_signal = pyqtSignal(np.ndarray)
#
#     def __init__(self, index):
#         super().__init__()
#         self._run_flag = True
#         self._video_index = index
#         # self.camera = Cameras(self._video_index)
#
#     def run(self):
#         # capture from web cam
#         cap = cv2.VideoCapture(0)
#         while self._run_flag:
#             ret, cv_img = cap.read()
#             if ret:
#                 self.change_pixmap_signal.emit(cv_img)
#         # shut down capture system
#         cap.release()
#
#     def stop(self):
#         """Sets run flag to False and waits for thread to finish"""
#         self._run_flag = False
#         self.wait()


class MainWindow(QWidget):
    def __init__(self, parent=None):
        super(MainWindow, self).__init__(parent)
        self.ui = Ui_MainView()
        self.ui.setupUi(self)
        self.window = uic.loadUi("form.ui")

        self.ui.collect_sample_button.clicked.connect(self.on_collect_sample_pressed)
        self.ui.platform_slider.valueChanged.connect(self.on_platform_height_changed)
        self.ui.microscope_button.clicked.connect(self.on_microscope_pressed)
        self.ui.flashlight_button.clicked.connect(self.on_flashlight_pressed)
        self.ui.brush_button.clicked.connect(self.on_brush_pressed)
        self.ui.uv_light_button.clicked.connect(self.on_uv_light_pressed)
        self.ui.water_pump_button.clicked.connect(self.on_water_pump_pressed)
        self.ui.run_pump_button.clicked.connect(self.on_run_pump_pressed)
        self.ui.pumps_dial.valueChanged.connect(self.on_pumps_dial_value_changed)
        self.ui.camera_camboBox.activated[int].connect(self.on_switch_camera)
        self.ui.start_record_button.clicked.connect(self.on_start_record_button_pressed)
        self.ui.take_picture_button.clicked.connect(self.on_take_picture_button_pressed)
        self.ui.stop_record_button.clicked.connect(self.on_stop_record_button_pressed)

        rclpy.init()
        self.funnel_cake_rover = FunnelCake()
        self.platform_rover = Platform()
        self.camera_rover = Camera()

        self.is_collect_sample_pressed = False
        self.is_microscope_pressed = False
        self.is_flashlight_pressed = False
        self.is_brush_pressed = False
        self.is_uv_light_pressed = False
        self.is_water_pump_pressed = False

        self.ui_progress_bar = {1: self.ui.pump_one_pb,
                                2: self.ui.pump_two_pb,
                                3: self.ui.pump_three_pb,
                                4: self.ui.pump_four_pb,
                                5: self.ui.pump_five_pb}

        # create the video capture thread
        # self.thread0 = VideoThread(0)
        # self.thread1 = VideoThread(1)
        # connect its signal to the update_image slot


        self.thread0.change_pixmap_signal.connect(self.update_image)
        # self.thread1.change_pixmap_signal.connect(self.update_microscope)
        # start the thread
        self.thread0.start()
        # self.thread1.start()

        self.showMaximized()

    def closeEvent(self, event):
        self.thread0.stop()
        self.thread1.stop()
        event.accept()

    @pyqtSlot(np.ndarray)
    def update_images(self):
        """Updates the image_label with a new opencv image"""
        self.ui.label_2.setPixmap(self.convert_cv_qt(self.camera_rover.get_zed_frame()))
        self.ui.label_3.setPixmap(self.convert_cv_qt(self.camera_rover.get_microscope_frame()))
        self.ui.label_4.setPixmap(self.convert_cv_qt(self.camera_rover.get_uv_camera_frame()))
        self.ui.label_5.setPixmap(self.convert_cv_qt(self.camera_rover.get_ir_camera_frame))


    def convert_cv_qt(self, cv_img):
        """Convert from an opencv image to QPixmap"""
        rgb_image = cv2.cvtColor(cv_img, cv2.COLOR_BGR2RGB)
        h, w, ch = rgb_image.shape
        bytes_per_line = ch * w
        convert_to_Qt_format = QtGui.QImage(rgb_image.data, w, h, bytes_per_line, QtGui.QImage.Format_RGB888)
        p = convert_to_Qt_format.scaled(640, 480, Qt.KeepAspectRatio)
        return QPixmap.fromImage(p)

    def on_collect_sample_pressed(self):
        if not self.is_collect_sample_pressed:
            self.funnel_cake_rover.turn_vacuum_on()
            self.ui.collect_sample_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.funnel_cake_rover.turn_vacuum_off()
            self.ui.collect_sample_button.setStyleSheet('background-color: white;')
        self.is_collect_sample_pressed = not self.is_collect_sample_pressed

    def on_water_pump_pressed(self):
        if not self.is_water_pump_pressed:
            self.funnel_cake_rover.turn_water_pump_off()
            self.ui.water_pump_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.funnel_cake_rover.turn_water_pump_on()
            self.ui.water_pump_button.setStyleSheet('background-color: white;')
        self.is_water_pump_pressed = not self.is_water_pump_pressed

    def on_pumps_dial_value_changed(self, value):
        self.funnel_cake_rover.rotate_funnel_index(value)
        self.ui.pump_number.setText(f'{value}')

    def on_run_pump_pressed(self):
        self.funnel_cake_rover.turn_funnel_pump_on()
        for funnel in self.funnel_cake_rover.get_funnel_list():
            bar = 0
            if self.funnel_cake_rover.get_funnel_list()[funnel] is True:
                while bar <= 100:
                    self.ui_progress_bar[funnel].setValue(bar)
                    bar = int(bar + 1666 / 1000)
                    time.sleep(1.6/100)

    def on_platform_height_changed(self, value):
        self.platform_rover.set_platform_height(value)

    def on_microscope_pressed(self):
        if not self.is_microscope_pressed:
            self.ui.microscope_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.ui.microscope_button.setStyleSheet('background-color: white;')
        self.is_microscope_pressed = not self.is_microscope_pressed

    def on_flashlight_pressed(self):
        if not self.is_flashlight_pressed:
            self.platform_rover.turn_flashlight_on()
            self.ui.flashlight_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.platform_rover.turn_flashlight_off()
            self.ui.flashlight_button.setStyleSheet('background-color: white;')
        self.is_flashlight_pressed = not self.is_flashlight_pressed

    def on_brush_pressed(self):
        if not self.is_brush_pressed:
            self.platform_rover.turn_brush_on()
            self.ui.brush_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.platform_rover.turn_brush_off()
            self.ui.brush_button.setStyleSheet('background-color: white;')
        self.is_brush_pressed = not self.is_brush_pressed

    def on_uv_light_pressed(self):
        if not self.is_uv_light_pressed:
            self.platform_rover.turn_uv_light_on()
            self.ui.uv_light_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.platform_rover.turn_uv_light_off()
            self.ui.uv_light_button.setStyleSheet('background-color: white;')
        self.is_uv_light_pressed = not self.is_uv_light_pressed

    def on_start_record_button_pressed(self):
        self.camera_list[self.ui.camera_camboBox.currentIndex()][1] = True
        self.ui.start_record_button.setStyleSheet('background-color: #B3BAFF;')
        self.camera_list[self.ui.camera_camboBox.currentIndex()][3] = False
        self.ui.stop_record_button.setStyleSheet('background-color: white;')

    def on_take_picture_button_pressed(self):
        self.camera_list[self.ui.camera_camboBox.currentIndex()][2] = True

    def on_stop_record_button_pressed(self):
        self.camera_list[self.ui.camera_camboBox.currentIndex()][1] = False
        self.ui.start_record_button.setStyleSheet('background-color: white;')
        self.camera_list[self.ui.camera_camboBox.currentIndex()][3] = True
        self.ui.stop_record_button.setStyleSheet('background-color: #B3BAFF;')

    def on_switch_camera(self, index):
        if self.camera_list[self.ui.camera_camboBox.currentIndex()][1]:
            self.ui.start_record_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.ui.start_record_button.setStyleSheet('background-color: white;')

        if self.camera_list[self.ui.camera_camboBox.currentIndex()][3]:
            self.ui.stop_record_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.ui.stop_record_button.setStyleSheet('background-color: white;')


if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.resize(1500, 800)
    window.show()
    sys.exit(app.exec_())
