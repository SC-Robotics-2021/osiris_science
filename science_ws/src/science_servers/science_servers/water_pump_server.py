import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool
from RPi.GPIO import GPIO


class WaterServer(Node):
    """
    Subclass of ROS2 Node class. Accesses USB camera and publishes video feed
    """
    def __init__(self):
        """
        Class constructor.
        """
        super().__init__('water_pump_server')
        self.service = self.create_service(SetBool, '/osiris/science/water/cmd', self.send_request)
        GPIO.setmode(GPIO.BCM)
        self.water_pin = 101
        GPIO.setup(self.water_pin, GPIO.OUT)

    def send_request(self, request, response):
        try:
            if request.data:
                GPIO.output(self.water_pin, 1)
            else:
                GPIO.output(self.water_pin, 0)
        except:
            response.success = False
            response.message = f'Something went wrong'

        return response


def main(args=None):
    """
    Main function. Initializes and spins ROS2 node. Node is ended explicitly before shutdown
    :param args: ROS2 command line arguments
    """
    rclpy.init(args=args)
    water_server = WaterServer()
    try:
        rclpy.spin(water_server)
    except Exception as e:
        water_server.get_logger().info(f'{e})')
    except KeyboardInterrupt:
        print('\n')
    finally:
        water_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
