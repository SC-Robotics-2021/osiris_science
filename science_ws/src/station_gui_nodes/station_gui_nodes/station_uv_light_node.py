import rclpy
from rclpy.node import Node
from station_interfaces.srv import StationUVLight


class UVLightClient(Node):
    def __init__(self):
        super().__init__('uv_light_client')
        self.cli = self.create_client(StationUVLight, 'uv_light_cmd')
        while not self.cli.wait_for_service(timeout_sec = 1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = StationUVLight.Request()

    def send_request(self, water_pump_pressed):
        self.req.is_uv_light_on = water_pump_pressed
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
                        'Result of uv_light_cmd: %d' % response.uv_light_status)
                break
