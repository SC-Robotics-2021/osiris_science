import rclpy
from rclpy.node import Node
from station_interfaces.srv import StationWaterPump


class WaterPumpClient(Node):
    def __init__(self):
        super().__init__('water_pump_client')
        self.cli = self.create_client(StationWaterPump, 'water_pump_cmd')
        while not self.cli.wait_for_service(timeout_sec = 1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = StationWaterPump.Request()

    def send_request(self, water_pump_pressed):
        self.req.is_water_pump_on = water_pump_pressed
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
                        'Result of water_pump_cmd: %d' % response.water_pump_status)
                break
