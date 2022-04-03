import rclpy
from rclpy.node import Node
from station_interfaces.srv import StationStepper


class StepperClient(Node):
    def __init__(self):
        super().__init__('stepper_motor_client')
        self.stepper_client = self.create_client(
            StationStepper,
            '/osiris/science/stepper/cmd')
        while not self.stepper_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('stepper motor service not available, waiting again...')
        self.stepper_req = StationStepper.Request()

    def send_request(self, height):
        self.stepper_req.height = height
        self.future = self.stepper_client.call_async(self.stepper_req)

    def run(self):
        while rclpy.ok():
            rclpy.spin_once(self)
            if self.future.done():
                try:
                    response = self.future.result()
                except Exception as e:
                    self.get_logger().info(
                        'Service call failed %r' % (e,))
                else:
                    self.get_logger().info(
                        f'Result of /osiris/science/flashlight/cmd:'
                        f' height: {self.stepper_req.height}'
                        f' success: {response.success}'
                        f' message: {response.message}')
                break
