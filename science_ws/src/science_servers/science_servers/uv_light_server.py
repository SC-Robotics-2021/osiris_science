import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool
import RPi.GPIO as GPIO


class UVLightServer(Node):
    """
    Subclass of ROS2 Node class. Accesses USB camera and publishes video feed
    """
    def __init__(self):
        """
        Class constructor.
        """
        super().__init__('uv_light_server')
        self.service = self.create_service(SetBool, '/osiris/science/uv_light/cmd', self.request_request)
        self.uv_light_pin = 33
        self.active = False
        GPIO.setmode(GPIO.BOARD)
        GPIO.setup(self.uv_light_pin, GPIO.OUT)
        GPIO.output(self.uv_light_pin, GPIO.LOW)

    def request_request(self, request, response):
        """
        ROS2 service function. Controls GPIO that provides current to UV light
        :param request: incoming service request message
        :param response: outgoing service response message
        """
        self.get_logger().info('Incoming request')
        if self.active != request.data:
            self.active = request.data
            GPIO.output(self.uv_light_pin, request.data)
            response.success = True
            if request.data:
                status = 'on'
            else:
                status = 'off'
            response.message = f'UV light {status}'
        else:
            response.success = False
            response.message = 'UV light already in requested state'
        self.get_logger().info(f'{response.message}')
        return response


def main(args=None):
    """
    Main function. Initializes and spins ROS2 node. Node is ended explicitly before shutdown
    :param args: ROS2 command line arguments
    """
    rclpy.init(args=args)
    uv_light_server = UVLightServer()
    try:
        rclpy.spin(uv_light_server)
    except Exception as e:
        uv_light_server.get_logger().info(f'{e})')
    except KeyboardInterrupt:
        print('\n')
    finally:
        GPIO.cleanup()
        uv_light_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
