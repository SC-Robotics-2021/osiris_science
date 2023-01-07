from science_servers.template_servers import *

def main():
    rclpy.init()
    boot(FunnelCakeServer())

if __name__ == '__main__':
    main()
