import rclpy
from rclpy.node import Node
# import RPi.GPIO as GPIO
from station_interfaces.srv import StationWaterPump


class WaterPumpService(Node):
    def __init__(self) -> None:
        super().__init__('water_pump_service')
        self.srv = self.create_service(StationWaterPump, 'water_pump_cmd', self.turn_water_pump)
        self.pin_ = 12
        # GPIO.setmode(GPIO.Board)
        # GPIO.setup(self.pin_, GPIO.OUT)

    def turn_water_pump(self, request, response) -> None:
        response.water_pump_status = request.is_water_pump_on
        self.get_logger().info('Incoming request\nWater Pump: %d' % request.is_water_pump_on)
        if request.is_water_pump_on:
            pass
            # GPIO.output(self.pin_, GPIO.HIGH)
        else:
            pass
            # GPIO.output(self.pin_, GPIO.LOW)
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
