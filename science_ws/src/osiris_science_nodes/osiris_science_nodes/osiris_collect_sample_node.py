import rclpy
from rclpy.node import Node
# import RPi.GPIO as GPIO
from station_interfaces.srv import StationCollectSample


class CollectSampleService(Node):
    def __init__(self) -> None:
        super().__init__('collect_sample_service')
        self.srv = self.create_service(StationCollectSample, 'collect_sample_cmd', self.turn_collect_sample)
        self.pin_ = 12
        # GPIO.setmode(GPIO.Board)
        # GPIO.setup(self.pin_, GPIO.OUT)

    def turn_collect_sample(self, request, response) -> None:
        response.collect_sample_status = request.is_collect_sample
        self.get_logger().info('Incoming request\nCollect Sample: %d' % request.is_collect_sample)
        if request.is_collect_sample:
            pass
            # GPIO.output(self.pin_, GPIO.HIGH)
        else:
            pass
            # GPIO.output(self.pin_, GPIO.LOW)
        return response


# def main(args=None):
#     rclpy.init(args=args)
#     node = CollectSampleService()
#     rclpy.spin(node)
#     rclpy.shutdown()
#
#
# if __name__ == '__main__':
#     main()
