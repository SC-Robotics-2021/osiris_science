import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import CompressedImage
from std_srvs.srv import SetBool
import cv2
from cv_bridge import CvBridge
try:
    import RPi.GPIO as GPIO
except RuntimeError:
    pass
import numpy as np
import sys
import yaml
import textwrap
from rclpy.callback_groups import ReentrantCallbackGroup
from science_interfaces.srv import MoveToPosition
from std_srvs.srv import Trigger
from ticlib import TicUSB
from time import sleep
import os
import subprocess

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
        self.active = True

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
        GPIO.setmode(GPIO.BOARD)
        GPIO.setup(self.pin, GPIO.OUT)
        GPIO.output(self.pin, GPIO.LOW)


class CameraServer(Server):
    """
    Subclass of ROS2 Node class. Accesses USB camera and publishes video feed
    """
    def __init__(self, subsystem, component_name, camera_settings = {'fps': 30, 'resolution': (1280, 720)}):
        """
        Class constructor.
        """
        super().__init__(subsystem, component_name)
        self.publisher = self.create_publisher(CompressedImage, f'/{subsystem}/{component_name}/images',
                                               qos_profile=qos_profile_sensor_data)
        timer_period = 1/30
        self.timer = self.create_timer(timer_period, self.publish_frame)
        self.camera = cv2.VideoCapture(camera_settings['device_num'])
        self.camera.set(cv2.CAP_PROP_FRAME_HEIGHT, camera_settings['resolution'][1])
        self.camera.set(cv2.CAP_PROP_FRAME_WIDTH, camera_settings['resolution'][0])
        self.bridge = CvBridge()

    def publish_frame(self):
        """
        Publisher callback function. Called every 0.01 seconds and publishes current frame to ROS2 topic.
        """
        if self.active:
            if self.count_subscribers(f'/{self.subsystem}/{self.component_name.replace(" ", "_")}/images') > 0:
                success, frame = self.camera.read()
                if success:
                    self.get_logger().info(f'Publishing {self.component_name} camera frame')
                    self.publisher.publish(self.bridge.cv2_to_compressed_imgmsg(frame))
                else:
                    self.get_logger().info(f'Unsuccessful frame capture')
            else:
                self.get_logger().info(f'No subscribers to receive message')


class FunnelCakeServer(Node):
    """
    Subclass of ROS2 Node class. Accesses JRK's for turret control
    """
    def __init__(self):
        """
        Class constructor.
        """
        super().__init__(f'funnel_cake_server')
        self.service = self.create_service(MoveToPosition, f'/science/funnel_cake/cmd', self.move)
        self.active = True

    def jrk2cmd(*args):
        return subprocess.check_output(['jrk2cmd'] + list(args))

    def is_jrk_ready(self):
        return True

    def move(self, request, response):
        try:
            if self.is_jrk_ready():
                ser_num = '00279727'
                self.jrk2cmd('-d', ser_num, '--target', str(request.target))
                response.success = True
                response.message = f'Success'
            else:
                response.success = False
                response.message = f'JRK is not ready/not exist'
        except:
            response.success = False
            response.message = f'Something went wrong'
        return response


class LoweringPlatformServer(Node):
    """
    Subclass of ROS2 Node. Controls stepper motor control for lowering platform
    """
    def __init__(self):
        """
        Class constructor to set server parameters
        """
        super().__init__('stepper_motor_server')
        self.component_name = 'stepper motor'
        self.callback_group = ReentrantCallbackGroup()
        self.service = self.create_service(MoveToPosition, '/science/stepper_motor/cmd', self.move,
                                           callback_group=self.callback_group)
        self.cancel_service = self.create_service(Trigger, '/science/stepper_motor/cancel',
                                                  self.cancel_movement, callback_group=self.callback_group)
        self.driver = TicUSB()
        self.driver.set_step_mode(32)
        self.driver.set_current_limit(39)
        self.driver.get_current_limit()
        self.driver.get_step_mode()
        self.step_factor = 25  # number of steps per height value

        # zero platform height
        self.driver.energize()
        self.driver.exit_safe_start()
        while int(str(format(self.driver.get_digital_readings()[0], '05b')[0])):
            self.driver.go_home(0)
        self.driver.halt_and_set_position(0)
        self.target = 0
        self.top_limit = False
        self.bottom_limit = False
        self.driver.deenergize()
        self.driver.enter_safe_start()
        self.cancel = False
        self.driver.clear_driver_error()

    def cancel_movement(self):
        self.cancel = True

    def move(self, request, response):
        try:
            self.get_logger().info('Incoming request')
            response = MoveToPosition.Response()
            if self.driver.get_current_position() != self.step_factor*request.height:
                response.success = True
                self.target = self.step_factor*request.height
                response.height = int(self.driver.get_current_position() // self.step_factor)
                self.get_logger().info(f'Current height: {response.height}')
                direction = int(np.heaviside(self.target-self.driver.get_current_position(), 0))
                self.get_logger().info(f'Direction: {direction}')
                self.get_logger().info(f'Target: {self.target}')
                self.get_logger().info('execute initiated...')
                response.message = 'Movement complete'
            else:
                response.success = False
                response.message = 'Stepper motor already at requested height'
                response.height = request.height
                self.get_logger().info(f'{response.message}')
                return response
            self.driver.energize()
            self.driver.exit_safe_start()
            if direction:
                okay_to_move = lambda: not bool(int(str(format(self.driver.get_digital_readings()[0], '05b')[0]))) and not direction
                reached_target = lambda: self.driver.get_current_position() < self.target
            else:
                okay_to_move = bool(int(str(format(self.driver.get_digital_readings()[0], '05b')[3]))) and not direction
                reached_target = lambda: self.driver.get_current_position() > self.target
            while okay_to_move():
                self.driver.reset_command_timeout()
                self.exit_safe_start
                if self.cancel:
                    self.driver.halt_and_set_position(self.driver.get_current_position())
                    self.driver.deenergize()
                    self.driver.enter_safe_start()
                    self.cancel = False
                    response.message = 'Platform movement canceled prematurely'
                    break
                self.driver.go_home(direction)
                if self.driver.get_current_position() % self.step_factor == 0:
                    response.height = int(self.driver.get_current_position() // self.step_factor)
                    self.get_logger().info(f'Current height: {self.driver.get_current_position()}')
                if reached_target():
                    break
        except:
            response.success = False
            response.message = 'Driver error'
            self.get_logger().error('Driver error')
        finally:
            response.height = int(self.driver.get_current_position() // self.step_factor)
            self.driver.deenergize()
            self.driver.enter_safe_start()
            return response


def boot(server):
    """
    Main function. Initializes and spins ROS2 node. Node is ended explicitly before shutdown
    :param args: ROS2 command line arguments
    """
    rclpy.spin(server)
    # try:
    #     assert(type(server) in [GPIOServer, CameraServer, LoweringPlatformServer, FunnelCakeServer])
    #     rclpy.spin(server)
    # except AssertionError:
    #     print('Invalid Server Type')
    # except KeyboardInterrupt:
    #     print('\n')
    # except:
    #     server.get_logger().error('Device failed')
    # finally:
    #     if type(server) == GPIOServer:
    #         GPIO.cleanup()
    #     elif type(server) == LoweringPlatformServer:
    #         server.driver.deenergize()
    #         server.driver.enter_safe_start()
    #     server.destroy_node()
    #     rclpy.shutdown()