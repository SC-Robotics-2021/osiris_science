import rclpy
from rclpy.node import Node
# import RPi.GPIO as GPIO
from station_interfaces.srv import StationFunnelCake


class PlatformService(Node):
    def __init__(self) -> None:
        super().__init__('platform_service')
        self.srv = self.create_service(StationFunnelCake, 'platform_cmd', self.set_platform_height)
        self.pin_ = 12
        # GPIO.setmode(GPIO.Board)
        # GPIO.setup(self.pin_, GPIO.OUT)

    def set_platform_height(self, request, response) -> None:
        response.height = request.current_height
        self.get_logger().info('Incoming request\nPlatform Height: %d' % request.height)
        pass
        return response


# def main(args=None):
#     rclpy.init(args=args)
#     node = WaterPumpService()
#     rclpy.spin(node)
#     rclpy.shutdown()
#
#
# if __name__ == '__main__':
#     main()
