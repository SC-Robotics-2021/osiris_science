from template_subscribers import *


def main():
    boot(CameraSubscriber(subsystem='science', component_name='ir_camera'))


if __name__ == '__main__':
    main()
