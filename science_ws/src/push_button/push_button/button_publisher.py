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
        self.platform_height = 0
        self.collect_sample = False;
        self.microscope = False
        self.flashlight = False
        self.brush = False
        self.water_pump = False
        self.uv_camera = False
        self.funnel_cake_pos = 0

    def execute_callback(self):
        PushButton.platform_height = self.platform_height
        PushButton.collect_sample = self.collect_sample
        PushButton.microscope = self.microscope
        PushButton.flashlight = self.flashlight
        PushButton.water_pump = self.water_pump
        PushButton.brush = self.brush
        PushButton.uv_camera = self.uv_camera
        PushButton.pump_pos = self.funnel_cake_pos

        self.get_logger().info(f'{self.platform_height}, {self.collect_sample} {self.microscope}, {self.flashlight},'
                               f' {self.brush}, {self.uv_camera}, {self.water_pump}, {self.funnel_cake_pos}')

        # self.get_logger().info(f'Setting Platform Height to {self.platform_height}')
        #
        # if self.collect_sample:
        #     self.get_logger().info('Activating Collecting Sample')
        # else:
        #     self.get_logger().info('Deactivating Collecting Sample')
        #
        # if self.microscope:
        #     self.get_logger().info('Microscope status: ON')
        # else:
        #     self.get_logger().info('Microscope status: OFF')
        #
        # if self.flashlight:
        #     self.get_logger().info('Flashlight status: ON')
        # else:
        #     self.get_logger().info('Flashlight status: OFF')
        #
        # if self.brush:
        #     self.get_logger().info('Brush status: ON')
        # else:
        #     self.get_logger().info('Brush status: OFF')
        #
        # if self.uv_camera:
        #     self.get_logger().info('UV Camera status: ON')
        # else:
        #     self.get_logger().info('UV Camera status: OFF')
        #
        # self.get_logger().info(f'Running Motor {self.funnel_cake_pos}')

    def set_platform_height(self, current_platform_height):
        self.platform_height = current_platform_height

    def start_collect_sample(self, collect_sample_pushed):
        self.collect_sample = collect_sample_pushed

    def set_microscope(self, microscope_pushed):
        self.microscope = microscope_pushed

    def set_flashlight(self, flashlight_pushed):
        self.flashlight = flashlight_pushed

    def set_brush(self, brush_pushed):
        self.brush = brush_pushed

    def set_uv_camera(self, uv_camera_bushed):
        self.uv_camera = uv_camera_bushed

    def set_water_pump(self, water_pump_pushed):
        self.water_pump = water_pump_pushed

    def set_cake_pos(self, pump_position):
        self.funnel_cake_pos = pump_position


def main(args=None):
    rclpy.init(args=args)

    push_button_publisher = Publisher()

    rclpy.spin(push_button_publisher)
    push_button_publisher.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
