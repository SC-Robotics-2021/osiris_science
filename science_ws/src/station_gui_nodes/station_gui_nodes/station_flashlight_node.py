import rclpy
from rclpy.node import Node
from station_interfaces.srv import StationFlashlight


class FlashlightClient(Node):
    def __init__(self):
        super().__init__('flashlight_client')
        self.cli = self.create_client(StationFlashlight, 'flashlight_cmd')
        while not self.cli.wait_for_service(timeout_sec = 1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = StationFlashlight.Request()

    def send_request(self, flashlight_pressed):
        self.req.is_flashlight_on = flashlight_pressed
        self.future = self.cli.call_async(self.req)

    def run_node(self):
        rclpy.spin_once(self)
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
                        'Result of flashlight_cmd: %d' % response.flashlight_status)
                break
