import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool


class UVCameraClient(Node):
    """
    Subclass of ROS2 Node. Issues control commands to UV camera component.
    """
    def __init__(self):
        """
        Class constructor to set up the node
        """
        super().__init__('uv_camera_client')
        self.client = self.create_client(SetBool, '/osiris/science/uv_camera/cmd')
        self.request = SetBool.Request()

    def send_request(self, state):
        """
        ROS2 request function. Sends request command via ROS2 service.
        :param state: Device to be requested by service
        """
        self.request.data = state
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('UV camera service not available, waiting again...')
        self.future = self.client.call_async(self.request)
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
                    self.get_logger().info(f'Result of /osiris/science/uv_camera/cmd:' +
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
    uv_camera_client = UVCameraClient()
    proceed = 'proceed'
    try:
        while proceed != '':
            state = input('Enter 1 to turn the UV camera on, or 0 to turn it off: ')
            while state != '0' or state != '1':
                state = input('Enter 1 to turn the UV camera on, or 0 to turn it off: ')
            uv_camera_client.send_request(bool(state))
            uv_camera_client.run()
            proceed = input('\nEnter any character(s) to continue sending UV camera commands: ')
    except Exception as e:
        uv_camera_client.get_logger().info(f'{e})')
    except KeyboardInterrupt:
        print('\n')
    finally:
        uv_camera_client.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
