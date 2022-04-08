from science_nodes.uv_camera_client import UVCameraClient
from science_nodes.uv_camera_sub import UVCameraSub
from science_nodes.microscope_client import MicroscopeClient
from science_nodes.microscope_sub import MicroscopeSub
from science_nodes.ir_camera_client import IRCameraClient
from science_nodes.ir_camera_sub import IRCameraSub
from science_nodes.zed_sub import ZEDSub
from threading import Thread
from rclpy.executors import *


class Cameras(object):
    def __init__(self):
        self.uv_camera_cli = UVCameraClient()
        self.uv_camera_sub = UVCameraSub()
        self.uv_camera_thread = SingleThreadedExecutor()
        self.uv_camera_thread.add_node(self.uv_camera_sub)

        self.microscope_cli = MicroscopeClient()
        self.microscope_sub = MicroscopeSub()
        self.microscope_thread = SingleThreadedExecutor()
        self.microscope_thread.add_node(self.microscope_sub)

        self.ir_camera_cli = IRCameraClient()
        self.ir_camera_sub = IRCameraSub()
        self.ir_camera_thread = SingleThreadedExecutor()
        self.ir_camera_thread.add_node(self.ir_camera_sub)

        self.zed_sub = ZEDSub()
        self.zed_thread = SingleThreadedExecutor()
        self.zed_thread.add_node(self.zed_sub)

    # UV camera functionality
    def start_uv_camera_streaming(self):
        if not self.uv_camera_thread._is_shutdown:
            self.uv_camera_thread.spin()
            self.uv_camera_cli.send_request(True)
            self.uv_camera_cli.run()

    def stop_uv_streaming(self):
        self.uv_camera_cli.send_request(False)
        self.uv_camera_cli.run()
        self.uv_camera_thread.shutdown()

    def start_uv_recording(self):
        if not self.uv_camera_thread._is_shutdown:
            self.uv_camera_sub.record = True

    def stop_uv_recording(self):
        self.uv_camera_sub.record = False

    def take_uv_camera_snapshot(self):
        if not self.uv_camera_thread._is_shutdown:
            self.uv_camera_sub.snapshot = True

    # Microscope functionality
    def start_microscope_streaming(self):
        if not self.microscope_thread._is_shutdown:
            self.microscope_thread.spin()
            self.microscope_cli.send_request(True)
            self.microscope_cli.run()

    def stop_microscope_streaming(self):
        self.microscope_cli.send_request(False)
        self.microscope_cli.run()
        self.microscope_thread.shutdown()

    def start_microscope_recording(self):
        if not self.microscope_thread._is_shutdown:
            self.microscope_sub.record = True

    def stop_microscope_recording(self):
        self.microscope_sub.record = False

    def take_microscope_snapshot(self):
        if not self.microscope_thread._is_shutdown:
            self.microscope_sub.snapshot = True

    # IR camera functionality
    def start_ir_camera_streaming(self):
        if not self.ir_camera_thread._is_shutdown:
            self.ir_camera_thread.spin()
            self.ir_camera_cli.send_request(True)
            self.ir_camera_cli.run()

    def stop_ir_camera_streaming(self):
        self.ir_camera_cli.send_request(False)
        self.ir_camera_cli.run()
        self.ir_camera_thread.shutdown()

    def start_ir_camera_recording(self):
        if not self.ir_camera_thread._is_shutdown:
            self.ir_camera_sub.record = True

    def stop_ir_camera_recording(self):
        self.ir_camera_sub.record = False

    def take_ir_camera_snapshot(self):
        if not self.ir_camera_thread._is_shutdown:
            self.ir_camera_sub.snapshot = True

    # ZED functionality
    def start_zed_recording(self):
        if not self.zed_thread._is_shutdown:
            self.zed_sub.record = True

    def stop_zed_recording(self):
        self.zed_camera_sub.record = False

    def take_zed_snapshot(self):
        if not self.zed_thread._is_shutdown:
            self.zed_camera_sub.snapshot = True

    def get_frame(self):
        return self.microscope_sub.frame

    def __del__(self):
        self.uv_camera_cli.__del__()
        self.uv_camera_sub.__del__()
        self.uv_camera_thread.__del__()
        self.microscope_cli.__del__()
        self.microscope_sub.__del__()
        self.micrscope_thread.__del__()
        self.ir_camera_cli.__del__()
        self.ir_camera_sub.__del__()
        self.ir_camera_thread.__del__()
        self.zed_sub.__del__()
        self.zed_thread.__del__()
