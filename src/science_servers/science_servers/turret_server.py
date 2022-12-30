import sys
import subprocess
import yaml
import textwrap

import rclpy
from rclpy.node import Node
from science_interfaces.srv import Turret


def jrk2cmd(*args):
    return subprocess.check_output(['jrk2cmd'] + list(args))


class FunnelCakeServer(Node):
    """
    Subclass of ROS2 Node class. Accesses JRK's for turret control
    """
    def __init__(self):
        """
        Class constructor.
        """
        super().__init__('turret_server')
        self.service = self.create_service(Turret, '/osiris/science/turret/cmd', self.send_request)
        self.active = True

    def is_jrk_ready(self):
        return True

    def send_request(self, request, response):
        try:
            if self.is_jrk_ready():
                ser_num = '00279727'
                jrk2cmd('-d', ser_num, '--target', str(request.target))
                response.success = True
                response.message = f'Success'
            else:
                response.success = False
                response.message = f'JRK is not ready/not exist'
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
    turret_server = FunnelCakeServer()
    try:
        rclpy.spin(turret_server)
    except KeyboardInterrupt:
        print('\n')
    except:
        turret_server.get_logger().error('Device failed!')
    finally:
        turret_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
