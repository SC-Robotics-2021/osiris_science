import rclpy
from rclpy.node import Node
# import RPi.GPIO as GPIO
from station_interfaces.srv import StationBrush


class BrushService(Node):
    def __init__(self) -> None:
        super().__init__('platform_brush_service')
        self.srv_ = self.create_service(StationBrush, 'brush_cmd', self.turn_brush)
        self.pin_ = 12
        # GPIO.setmode(GPIO.Board)
        # GPIO.setup(self.pin_, GPIO.OUT)

    def turn_brush(self, request, response) -> None:
        response.brush_status = request.is_brush_on
        self.get_logger().info('Incoming request\nBrush: %d' % request.is_brush_on)
        if request.is_brush_on:
            pass
            # GPIO.output(self.pin_, GPIO.HIGH)
        else:
            pass
            # GPIO.output(self.pin_, GPIO.LOW)
        return response


# def main(args=None):
#     rclpy.init(args=args)
#     node = BrushService()
#     rclpy.spin(node)
#     rclpy.shutdown()
#
#
# if __name__ == '__main__':
#     main()
