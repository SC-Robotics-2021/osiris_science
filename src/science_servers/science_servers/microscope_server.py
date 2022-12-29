import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import CompressedImage
from std_srvs.srv import SetBool
import cv2
from cv_bridge import CvBridge


class MicroscopeServer(Node):
    """
    Subclass of ROS2 Node class. Accesses USB camera and publishes video feed
    """
    def __init__(self):
        """
        Class constructor.
        """
        super().__init__('microscope_server')
        self.service = self.create_service(SetBool, '/osiris/science/microscope/cmd', self.request_request)
        self.active = False
        self.publisher = self.create_publisher(CompressedImage, '/osiris/science/microscope/images',
                                               qos_profile=qos_profile_sensor_data)
        timer_period = 1/30
        self.timer = self.create_timer(timer_period, self.publish_frame)
        self.camera = cv2.VideoCapture(2)
        self.camera.set(cv2.CAP_PROP_FRAME_WIDTH, 320)
        self.camera.set(cv2.CAP_PROP_FRAME_HEIGHT, 240)
        self.bridge = CvBridge()

    def request_request(self, request, response):
        """
        ROS2 service function. Controls boolean variable to permit or deny image publishing
        :param request: incoming service request message
        :param response: outgoing service response message
        """
        self.get_logger().info('Incoming request')
        if self.active != request.data:
            self.active = request.data
            response.success = True
            if request.data:
                status = 'on'
            else:
                status = 'off'
            response.message = f'Microscope camera {status}'
        else:
            response.success = False
            response.message = 'Microscope already in requested state'
        self.get_logger().info(f'{response.message}')
        return response

    def publish_frame(self):
        """
        Publisher callback function. Called every 0.01 seconds and publishes current frame to ROS2 topic.
        """
        if self.active:
            if self.count_subscribers('/osiris/science/microscope/images') > 0:
                success, frame = self.camera.read()
                if success:
                    self.get_logger().info('Publishing microscope frame')
                    self.publisher.publish(self.bridge.cv2_to_compressed_imgmsg(frame))
                else:
                    self.get_logger().info(f'Unsuccessful frame capture')
            else:
                self.get_logger().info(f'No subscribers to receive message')


def main(args=None):
    """
    Main function. Initializes and spins ROS2 node. Camera capture and node are ended explicitly before shutdown
    :param args: ROS2 command line arguments
    """
    rclpy.init(args=args)
    microscope_server = MicroscopeServer()
    try:
        rclpy.spin(microscope_server)
    except Exception as e:
        microscope_server.get_logger().info(f'{e})')
    except KeyboardInterrupt:
        print('\n')
    finally:
        microscope_server.camera.release()
        microscope_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
