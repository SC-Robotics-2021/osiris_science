from template_clients import *

def main():
    boot(ActionClient(subsystem='science', component_name='funnel_cake'))
    
if __name__ == '__main__':
    main()
    