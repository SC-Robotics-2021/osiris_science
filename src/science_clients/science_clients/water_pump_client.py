from template_clients import *

def main():
    boot(ServiceClient(subsystem='science', component_name='water_pump'))
    
if __name__ == '__main__':
    main()
