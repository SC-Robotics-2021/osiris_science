import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool


class WaterPumpClient(Node):
    def __init__(self):
        super().__init__('water_pump_client')
        self.water_pump_cmd_client = self.create_client(
            SetBool,
            '/osiris/science/water_pump/cmd')
        while not self.water_pump_cmd_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('water pump service not available, waiting again...')
        self.water_pump_req = SetBool.Request()

    def send_request(self, state):
        self.water_pump_req.data = state
        self.future = self.water_pump_cmd_client.call_async(self.water_pump_req)

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
                        f'Result of /osiris/science/water_pump/cmd:'
                        f' state: {self.water_pump_req.data}'
                        f' success: {response.success}'
                        f' message: {response.message}')
                break
