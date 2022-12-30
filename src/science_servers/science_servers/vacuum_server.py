from server_template import *

def main():
    gpio_server = GPIO(subsystem='science', component_name='vacuuum', pin=16)
    boot(gpio_server)

if __name__ == '__main__':
    main()
