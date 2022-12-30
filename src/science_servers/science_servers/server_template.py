import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import CompressedImage
from std_srvs.srv import SetBool
import cv2
from cv_bridge import CvBridge
import RPi.GPIO as GPIO
import numpy as np

class Server(Node):
    """
    Subclass of ROS2 Node class. Accesses USB camera and publishes video feed
    """
    def __init__(self, subsystem, component_name, service=SetBool):
        """
        Class constructor.
        """
        super().__init__(f'{component_name}_server')
        self.subsystem = subsystem
        self.component_name = component_name.replace("_", " ")
        self.service = self.create_service(service, f'/{subsystem}/{component_name}/cmd', self.recieve_request)
        self.active = False

    def recieve_request(self, request, response):
        """
        ROS2 service function. Controls GPIO that provides current to device
        :param request: incoming service request message
        :param response: outgoing service response message
        """
        self.get_logger().info('Incoming request')
        if self.active != request.data:
            self.active = request.data
            GPIO.output(self.pin, request.data)
            response.success = True
            if request.data:
                status = 'on'
            else:
                status = 'off'
            response.message = f'{self.component_name} is now {status}'
        else:
            response.success = False
            response.message = f'{self.component_name} already in requested state'
        self.get_logger().info(f'{response.message}')
        return response


class GPIOServer(Server):
    """
    Subclass of ROS2 Node class. Accesses USB camera and publishes video feed
    """
    def __init__(self, subsystem, component_name, pin, service):
        """
        Class constructor.
        """
        super().__init__(subsystem, component_name, pin, service)
        self.pin = pin
        self.active = False
        GPIO.setmode(GPIO.BOARD)
        GPIO.setup(self.pin, GPIO.OUT)
        GPIO.output(self.pin, GPIO.LOW)


class CameraServer(Node):
    """
    Subclass of ROS2 Node class. Accesses USB camera and publishes video feed
    """
    def __init__(self, subsystem, component_name, camera_settings = {'fps': 30, 'resolution': (1280, 720)}
, message=CompressedImage):
        """
        Class constructor.
        """
        super().__init__('ir_camera_server')
        self.publisher = self.create_publisher(message, f'/{subsystem}/{component_name}/images',
                                               qos_profile=qos_profile_sensor_data)
        timer_period = 1/30
        self.timer = self.create_timer(timer_period, self.publish_frame)
        self.camera = cv2.VideoCapture(camera_settings['device_num'])
        self.camera.set(cv2.CAP_PROP_FRAME_HEIGHT, camera_settings['resolution'][1])
        self.camera.set(cv2.CAP_PROP_FRAME_WIDTH, camera_settings['resolution'][0])
        self.bridge = CvBridge()

    def publish_image(self):
        """
        Publisher callback function. Called every 0.01 seconds and publishes current frame to ROS2 topic.
        """
        if self.active:
            if self.count_subscribers(f'/{self.subsystem}/{self.component_name}/images') > 0:
                success, frame = self.camera.read()
                if success:
                    self.get_logger().info(f'Publishing {self.component_name} camera frame')
                    self.publisher.publish(self.bridge.cv2_to_compressed_imgmsg(frame))
                else:
                    self.get_logger().info(f'Unsuccessful frame capture')
            else:
                self.get_logger().info(f'No subscribers to receive message')

def boot(server=Server(subsystem='placeholder', component_name='placeholder')): # replace with GPIOServer or Camera Server when calling function
    """
    Main function. Initializes and spins ROS2 node. Node is ended explicitly before shutdown
    :param args: ROS2 command line arguments
    """
    rclpy.init()
    try:
        rclpy.spin(server)
    except KeyboardInterrupt:
        print('\n')
    except:
        server.get_logger().error('Device failed!')
    finally:
        GPIO.cleanup()
        server.destroy_node()
        rclpy.shutdown()    