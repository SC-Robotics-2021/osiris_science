from server_template import *

def main():
    camera_settings = {'device_num': 6, 'fps': 30, 'resolution': (320, 240)}
    camera_server = CameraServer(subsystem='science', component_name='ir_camera', camera_settings=camera_settings)
    boot(camera_server)

if __name__ == '__main__':
    main()
