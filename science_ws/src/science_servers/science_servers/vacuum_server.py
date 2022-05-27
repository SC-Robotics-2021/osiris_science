import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool
from RPi.GPIO import GPIO

class VacuumServer(Node):
    """
    Subclass of ROS2 Node class. Accesses USB camera and publishes video feed
    """
    def __init__(self):
        """
        Class constructor.
        """
        super().__init__('vacuum_server')
        self.service = self.create_service(SetBool, '/osiris/science/vacuum/cmd', self.send_request)
        GPIO.setmode(GPIO.BCM)
        self.vacuum_pin = 100
        GPIO.setup(self.vacuum_pin, GPIO.OUT)

    def send_request(self, request, response):
        try:
            if request.data:
                GPIO.output(self.vacuum_pin, 1)
            else:
                GPIO.output(self.vacuum_pin, 0)
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
    vacuum_server = VacuumServer()
    try:
        rclpy.spin(vacuum_server)
    except Exception as e:
        vacuum_server.get_logger().info(f'{e})')
    except KeyboardInterrupt:
        print('\n')
    finally:
        vacuum_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
