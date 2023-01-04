from template_servers import *

def main():
    camera_settings = {'device_num': 2, 'fps': 30, 'resolution': (320, 240)}
    boot(CameraServer(subsystem='science', component_name='microscope', camera_settings=camera_settings))

if __name__ == '__main__':
    main()
