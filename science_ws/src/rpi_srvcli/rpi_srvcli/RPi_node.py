from std_srvs.srv import SetBool
from station_interfaces.srv import StationFunnelCake
from station_interfaces.srv import StationStepper

import rclpy
from rclpy.node import Node

import serial
from cobs import cobs


def calc_funnel_cake_pos(position) -> int:
    angle = position * 72
    return angle


class RPiService(Node):
    def __init__(self):
        super().__init__('RPi_service')

        self.vacuum_service = self.create_service(
            SetBool, '/osiris/science/vacuum/cmd', self.vacuum_callback
        )

        self.flashlight_service = self.create_service(
            SetBool, '/osiris/science/flashlight/cmd', self.flashlight_callback
        )

        self.water_pump_service = self.create_service(
            SetBool, '/osiris/science/water_pump/cmd', self.water_pump_callback
        )

        self.uv_light_service = self.create_service(
            SetBool, '/osiris/science/uv_light/cmd', self.uv_light_callback
        )

        self.funnel_cake_service = self.create_service(
            StationFunnelCake, '/osiris/science/funnel_cake/cmd', self.funnel_cake_callback
        )

        self.stepper_service = self.create_service(
            StationStepper, '/osiris/science/stepper/cmd', self.stepper_callback
        )

    def vacuum_callback(self, request, response):
        response.success = True
        response.message = 'Success'
        self.get_logger().info('Incoming request\nCollect Sample: %d' % request.data)

        return response

    def flashlight_callback(self, request, response):
        response.success = True
        response.message = 'Success'
        self.get_logger().info('Incoming request\nFlashlight: %d' % request.data)

        return response

    def water_pump_callback(self, request, response):
        response.success = True
        response.message = 'Success'
        self.get_logger().info('Incoming request\nWater Pump: %d' % request.data)

        return response

    def uv_light_callback(self, request, response):
        response.success = True
        response.message = 'Success'
        self.get_logger().info('Incoming request\nUV Light: %d' % request.data)

        return response

    def funnel_cake_callback(self, request, response):
        response.success = True
        response.message = 'Success'
        response.position = calc_funnel_cake_pos(request.pump_num)
        self.get_logger().info('Incoming request\n Pump Position: %d' % request.pump_num)

        return response

    def stepper_callback(self, request, response):
        response.current_height = request.height
        self.get_logger().info('Incoming request\n Pump Position: %d' % request.height)

        return response


def main(args=None):
    print('Hi from rpi_pico_ros2.')

    rclpy.init(args=args)
    rasp_service = RPiService()
    rclpy.spin(rasp_service)
    rclpy.shutdown()


if __name__ == '__main__':
    main()

