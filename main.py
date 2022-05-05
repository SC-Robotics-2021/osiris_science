"""
Author: Ro Sharaf
Maintainers: Ro Sharaf, Austin Lake
Program: science gui and Command & Control
Date: 3/15/2022
"""

import rclpy
import sys
import time

from PyQt5.QtCore import QFile, QTimer, pyqtSignal, pyqtSlot, Qt, QThread
from PyQt5.QtWidgets import QApplication, QWidget, QLabel, QVBoxLayout
from PyQt5 import uic, QtGui
from PyQt5.QtGui import QPixmap
import sys
import numpy as np
import cv2


from ui_form import Ui_MainView

from funnel_cake import FunnelCake
from lowering_platform import Platform
from cameras import Cameras


class MainWindow(QWidget):
    def __init__(self, parent=None):
        super(MainWindow, self).__init__(parent)
        self.ui = Ui_MainView()
        self.ui.setupUi(self)
        self.window = uic.loadUi("form.ui")

        self.ui.collect_sample_button.clicked.connect(self.on_collect_sample_pressed)
        self.ui.platform_slider.valueChanged.connect(self.on_platform_height_changed)
        self.ui.microscope_button.clicked.connect(self.on_microscope_pressed)
        self.ui.uv_camera_button.clicked.connect(self.on_uv_camera_pressed)
        self.ui.ir_camera_button.clicked.connect(self.on_ir_camera_pressed)
        self.ui.flashlight_button.clicked.connect(self.on_flashlight_pressed)
        self.ui.brush_button.clicked.connect(self.on_brush_pressed)
        self.ui.uv_light_button.clicked.connect(self.on_uv_light_pressed)
        self.ui.water_pump_button.clicked.connect(self.on_water_pump_pressed)
        self.ui.run_pump_button.clicked.connect(self.on_run_pump_pressed)
        self.ui.pumps_dial.valueChanged.connect(self.on_pumps_dial_value_changed)
        self.ui.camera_camboBox.activated[int].connect(self.on_switch_camera)
        self.ui.take_picture_button.clicked.connect(self.on_take_picture_button_pressed)

        self.funnel_cake_controller = FunnelCake()
        self.platform_controller = Platform()
        self.camera_controller = Cameras()

        self.camera_list = [[1, False, False, False], [2, False, False, False],
                            [3, False, False, False], [4, False, False, False]]

        self.is_collect_sample_pressed = False
        self.is_microscope_pressed = False
        self.is_uv_camera_pressed = False
        self.is_ir_camera_pressed = False
        self.is_flashlight_pressed = False
        self.is_brush_pressed = False
        self.is_uv_light_pressed = False
        self.is_water_pump_pressed = False

        self.ui_progress_bar = {1: self.ui.pump_one_pb,
                                2: self.ui.pump_two_pb,
                                3: self.ui.pump_three_pb,
                                4: self.ui.pump_four_pb,
                                5: self.ui.pump_five_pb}
        
        self.showMaximized()

        self.frame_updater = QTimer()
        self.frame_updater.timeout.connect(self.update_frames)
        self.frame_updater.start(30)

    def closeEvent(self, event):
        self.frame_updater.stop()
        self.camera_controller.close()
        self.platform_controller.close()
        event.accept()

    def update_frames(self):
        """Updates the image_label with a new opencv image"""
        self.ui.label_2.setPixmap(self.convert_cv_qt(self.camera_controller.get_zed_frame()))
        if self.is_microscope_pressed:
            self.ui.label_3.setPixmap(self.convert_cv_qt(self.camera_controller.get_microscope_frame()))
        if self.on_uv_camera_pressed:
            self.ui.label_4.setPixmap(self.convert_cv_qt(self.camera_controller.get_uv_camera_frame()))
        if self.is_ir_camera_pressed:
            self.ui.label_5.setPixmap(self.convert_cv_qt(self.camera_controller.get_ir_camera_frame()))

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
            self.funnel_cake_controller.turn_vacuum_on()
            self.ui.collect_sample_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.funnel_cake_controller.turn_vacuum_off()
            self.ui.collect_sample_button.setStyleSheet('background-color: white;')
        self.is_collect_sample_pressed = not self.is_collect_sample_pressed

    def on_water_pump_pressed(self):
        if not self.is_water_pump_pressed:
            self.funnel_cake_controller.turn_water_pump_off()
            self.ui.water_pump_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.funnel_cake_controller.turn_water_pump_on()
            self.ui.water_pump_button.setStyleSheet('background-color: white;')
        self.is_water_pump_pressed = not self.is_water_pump_pressed

    def on_pumps_dial_value_changed(self, value):
        self.funnel_cake_controller.rotate_funnel_index(value)
        self.ui.pump_number.setText(f'{value}')

    def on_run_pump_pressed(self):
        self.funnel_cake_controller.turn_funnel_pump_on()
        for funnel in self.funnel_cake_controller.get_funnel_list():
            bar = 0
            if self.funnel_cake_controller.get_funnel_list()[funnel] is True:
                while bar <= 100:
                    self.ui_progress_bar[funnel].setValue(bar)
                    bar = int(bar + 1666 / 1000)
                    time.sleep(1.6/100)

    def on_platform_height_changed(self, value):
        self.platform_controller.set_platform_height(value)

    def on_microscope_pressed(self):
        if not self.is_microscope_pressed:
            self.camera_controller.start_microscope_streaming()
            self.ui.microscope_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.camera_controller.stop_microscope_streaming()
            self.ui.microscope_button.setStyleSheet('background-color: white;')
        self.is_microscope_pressed = not self.is_microscope_pressed

    def on_uv_camera_pressed(self):
        if not self.is_uv_camera_pressed:
            self.camera_controller.start_uv_camera_streaming()
            self.ui.uv_camera_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.camera_controller.stop_uv_camera_streaming()
            self.ui.uv_camera_button.setStyleSheet('background-color: white;')
        self.is_uv_camera_pressed = not self.is_uv_camera_pressed

    def on_ir_camera_pressed(self):
        if not self.is_ir_camera_pressed:
            self.camera_controller.start_ir_camera_streaming()
            self.ui.ir_camera_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.camera_controller.stop_ir_camera_streaming()
            self.ui.ir_camera_button.setStyleSheet('background-color: white;')
        self.is_ir_camera_pressed = not self.is_ir_camera_pressed

    def on_flashlight_pressed(self):
        if not self.is_flashlight_pressed:
            self.platform_controller.turn_flashlight_on()
            self.ui.flashlight_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.platform_controller.turn_flashlight_off()
            self.ui.flashlight_button.setStyleSheet('background-color: white;')
        self.is_flashlight_pressed = not self.is_flashlight_pressed

    def on_brush_pressed(self):
        if not self.is_brush_pressed:
            self.platform_controller.turn_brush_on()
            self.ui.brush_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.platform_controller.turn_brush_off()
            self.ui.brush_button.setStyleSheet('background-color: white;')
        self.is_brush_pressed = not self.is_brush_pressed

    def on_uv_light_pressed(self):
        if not self.is_uv_light_pressed:
            self.platform_controller.turn_uv_light_on()
            self.ui.uv_light_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.platform_controller.turn_uv_light_off()
            self.ui.uv_light_button.setStyleSheet('background-color: white;')
        self.is_uv_light_pressed = not self.is_uv_light_pressed

    def on_take_picture_button_pressed(self):
        self.camera_list[self.ui.camera_camboBox.currentIndex()][2] = True
        cam_index = self.ui.camera_camboBox.currentIndex()
        if cam_index == 0:
            self.camera_controller.take_microscope_snapshot()
        elif cam_index == 1:
            self.camera_controller.take_uv_camera_snapshot()
        elif cam_index == 2:
            self.camera_controller.take_ir_camera_snapshot()
        else:
            self.camera_controller.take_zed_snapshot()

    def on_switch_camera(self, index):
        if self.camera_list[self.ui.camera_camboBox.currentIndex()][1]:
            self.ui.start_record_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.ui.start_record_button.setStyleSheet('background-color: white;')

        if self.camera_list[self.ui.camera_camboBox.currentIndex()][3]:
            self.ui.stop_record_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.ui.stop_record_button.setStyleSheet('background-color: white;')
            

def main():
    app = QApplication(sys.argv)
    rclpy.init()
    try:
        window = MainWindow()
        window.resize(1500, 800)
        window.show()
    except KeyboardInterrupt:
        print('\n')
    except Exception as e:
        print(f'{e}')
    finally:
        sys.exit(app.exec_())


if __name__ == "__main__":
    main()
