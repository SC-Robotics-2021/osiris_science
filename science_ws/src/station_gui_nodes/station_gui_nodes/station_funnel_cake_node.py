import rclpy
from rclpy.node import Node
from station_interfaces.srv import StationFunnelCake


class FunnelCakeClient(Node):
    def __init__(self):
        super().__init__('funnel_cake_client')
        self.cli = self.create_client(StationFunnelCake, 'funnel_cake_cmd')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = StationFunnelCake.Request()

    def send_request(self, funnel_cake_position):
        self.req.pump_num = funnel_cake_position
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
                        'Result of funnel_cake_cmd: Funnel Cake Position: %d --> Angle: %d'
                        % (self.req.pump_num, response.funnel_cake_pos))
                break
