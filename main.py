import rclpy
import sys
from science_ws.src.push_button.push_button import button_publisher, button_subscriber
# from PySide2.QtUiTools import QUiLoader
# from PySide2.QtWidgets import (QApplication, QMainWindow, QWidget)
# from PySide2.QtCore import QFile, QIODevice

from PyQt5.QtCore import QFile
from PyQt5.QtWidgets import QApplication, QWidget
from PyQt5.QtCore import QTimer
from PyQt5 import uic
from ui_form import Ui_MainView


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
        self.ui.uv_camera_button.clicked.connect(self.on_uv_camera_pressed)
        self.ui.water_pump_button.clicked.connect(self.on_water_pump_pressed)
        self.ui.run_pump_button.clicked.connect(self.on_run_pump_pressed)
        self.ui.pumps_dial.valueChanged.connect(self.on_pumps_dial_value_changed)

        self.motor_num = 1
        self.is_collect_sample_pressed = False
        self.is_microscope_pressed = False
        self.is_flashlight_pressed = False
        self.is_brush_pressed = False
        self.is_uv_camera_pressed = False
        self.is_water_pump_pressed = False
        rclpy.init()
        self.push_button_publisher = button_publisher.Publisher()

        # self.ui.cameras_box.setStyleSheet('color: black;'
        #                                   'background-color: #D7D29C;'
        #                                   'selection-color: yellow;'
        #                                   'selection-background-color: blue;')
        #
        # self.ui.funnel_cake_box.setStyleSheet('color: black;'
        #                                        'background-color: #B3FFE7;'
        #                                        'selection-color: yellow;'
        #                                        'selection-background-color: blue;')
        #
        # self.ui.platform_box.setStyleSheet('color: black;'
        #                                        'background-color: #B3BAFF;'
        #                                        'selection-color: yellow;'
        #                                        'selection-background-color: blue;')
        #
        # self.ui.sample_box.setStyleSheet('color: black;'
        #                                        'background-color: #7A958E;'
        #                                        'selection-color: yellow;'
        #                                        'selection-background-color: blue;')

    def on_collect_sample_pressed(self):
        if not self.is_collect_sample_pressed:
            self.ui.collect_sample_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.ui.collect_sample_button.setStyleSheet('background-color: white;')
        self.is_collect_sample_pressed = not self.is_collect_sample_pressed
        self.push_button_publisher.start_collect_sample(self.is_collect_sample_pressed)
        rclpy.spin_once(self.push_button_publisher)

    def on_platform_height_changed(self, value):
        self.push_button_publisher.set_platform_height(value)
        rclpy.spin_once(self.push_button_publisher)

    def on_microscope_pressed(self):
        if not self.is_microscope_pressed:
            self.ui.microscope_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.ui.microscope_button.setStyleSheet('background-color: white;')
        self.is_microscope_pressed = not self.is_microscope_pressed
        self.push_button_publisher.set_microscope(self.is_microscope_pressed)
        rclpy.spin_once(self.push_button_publisher)

    def on_flashlight_pressed(self):
        if not self.is_flashlight_pressed:
            self.ui.flashlight_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.ui.flashlight_button.setStyleSheet('background-color: white;')
        self.is_flashlight_pressed = not self.is_flashlight_pressed
        self.push_button_publisher.set_flashlight(self.is_flashlight_pressed)
        rclpy.spin_once(self.push_button_publisher)

    def on_brush_pressed(self):
        if not self.is_brush_pressed:
            self.ui.brush_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.ui.brush_button.setStyleSheet('background-color: white;')
        self.is_brush_pressed = not self.is_brush_pressed
        self.push_button_publisher.set_brush(self.is_brush_pressed)
        rclpy.spin_once(self.push_button_publisher)

    def on_uv_camera_pressed(self):
        if not self.is_uv_camera_pressed:
            self.ui.uv_camera_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.ui.uv_camera_button.setStyleSheet('background-color: white;')
        self.is_uv_camera_pressed = not self.is_uv_camera_pressed
        self.push_button_publisher.set_uv_camera(self.is_uv_camera_pressed)
        rclpy.spin_once(self.push_button_publisher)

    def on_pumps_dial_value_changed(self, value):
        if value == 6: value = 1
        self.motor_num = value
        self.ui.pump_number.setText(f'{value}')

    def on_water_pump_pressed(self):
        if not self.is_water_pump_pressed:
            self.ui.water_pump_button.setStyleSheet('background-color: #B3BAFF;')
        else:
            self.ui.water_pump_button.setStyleSheet('background-color: white;')
        self.is_water_pump_pressed = not self.is_water_pump_pressed
        self.push_button_publisher.set_water_pump(self.is_water_pump_pressed)
        rclpy.spin_once(self.push_button_publisher)

    def on_run_pump_pressed(self):
        self.push_button_publisher.set_cake_pos(self.motor_num)
        rclpy.spin_once(self.push_button_publisher)


if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.resize(1500, 800)
    window.show()
    sys.exit(app.exec_())

# self.push_button_publisher.destroy_node()
# rclpy.shutdown()
