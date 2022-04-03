import rclpy
from rclpy.node import Node
from station_interfaces.srv import StationFunnelCake


class FunnelCakeClient(Node):
    def __init__(self):
        super().__init__('funnel_cake_client')
        self.funnel_cake_client = self.create_client(StationFunnelCake, '/osiris/science/funnel_cake/cmd')
        while not self.funnel_cake_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.funnel_cake_req = StationFunnelCake.Request()

    def send_request(self, position):
        self.funnel_cake_req.pump_num = position
        self.future = self.funnel_cake_client.call_async(self.funnel_cake_req)

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
                        f'Result of /osiris/science/funnel_cake/cmd:'
                        f' pump: {self.funnel_cake_req.pump_num}'
                        f' success: {response.success}'
                        f' message: {response.message}')
                break
