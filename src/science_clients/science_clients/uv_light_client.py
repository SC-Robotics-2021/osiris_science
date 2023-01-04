from template_clients import *

def main():
    boot(ServiceClient(subsystem='science', component_name='uv_light'))
    
if __name__ == '__main__':
    main()
