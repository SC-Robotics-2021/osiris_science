import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool


class VacuumClient(Node):
    def __init__(self):
        super().__init__('vacuum_client')
        self.vacuum_cmd_client = self.create_client(
            SetBool,
            '/osiris/science/vacuum/cmd')
        while not self.vacuum_cmd_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('vacuum service not available, waiting again...')
        self.vacuum_req = SetBool.Request()

    def send_request(self, state):
        self.vacuum_req.data = state
        self.future = self.vacuum_cmd_client.call_async(self.velocity_req)

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
                        f'Result of /osiris/science/vacuum/cmd:'
                        f' state: {self.vacuum_req.side}'
                        f' success: {response.success}'
                        f' message: {response.message}')
                break