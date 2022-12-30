import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool

class ServiceClient(Node):
    """
    Subclass of ROS2 Node. Issues control commands to vacuum component.
    """
    def __init__(self, subsystem, component_name, service):
        """
        Class constructor to set up the node
        """
        super().__init__(f'{component_name}_client')
        self.subsystem = subsystem
        self.component_name = component_name.replace("_", " ")
        self.client = self.create_client(service, f'/{subsystem}/{component_name}/cmd')
        self.request = SetBool.Request()

    def send_request(self, state):
        """
        ROS2 request function. Sends request command via ROS2 service.

        :param state: Device to be requested by service
        """
        self.request.data = state
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Device not available, waiting again...')
        self.future = self.client.call_async(self.request)
        self.get_logger().info('Request sent.')

    def run(self):
        """
        ROS2 spin function. Allows for activation of node class as external dependency.
        """
        while rclpy.ok():
            rclpy.spin_once(self)
            if self.future.done():
                try:
                    response = self.future.result()
                except:
                    self.get_logger().exception('Request failed.')
                else:
                    self.get_logger().info(f'Result of request:' +
                                           f'\n\tstate  {self.request.data}' +
                                           f'\n\tsuccess - {response.success}' +
                                           f'\n\tmessage - {response.message}')
                break

def boot(subsystem, component_name, service=SetBool):
    """
    Initializes and spins ROS2 node. Ask user to enter boolean value to simulate GUI control.

    :param args: ROS2 command line arguments
    """
    rclpy.init()
    service_client = ServiceClient(subsystem, component_name, service=service)
    proceed = 'proceed'
    try:
        while proceed != '':
            state = input(f'Enter 1 to turn the {service_client.component_name} on, or 0 to turn it off: ')
            while state != '0' or state != '1':
                state = input(f'Enter 1 to turn the {service_client.component_name} on, or 0 to turn it off: ')
            service_client.send_request(bool(state))
            service_client.run()
            proceed = input(f'\nEnter any character(s) to continue sending {service_client.component_name} commands: ')
    except KeyboardInterrupt:
        print('\n')
    except:
        service_client.get_logger().exception('Device crashed!')
    finally:
        service_client.destroy_node()
        rclpy.shutdown()