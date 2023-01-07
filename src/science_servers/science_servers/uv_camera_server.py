from science_servers.template_servers import *

def main():
    rclpy.init()
    camera_settings = {'device_num': 4, 'fps': 30, 'resolution': (320, 240)}
    boot(CameraServer(subsystem='science', component_name='uv_camera', camera_settings=camera_settings))

if __name__ == '__main__':
    main()