import template_clients.action_client as action_client

def main():
    action_client.boot(subsystem='science', component_name='lowering_platform', max_position=200)
    
if __name__ == '__main__':
    main()
