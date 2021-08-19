import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from push_button_interface.msg import PushButton
from std_msgs.msg import String


class Publisher(Node):

    microscope: bool

    def __init__(self):
        super().__init__('push_button_publisher')
        self.publisher_ = self.create_publisher(PushButton, 'topic', 10)
        self.timer = self.create_timer(1, self.execute_callback)
        self.microscope = False

    def execute_callback(self):
        PushButton.microscope = self.microscope
        if self.microscope:
            self.get_logger().info('Microscope status: ON')
        else:
            self.get_logger().info('Microscope status: OFF')

    def set_microscope(self, microscope_pushed):
        self.microscope = microscope_pushed


def main(args=None):
    rclpy.init(args=args)

    push_button_publisher = Publisher()

    rclpy.spin(push_button_publisher)
    push_button_publisher.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
