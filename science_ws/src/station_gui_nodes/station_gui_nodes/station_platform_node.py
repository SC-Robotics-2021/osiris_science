import rclpy
from rclpy.node import Node
from station_interfaces.srv import StationPlatform


class PlatformClient(Node):
    def __init__(self):
        super().__init__('platform_client')
        self.cli = self.create_client(StationPlatform, 'platform_cmd')
        while not self.cli.wait_for_service(timeout_sec = 1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = StationPlatform.Request()

    def send_request(self, platform_height):
        self.req.height = platform_height
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
                        'Result of platform_cmd height: %d' % response.current_height)
                break
