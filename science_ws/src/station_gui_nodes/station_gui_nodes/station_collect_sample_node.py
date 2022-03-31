import rclpy
from rclpy.node import Node
from station_interfaces.srv import StationCollectSample


class CollectSampleClient(Node):
    def __init__(self):
        super().__init__('collect_sample_client')
        self.cli = self.create_client(StationCollectSample, 'collect_sample_cmd')
        while not self.cli.wait_for_service(timeout_sec = 1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = StationCollectSample.Request()

    def send_request(self, collect_sample_pressed):
        self.req.is_collect_sample_on = collect_sample_pressed
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
                        'Result of collect_sample_cmd: %d' % response.collect_sample_status)
                break
