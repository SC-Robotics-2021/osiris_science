from science_subscribers.template_subscribers import *


def main():
    rclpy.init()
    boot(CameraSubscriber(subsystem='science', component_name='uv_camera'))


if __name__ == '__main__':
    main()
