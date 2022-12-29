
import rclpy
from rclpy.node import Node
from science_interfaces.srv import Turret


class TurretClient(Node):
    """
    Subclass of ROS2 Node. Issues control commands to vacuum component.
    """
    def __init__(self):
        """
        Class constructor to set up the node
        """
        super().__init__('turret_client')
        self.turret_client = self.create_client(Turret, '/osiris/science/turret/cmd')
        self.request = Turret.Request()

    def send_request(self, speed):
        """
        ROS2 request function. Sends request command via ROS2 service.
        :param state: Device to be requested by service
        """
        self.request.target = speed
        while not self.turret_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Turret service not available, waiting again...')
        self.future = self.turret_client.call_async(self.request)
        self.get_logger().info('Request sent')

    def run(self):
        """
        ROS2 spin function. Allows for activation of node class as external dependency.
        :return done: Indicates if requested service is done.
        :rtype: bool
        """
        while rclpy.ok():
            rclpy.spin_once(self)
            if self.future.done():
                try:
                    response = self.future.result()
                except Exception as e:
                    self.get_logger().info(f'{e}')
                else:
                    self.get_logger().info(f'Result of /osiris/science/turret/cmd:' +
                                           f'\n\tspeed - {self.request.target}' +
                                           f'\n\tsuccess - {response.success}' +
                                           f'\n\tmessage - {response.message}')
                break



