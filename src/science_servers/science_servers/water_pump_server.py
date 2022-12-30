from server_template import *

def main():
    gpio_server = GPIO(subsystem='science', component_name='water_pump', pin=14)
    boot(gpio_server)

if __name__ == '__main__':
    main()
