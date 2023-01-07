import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool
from science_interfaces.srv import MoveToPosition
from std_srvs.srv import Trigger

class ServiceClient(Node):
    """
    Subclass of ROS2 Node. Issues control commands to vacuum component.
    """
    def __init__(self, subsystem, component_name, action=SetBool):
        """
        Class constructor to set up the node
        """
        super().__init__(f'{component_name}_client')
        self.subsystem = subsystem
        self.component_name = component_name.replace("_", " ")
        self.client = self.create_client(action, f'/{subsystem}/{component_name}/cmd')
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

class ActionClient(ServiceClient):
    """
    Subclass of ROS2 Node. Issues control commands to stepper motor component.
    """
    def __init__(self, subsystem, component_name, max_position, action=MoveToPosition):
        """
        Class constructor to set up the node
        """
        super().__init__(subsystem, component_name, action)
        self.max_position = max_position
        self.action = action
        self.cancel_client = self.create_client(Trigger, f'/{subsystem}/{component_name}/cancel')

    def cancel_request(self):
        self.cancel_future = self.cancel_client.call_async(self.action.Request())
        self.get_logger().info('Cancel request sent')

    def run(self):
        """
        ROS2 spin function. Allows for activation of node class as external dependency.
        """
        try:
            while rclpy.ok():
                rclpy.spin_once(self)
                if self.future.done():
                    try:
                        response = self.future.result()
                    except not KeyboardInterrupt:
                        self.get_logger().error(f'Request failed')
                    else:
                        self.get_logger().info(f'Result of request:' +
                                               f'\n\t\t\t\t\tposition - {response.position}' +
                                               f'\n\t\t\t\t\tsuccess - {response.success}' +
                                               f'\n\t\t\t\t\tmessage - {response.message}')
                    break
        except KeyboardInterrupt:
            self.cancel_request()
            while rclpy.ok():
                rclpy.spin_once(self)
                if self.future.done():
                    try:
                        response = self.future.result()
                    except not KeyboardInterrupt:
                        self.get_logger().error(f'Request failed')
                    else:
                        self.get_logger().info(f'Result request:' +
                                               f'\n\t\t\t\t\tposition - {response.position}' +
                                               f'\n\t\t\t\t\tsuccess - {response.success}' +
                                               f'\n\t\t\t\t\tmessage - {response.message}')
                    break

def boot(client): # replace with ActionClient as needed
    """
    Initializes and spins ROS2 node. Ask user to enter boolean value to simulate GUI control.

    :param args: ROS2 command line arguments
    """
    proceed = True
    try:
        while proceed:
            if type(client) == ServiceClient:
                state = input(f'Enter 1 to turn the {client.component_name} on, or 0 to turn it off: ')
                while state != '0' or state != '1':
                    state = input(f'Enter 1 to turn the {client.component_name} on, or 0 to turn it off: ')
                client.send_request(bool(state))
            elif type(client) == ActionClient:
                position = 'prompt'
                while position == 'prompt':
                    position = input(f'Enter a position value as an integer from 0 to {client.max_position}. Press Ctrl+C to exit: ')
                    try:
                        position = int(position)
                        print('breaking prompt loop')
                        break                    
                    except ValueError:
                        position = 'prompt'
                if position < 0:
                    position = 0
                    client.get_logger().warn('Position value cannot be negative. Setting to 0.')
                elif position > client.max_position:
                    position = client.max_position
                    client.get_logger().warn(f'Position value cannot be greater than {client.max_position}. Setting to {client.max_position}.')
                client.send_request(position)
            client.run()
            proceed = input(f'\nEnter any character(s) to continue sending position commands {client.component_name}: ')
            proceed = bool(proceed)
    except AssertionError:
        assert(type(client) in [ServiceClient, ActionClient])
    except KeyboardInterrupt:
        print('\n')
    except:
        client.get_logger().error('Device crashed!')
    finally:
        rclpy.shutdown()
