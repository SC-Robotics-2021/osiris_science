import rclpy
from rclpy.node import Node
from science_interfaces.srv import FunnelCake


class FunnelCakeClient(Node):
    """
    Subclass of ROS2 Node. Issues control commands to funnel cake component.
    """
    def __init__(self):
        """
        Class constructor to set up the node
        """
        super().__init__('funnel_cake_client')
        self.client = self.create_client(FunnelCake, '/osiris/science/funnel_cake/cmd')
        self.request = FunnelCake.Request()

    def send_request(self, position):
        """
        ROS2 request function. Sends request command via ROS2 service.
        :param position: Device state to be requested by service
        """
        self.request.pump_num = position
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Funnel cake service not available, waiting again...')
        self.future = self.client.call_async(self.request)
        self.get_logger().info('Request sent')

    def run(self):
        """
        ROS2 spin function. Allows for activation of node class as external dependency.
        """
        while rclpy.ok():
            rclpy.spin_once(self)
            if self.future.done():
                try:
                    response = self.future.result()
                except Exception as e:
                    self.get_logger().info(f'{e}')
                else:
                    self.get_logger().info(f'Result of /osiris/science/funnel_cake/cmd:' +
                                           f'\n\tstate - {self.request.data}' +
                                           f'\n\tsuccess - {response.success}' +
                                           f'\n\tmessage - {response.message}')
                break


def main(args=None):
    """
    Main function. Initializes and spins ROS2 node. Ask user to enter boolean value to simulate GUI control
    :param args: ROS2 command line arguments
    """
    rclpy.init(args=args)
    funnel_cake_client = FunnelCakeClient()
    proceed = 'proceed'
    try:
        while proceed != '':
            state = input('Enter 1 to turn the funnel cake on, or 0 to turn it off: ')
            while state != '0' or state != '1':
                state = input('Enter 1 to turn the funnel cake on, or 0 to turn it off: ')
            funnel_cake_client.send_request(bool(state))
            funnel_cake_client.run()
            proceed = input('\nEnter any character(s) to continue sending funnel cake commands: ')
    except Exception as e:
        funnel_cake_client.get_logger().info(f'{e})')
    except KeyboardInterrupt:
        print('\n')
    finally:
        funnel_cake_client.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
