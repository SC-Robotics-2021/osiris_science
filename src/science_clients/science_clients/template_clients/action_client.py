from service_client import *
from science_interfaces.srv import MoveToPosition
from std_srvs.srv import Trigger

class ActionClient(ServiceClient):
    """
    Subclass of ROS2 Node. Issues control commands to stepper motor component.
    """
    def __init__(self, subsystem, component_name, action):
        """
        Class constructor to set up the node
        """
        super().__init__(subsystem, component_name, action)
        self.action = action
        self.cancel_client = self.create_client(action, f'/{subsystem}/{component_name}/cancel')

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

def boot(subsystem, component_name, max_position, action=MoveToPosition):
    """
    Main function. Initializes and spins ROS2 node. Ask user to enter boolean value to simulate GUI control
    :param args: ROS2 command line arguments
    """
    rclpy.init(subsystem, component_name, action)
    action_client = ActionClient()

    proceed = True
    try:
        while proceed:
            while position == 'prompt':
                position = input(f'Enter a position value as an integer from 0 to {max_position}.\nPress Ctrl+C to exit: ')
                try:
                    position = int(position)
                    break                    
                except ValueError:
                    position = input(f'Enter a position value as an integer from 0 to {max_position}.\nPress Ctrl+C to exit: ')
            else:
                if position < 0:
                    position = 0
                elif position > max_position:
                    position = max_position
                action_client.send_request(position)
                action_client.run()
            proceed = input('\nEnter any character(s) to continue sending position commands: ') != ''
    except KeyboardInterrupt:
        print('\n')
    except:
        action_client.get_logger().error('Device crashed!')
    finally:
        action_client.destroy_node()
        rclpy.shutdown()