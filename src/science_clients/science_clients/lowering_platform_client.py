from template_clients import *

def main():
    boot(ActionClient(subsystem='science', component_name='lowering_platform'))
    
if __name__ == '__main__':
    main()
    