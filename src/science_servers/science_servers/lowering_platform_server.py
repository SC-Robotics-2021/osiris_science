from science_servers.template_servers import *

def sudo(args=None):
    subprocess.call(['sudo', 'python3', '-E', 'stepper_motor_server.py'])

def main():
    rclpy.init()
    boot(LoweringPlatformServer())

if __name__ == '__main__':
    if os.geteuid() != 0:
        print('You must run this script as root. Running it with sudo.')
        sudo()
    else:
        main()
