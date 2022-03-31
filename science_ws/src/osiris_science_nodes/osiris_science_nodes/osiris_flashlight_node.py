import rclpy
from rclpy.node import Node
# import RPi.GPIO as GPIO
from station_interfaces.srv import StationFlashlight


class FlashLightService(Node):
    def __init__(self) -> None:
        super().__init__('platform_flashlight_service')
        self.srv = self.create_service(StationFlashlight, 'flashlight_cmd', self.turn_flashlight)
        self.pin_ = 12
        # GPIO.setmode(GPIO.Board)
        # GPIO.setup(self.pin_, GPIO.OUT)

    def turn_flashlight(self, request, response) -> None:
        response.flashlight_status = request.is_flashlight_on
        self.get_logger().info('Incoming request\nFlashlight: %d' % request.is_flashlight_on)
        if request.is_flashlight_on:
            pass
            # GPIO.output(self.pin_, GPIO.HIGH)
        else:
            pass
            # GPIO.output(self.pin_, GPIO.LOW)
        return response


# def main(args=None):
#     rclpy.init(args=args)
#     node = FlashLightService()
#     rclpy.spin(node)
#     rclpy.shutdown()
#
#
# if __name__ == '__main__':
#     main()
