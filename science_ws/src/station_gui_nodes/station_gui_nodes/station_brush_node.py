import rclpy
from rclpy.node import Node
from station_interfaces.srv import StationBrush


class BrushClient(Node):
    def __init__(self):
        super().__init__('brush_client')
        self.cli = self.create_client(StationBrush, 'brush_cmd')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = StationBrush.Request()

    def send_request(self, brush_pressed):
        self.req.is_brush_on = brush_pressed
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
                        'Result of brush_cmd: %d' % response.brush_status)
                break
