from science_clients.template_clients import *

def main():
    rclpy.init()
    boot(ServiceClient(subsystem='science', component_name='microscope'))
    
if __name__ == '__main__':
    main()
