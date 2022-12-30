from server_template import *

def main():
    camera_settings = {'device_num': 2, 'fps': 30, 'resolution': (320, 240)}
    camera_server = CameraServer(subsystem='science', component_name='microscope', camera_settings=camera_settings)
    boot(camera_server)

if __name__ == '__main__':
    main()
