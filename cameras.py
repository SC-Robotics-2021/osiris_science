from science_subscribers.zed_sub import ZEDSub
from science_clients.microscope_client import MicroscopeClient
from science_subscribers.microscope_sub import MicroscopeSub
from science_clients.uv_camera_client import UVCameraClient
from science_subscribers.uv_camera_sub import UVCameraSub
from science_clients.ir_camera_client import IRCameraClient
from science_subscribers.ir_camera_sub import IRCameraSub
from rclpy.executors import MultiThreadedExecutor
from threading import Thread


class Cameras(object):
    def __init__(self):
        self.zed_sub = ZEDSub()
        self.zed_sub.science_gui = True

        self.microscope_client = MicroscopeClient()
        self.microscope_sub = MicroscopeSub()

        self.uv_camera_client = UVCameraClient()
        self.uv_camera_sub = UVCameraSub()

        self.ir_camera_client = IRCameraClient()
        self.ir_camera_sub = IRCameraSub()

        self.camera_executor = MultiThreadedExecutor()
        self.camera_executor.add_node(self.zed_sub)
        self.camera_executor.add_node(self.microscope_sub)
        self.camera_executor.add_node(self.uv_camera_sub)
        self.camera_executor.add_node(self.ir_camera_sub)
        self.camera_thread = Thread(target=self.camera_executor.spin, daemon=True)
        self.camera_thread.start()

    def take_zed_snapshot(self):
        self.zed_sub.snapshot = True

    def get_zed_frame(self):
        return self.zed_sub.frame

    def start_microscope_streaming(self):
        self.microscope_client.send_request(True)
        self.microscope_client.run()

    def stop_microscope_streaming(self):
        self.microscope_client.send_request(False)
        self.microscope_client.run()

    def take_microscope_snapshot(self):
        self.microscope_sub.snapshot = True

    def get_microscope_frame(self):
        return self.microscope_sub.frame

    def start_uv_camera_streaming(self):
        self.uv_camera_client.send_request(True)
        self.uv_camera_client.run()

    def stop_uv_camera_streaming(self):
        self.uv_camera_client.send_request(False)
        self.uv_camera_client.run()

    def take_uv_camera_snapshot(self):
        self.uv_camera_sub.snapshot = True

    def get_uv_camera_frame(self):
        return self.uv_camera_sub.frame

    def start_ir_camera_streaming(self):
        self.ir_camera_client.send_request(True)
        self.ir_camera_client.run()

    def stop_ir_camera_streaming(self):
        self.ir_camera_client.send_request(False)
        self.ir_camera_client.run()

    def take_ir_camera_snapshot(self):
        self.ir_camera_sub.snapshot = True

    def get_ir_camera_frame(self):
        return self.ir_camera_sub.frame

    def close(self):
        self.camera_executor.shutdown
        self.microscope_sub.destroy_node()
        self.microscope_client.destroy_node()
        self.uv_camera_sub.destroy_node()
        self.uv_camera_client.destroy_node()
        self.ir_camera_sub.destroy_node()
        self.ir_camera_client.destroy_node()
        self.zed_sub.destroy_node()
        self.camera_thread.join()



