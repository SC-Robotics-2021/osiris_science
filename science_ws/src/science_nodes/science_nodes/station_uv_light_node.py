import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool


class UVLightClient(Node):
    def __init__(self):
        super().__init__('uv_light_client')
        self.uv_light_cmd_client = self.create_client(
            SetBool,
            '/osiris/science/uv_light/cmd')
        while not self.uv_light_cmd_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('uv light service not available, waiting again...')
        self.uv_light_req = SetBool.Request()

    def send_request(self, state):
        self.uv_light_req.data = state
        self.future = self.uv_light_cmd_client.call_async(self.uv_light_req)

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
                        f'Result of /osiris/science/uv_light/cmd:'
                        f' state: {self.uv_light_req.data}'
                        f' success: {response.success}'
                        f' message: {response.message}')
                break
