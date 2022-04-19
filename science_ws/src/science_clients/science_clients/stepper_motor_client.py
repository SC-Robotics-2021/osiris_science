import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from science_interfaces.action import StepperMotor


class StepperMotorClient(Node):
    """
    Subclass of ROS2 Node. Issues control commands to stepper motor component.
    """
    def __init__(self):
        """
        Class constructor to set up the node
        """
        super().__init__('stepper_motor_client')
        self.client = ActionClient(self, StepperMotor, '/osiris/science/stepper_motor/cmd')
        self.goal = StepperMotor.Goal()

    def send_request(self, height):
        """
        ROS2 request function. Sends request command via ROS2 service.
        :param height: Device to be requested by service
        """
        self.goal.height = height
        while not self.client.wait_for_server(timeout_sec=1.0):
            self.get_logger().info('Stepper motor service not available, waiting again...')
        self.future = self.client.call_async(self.goal)
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
                    self.get_logger().info(f'Result of /osiris/science/stepper_motor/cmd:' +
                                           f'\n\tstate - {self.request.height}' +
                                           f'\n\tsuccess - {response.success}' +
                                           f'\n\tmessage - {response.message}')
                break


def main(args=None):
    """
    Main function. Initializes and spins ROS2 node. Ask user to enter boolean value to simulate GUI control
    :param args: ROS2 command line arguments
    """
    rclpy.init(args=args)
    stepper_motor_client = StepperMotorClient()
    proceed = 'proceed'
    try:
        while proceed != '':
            height = None
            while height is None:
                height = input('Enter a height value as an integer from 0 to 200: ')
                try:
                    height = int(height)
                except ValueError:
                    height = None
            if height < 0:
                height = 0
            elif height > 200:
                height = 200
            stepper_motor_client.send_request(height)
            stepper_motor_client.run()
            proceed = input('\nEnter any character(s) to continue sending height commands: ')
    except Exception as e:
        stepper_motor_client.get_logger().info(f'{e})')
    except KeyboardInterrupt:
        print('\n')
    finally:
        stepper_motor_client.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
