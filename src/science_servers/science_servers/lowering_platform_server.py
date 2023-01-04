from template_servers import *

def sudo(args=None):
    subprocess.call(['sudo', 'python3', '-E', 'stepper_motor_server.py'])

def main():
    boot(LoweringPlatformServer(subsystem='science', component_name='lowering_platform'))

if __name__ == '__main__':
    if os.geteuid() != 0:
        sudo()
    else:
        main()
