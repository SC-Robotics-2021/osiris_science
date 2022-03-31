from station_interfaces.srv import StationBrush
from station_interfaces.srv import StationCollectSample
from station_interfaces.srv import StationFlashlight
from station_interfaces.srv import StationWaterPump
from station_interfaces.srv import StationUVLight
from station_interfaces.srv import StationFunnelCake
from station_interfaces.srv import StationPlatform
from osiris_science_nodes.osiris_brush_node import BrushService

import rclpy
from rclpy.node import Node


# class RoverBrushClient(Node):
#     def __init__(self):
#         super().__init__('rover_brush_client')
#         self.brush_cli = self.create_client(RPiBrush, 'Brush_CMD')
#         while not self.brush_cli.wait_for_service(timeout_sec=1.0):
#             self.get_logger().info('Brush not available, waiting again...')
#         self.req = RPiBrush.Request()
#
#     def send_request(self, is_brush_turned_on):
#         self.req.is_brush_on = is_brush_turned_on
#         self.future = self.brush_cli.call_async(self.req)
#
#     def run_node(self):
#         rclpy.spin_once(self)
#         while rclpy.ok():
#             rclpy.spin_once(self)
#             if self.future.done():
#                 try:
#                     response = self.future.result()
#                 except Exception as e:
#                     self.get_logger().info(
#                         'Service call failed %r' % (e,))
#                 else:
#                     self.get_logger().info(
#                         'Result of brush_cmd: for %d' % response.brush_status)
#                 break
#

def calc_funnel_cake_pos(position) -> int:
    angle = position * 72
    return angle


class RPiService(Node):
    def __init__(self):
        super().__init__('RPi_service')

        self.brush_srv = BrushService()
        self.collect_sample_srv = self.create_service(StationCollectSample, 'collect_sample_cmd', self.collect_sample_callback)
        self.flashlight_srv = self.create_service(StationFlashlight, 'flashlight_cmd', self.flashlight_callback)
        self.water_pump_srv = self.create_service(StationWaterPump, 'water_pump_cmd', self.water_pump_callback)
        self.uv_light_srv = self.create_service(StationUVLight, 'uv_light_cmd', self.uv_light_callback)
        self.funnel_cake_srv = self.create_service(StationFunnelCake, 'funnel_cake_cmd', self.funnel_cake_callback)
        self.platform_srv = self.create_service(StationPlatform, 'platform_cmd', self.platform_callback)
        # self.brush_client = RoverBrushClient()

    def brush_callback(self, request, response):
        response.brush_status = request.is_brush_on
        self.get_logger().info('Incoming request\nBrush: %d' % request.is_brush_on)
        # self.brush_client.send_request(response.brush_status)
        # self.brush_client.run_node()

        return response

    def collect_sample_callback(self, request, response):
        response.collect_sample_status = request.is_collect_sample_on
        self.get_logger().info('Incoming request\nCollect Sample: %d' % request.is_collect_sample_on)

        return response

    def flashlight_callback(self, request, response):
        response.flashlight_status = request.is_flashlight_on
        self.get_logger().info('Incoming request\nFlashlight: %d' % request.is_flashlight_on)

        return response

    def water_pump_callback(self, request, response):
        response.water_pump_status = request.is_water_pump_on
        self.get_logger().info('Incoming request\nWater Pump: %d' % request.is_water_pump_on)

        return response

    def uv_light_callback(self, request, response):
        response.uv_light_status = request.is_uv_light_on
        self.get_logger().info('Incoming request\nUV Light: %d' % request.is_uv_light_on)
        return response

    def funnel_cake_callback(self, request, response):
        response.funnel_cake_pos = calc_funnel_cake_pos(request.pump_num)
        self.get_logger().info('Incoming request\n Pump Position: %d' % request.pump_num)

        return response

    def platform_callback(self, request, response):
        response.current_height = request.height
        self.get_logger().info('Incoming request\n Pump Position: %d' % request.height)

        return response


def main(args=None):
    rclpy.init(args=args)

    rasp_service = RPiService()

    rclpy.spin(rasp_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()

