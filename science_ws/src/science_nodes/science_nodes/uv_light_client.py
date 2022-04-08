import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool


class UVLightClient(Node):
    """
    Subclass of ROS2 Node class. Receives and displays video feed from camera.
    """
    def __init__(self):
        """
        Class constructor to set up the node
        """
        # initiate the Node class's constructor and give it a name
        super().__init__('uv_light_client')
        # create client to control camera
        self.cli = self.create_client(SetBool, '/osiris/science/uv_light/cmd')
        self.request = SetBool.Request()

    def send_request(self, state):
        """
        ROS2 request function. Sends request command via ROS2 service.
        :param state: Device to be requested by service
        """
        self.request.data = state
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('UV light service  not available, waiting again...')
        self.future = self.cli.call_async(self.request)
        self.get_logger().info('Request sent')

    def run(self):
        """
        ROS2 spin function. Allows for activation of node class as external dependency.
        :return done: Indicates if requested service is done.
        :rtype: bool
        """
        while rclpy.ok():
            rclpy.spin_once(self)
            if self.future.done():
                try:
                    response = self.future.result()
                except Exception as e:
                    self.get_logger().info(f'{e}')
                else:
                    self.get_logger().info(
                        f'Result of /osiris/science/uv_light/cmd:'
                        f' state - {self.request.data}'
                        f' success - {response.success}'
                        f' message - {response.message}')
                break

    def __del__(self):
        """
        Destructor function. Shuts down node explicitly.
        """
        self.get_logger().info('Shutting down node')
        super().destroy_node()


def main(args=None):
    """
    Main function. Initializes and spins ROS2 node. Ask user to enter boolean value to simulate GUI control
    :param args: ROS2 command line arguments
    """
    rclpy.init(args=args)
    uv_light_client = UVLightClient()
    proceed = 'proceed'
    try:
        while proceed != '':
            height = int(input('Enter 1 to turn the UV light on, or 0 to turn it off: '))
            while height < 0 or height > 1:
                height = int(input('Enter 1 to turn the UV light on, or 0 to turn it off: '))
            uv_light_client.send_request(bool(height))
            while rclpy.ok():
                done = uv_light_client.run_node()
                if done:
                    break
            proceed = input('\nEnter any character(s) to continue sending UV light commands: ')
    except Exception as e:
        uv_light_client.get_logger().info(f'{e})')
    except KeyboardInterrupt:
        print('\n')
    finally:
        uv_light_client.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
