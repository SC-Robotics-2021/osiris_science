import rclpy
import sys
from science_ws.src.push_button.push_button import button_publisher, button_subscriber
# from PySide2.QtUiTools import QUiLoader
# from PySide2.QtWidgets import (QApplication, QMainWindow, QWidget)
# from PySide2.QtCore import QFile, QIODevice

from PyQt5.QtCore import QFile
from PyQt5.QtWidgets import QApplication
from PyQt5 import uic


def collect_sample():
    print("pressed collect sample")


def platform_up():
    print("pressed platform up")


def platform_down():
    print("pressed platform down")


def microscope():
    print("pressed microscope")
    rclpy.init()
    push_button_publisher = button_publisher.Publisher()
    push_button_publisher.set_microscope(True)
    rclpy.spin_once(push_button_publisher)
    push_button_publisher.set_microscope(False)
    push_button_publisher.destroy_node()
    rclpy.shutdown()


def flashlight():
    print("pressed flashlight")


def brush():
    print("pressed brush")


def uv_camera():
    print("pressed uv_camera")


if __name__ == "__main__":
    app = QApplication(sys.argv)
    # ui_file = QFile("form.ui")
    window = uic.loadUi("form.ui")
    window.collect_sample_button.clicked.connect(collect_sample)
    window.platform_up_button.clicked.connect(platform_up)
    window.platform_down_button.clicked.connect(platform_down)
    window.microscope_button.clicked.connect(microscope)
    window.flashlight_button.clicked.connect(flashlight)
    window.brush_button.clicked.connect(brush)
    window.uv_camera_button.clicked.connect(uv_camera)
    window.show()


    sys.exit(app.exec_())


