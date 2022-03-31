import rclpy
from rclpy.node import Node
# import RPi.GPIO as GPIO
from station_interfaces.srv import StationUVLight


class UVLightService(Node):
    def __init__(self) -> None:
        super().__init__('platform_uv_light_service')
        self.srv = self.create_service(StationUVLight, 'uv_light_cmd', self.turn_uv_light)
        self.pin_ = 12
        # GPIO.setmode(GPIO.Board)
        # GPIO.setup(self.pin_, GPIO.OUT)

    def turn_uv_light(self, request, response) -> None:
        response.uv_light_status = request.is_uv_light_on
        self.get_logger().info('Incoming request\nUV Light: %d' % request.is_flashlight_on)
        if request.is_uv_light_on:
            pass
            # GPIO.output(self.pin_, GPIO.HIGH)
        else:
            pass
            # GPIO.output(self.pin_, GPIO.LOW)
        return response


# def main(args=None):
#     rclpy.init(args=args)
#     node = UVLightService()
#     rclpy.spin(node)
#     rclpy.shutdown()
#
#
# if __name__ == '__main__':
#     main()
