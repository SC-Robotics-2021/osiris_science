# from science_nodes.microscope_client import MicroscopeClient
# from science_nodes.microscope_sub import MicroscopeSub
# from science_nodes.uv_camera_client import UVCameraClient
# from science_nodes.uv_camera_sub import UVCameraSub
# from science_nodes.ir_camera_client import IRCameraClient
# from science_nodes.ir_camera_sub import MicroscopeSub

class Cameras(object):
    def __init__(self):
        self._microscope_cli = MicroscopeClient()
        self._microscope_sub = MicroscopeSub()
        self._uv_camera_cli = UVCameraClient()
        self._uv_camera_sub = UVCameraSub()
        # self.microscope_sub.run_node()

    def start_streaming(self):
        self.microscope_cli.send_request(False)
        self.microscope_cli.run_node()

    def stop_streaming(self):
        pass

    def start_recording(self):
        self.microscope_sub.record = True

    def take_snapshot(self):

        self.camera_list = {'Microscope':  {'Record': False},
                            'UV Camera':   {'Record': False},
                            'NoIR Camera': {'Record': False},
                            'Zed Camera':  {'Record': False}}
        pass

    def get_frame(self):
        return self.microscope_sub.frame


