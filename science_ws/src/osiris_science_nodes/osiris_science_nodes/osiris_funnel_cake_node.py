import rclpy
from rclpy.node import Node
# import RPi.GPIO as GPIO
from station_interfaces.srv import StationFunnelCake


def calc_funnel_cake_pos(position) -> int:
    angle = position * 72
    return angle


class FunnelCakeService(Node):
    def __init__(self) -> None:
        super().__init__('funnel_cake_service')
        self.srv = self.create_service(StationFunnelCake, 'funne_cake_cmd', self.set_funnel_cake_pos)
        self.pin_ = 12
        # GPIO.setmode(GPIO.Board)
        # GPIO.setup(self.pin_, GPIO.OUT)

    def set_funnel_cake_pos(self, request, response) -> None:
        response.funnel_cake_pos = calc_funnel_cake_pos(request.pump_num)
        self.get_logger().info('Incoming request\n Pump Position: %d' % request.pump_num)

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
