from science_servers.template_servers import *

def main():
    rclpy.init()
    boot(GPIOServer(subsystem='science', component_name='vacuuum', pin=16))

if __name__ == '__main__':
    main()
