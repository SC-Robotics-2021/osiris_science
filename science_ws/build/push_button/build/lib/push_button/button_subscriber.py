import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from push_button_interface.msg import PushButton


class Subscriber(Node):

    def __init__(self):
        super().__init__('pushButton_action_client')
        self.subscription = self.create_subscription(PushButton, 'PushButton', self.send_goal, 10)

    def send_goal(self, msg):
        if msg.microscope:
            self.get_logger().info('Received Microscope status: ON')
        else:
            self.get_logger().info('Received Microscope status: OFF')


def main(args=None):
    rclpy.init(args=args)

    push_button_subscriber = Subscriber()

    rclpy.spin(push_button_subscriber)

    push_button_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
