import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from lowering_platform_interfaces.action import StepperMotor


class StepperMotorClient(Node):
    """
    Subclass of ROS2 Node class. Receives and displays video feed from camera.
    """
    def __init__(self):
        """
        Class constructor to set up the node
        """
        # initiate the Node class's constructor and give it a name
        super().__init__('stepper_motor_client')
        # create client to control camera
        self.cli = ActionClient(self, StepperMotor, '/osiris/science/stepper_motor/cmd')
        self.goal = StepperMotor.Goal()

    def send_request(self, height):
        """
        ROS2 request function. Sends request command via ROS2 service.
        :param height: Device to be requested by service
        """
        self.goal.height = height
        while not self.cli.wait_for_server(timeout_sec=1.0):
            self.get_logger().info('Stepper motor not available, waiting again...')
        self.future = self.cli.call_async(self.goal)
        self.get_logger().info('Request sent')

    def run(self):
        """
        ROS2 spin function. Allows for activation of node class as external dependency.
        :return done: Indicates if requested service is done.
        :rtype: bool
        """
        while(rclpy.ok()):
            rclpy.spin_once(self)
            if self.future.done():
                try:
                    response = self.future.result()
                except Exception as e:
                    self.get_logger().info(f'{e}')
                else:
                    self.get_logger().info(
                        f'Result of /osiris/science/stepper_motor/cmd:'
                        f' state - {self.request.height}'
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
    stepper_motor_client = StepperMotorClient()
    proceed = 'proceed'
    try:
        while proceed != '':
            height = int(input('Enter a height value as an integer from 0 to 200: '))
            while height < 0 or height > 200:
                height = int(input('Enter a height value as an integer from 0 to 200: '))
            stepper_motor_client.send_request(height)
            while rclpy.ok():
                done = stepper_motor_client.run_node()
                if done:
                    break
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
