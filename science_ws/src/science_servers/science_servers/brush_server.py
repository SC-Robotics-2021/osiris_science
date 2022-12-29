import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool
import RPi.GPIO as GPIO


class BrushServer(Node):
    """
    Subclass of ROS2 Node class. Accesses USB camera and publishes video feed
    """
    def __init__(self):
        """
        Class constructor.
        """
        super().__init__('brush_server')
        self.service = self.create_service(SetBool, '/osiris/science/brush/cmd', self.request_request)
        self.brush_pin = 35
        self.active = False
        GPIO.setmode(GPIO.BOARD)
        GPIO.setup(self.brush_pin, GPIO.OUT)
        GPIO.output(self.brush_pin, GPIO.LOW)

    def request_request(self, request, response):
        """
        ROS2 service function. Controls GPIO that provides current to brush motor
        :param request: incoming service request message
        :param response: outgoing service response message
        """
        self.get_logger().info('Incoming request')
        if self.active != request.data:
            self.active = request.data
            GPIO.output(self.brush_pin, request.data)
            response.success = True
            if request.data:
                status = 'on'
            else:
                status = 'off'
            response.message = f'Brush {status}'
        else:
            response.success = False
            response.message = 'Brush already in requested state'
        self.get_logger().info(f'{response.message}')
        return response


def main(args=None):
    """
    Main function. Initializes and spins ROS2 node. Node is ended explicitly before shutdown
    :param args: ROS2 command line arguments
    """
    rclpy.init(args=args)
    brush_server = BrushServer()
    try:
        rclpy.spin(brush_server)
    except Exception as e:
        brush_server.get_logger().info(f'{e})')
    except KeyboardInterrupt:
        print('\n')
    finally:
        GPIO.cleanup()
        brush_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
