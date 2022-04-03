import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool


class FlashlightClient(Node):
    def __init__(self):
        super().__init__('flashlight_client')
        self.flashlight_client = self.create_client(SetBool, '/osiris/science/flashlight/cmd')
        while not self.flashlight_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('flash light service not available, waiting again...')
        self.flashlight_req = SetBool.Request()

    def send_request(self, state):
        self.flashlight_req.data = state
        self.future = self.flashlight_client.call_async(self.flashlight_req)

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
                        f'Result of /osiris/science/flashlight/cmd:'
                        f' state: {self.flashlight_req.data}'
                        f' success: {response.success}'
                        f' message: {response.message}')
                break



# TODO: setting flashlight on standby until further notice