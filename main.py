"""
Author: Ro Sharaf
Program: science gui and Command & Control
Date: 3/15/2022
"""

import rclpy
import sys
import time

from PyQt5.QtCore import QFile
from PyQt5.QtWidgets import QApplication, QWidget
from PyQt5.QtCore import QTimer
from PyQt5 import uic
from ui_form import Ui_MainView

from funnel_cake import FunnelCake
from platform import Platform


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

        self.funnel_cake_rover = FunnelCake()
        self.platform_rover = Platform()

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
        # rclpy.init()

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