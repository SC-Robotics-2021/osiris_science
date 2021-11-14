import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from push_button_interface.msg import PushButton


class Subscriber(Node):

    def __init__(self):
        super().__init__('pushButton_action_client')
        self.subscription = self.create_subscription(PushButton, 'PushButton', self.send_goal, 10)

    def send_goal(self, msg):

        self.get_logger().info(f'Setting Platform to: {msg.platform_height}')

        if msg.collect_sample:
            self.get_logger().info('Initiating Sample Collection')
        else:
            self.get_logger().info('Terminating Sample Collection')

        if msg.microscope:
            self.get_logger().info('Received Microscope status: ON')
        else:
            self.get_logger().info('Received Microscope status: OFF')

        if msg.flashlight:
            self.get_logger().info('Received Flashlight status: ON')
        else:
            self.get_logger().info('Received Flashlight status: OFF')

        if msg.brush:
            self.get_logger().info('Received Brush status: ON')
        else:
            self.get_logger().info('Received Brush status: OFF')

        if msg.water_pump:
            self.get_logger().info('Received Water Pump status: ON')
        else:
            self.get_logger().info('Received Water Pump status: OFF')

        if msg.uv_cam:
            self.get_logger().info('Received UV Camera status: ON')
        else:
            self.get_logger().info('Received UV Camera status: OFF')

        self.get_logger().info(f'Positioning Funnel Cake to Slot: {msg.pump_pos}')


def main(args=None):
    rclpy.init(args=args)

    push_button_subscriber = Subscriber()

    rclpy.spin(push_button_subscriber)

    push_button_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
