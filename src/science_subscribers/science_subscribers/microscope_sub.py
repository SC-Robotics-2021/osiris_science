from template_subscribers import *


def main():
    boot(CameraSubscriber(subsystem='science', component_name='microscope'))


if __name__ == '__main__':
    main()
