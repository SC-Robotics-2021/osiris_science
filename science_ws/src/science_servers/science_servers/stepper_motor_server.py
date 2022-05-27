import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from science_interfaces.srv import StepperMotor
from std_srvs.srv import Trigger
from ticlib import TicUSB
from time import sleep
import os
import subprocess
import numpy as np


class StepperMotorServer(Node):
    """
    Subclass of ROS2 Node. Controls stepper motor control for lowering platform
    """
    def __init__(self):
        """
        Class constructor to set server parameters
        """
        super().__init__('stepper_motor_server')
        self.callback_group = ReentrantCallbackGroup()
        self.service = self.create_service(StepperMotor, '/osiris/science/stepper_motor/cmd', self.move_platform,
                                           callback_group=self.callback_group)
        self.driver = TicUSB()
        self.driver.set_step_mode(32)
        self.driver.set_current_limit(2800)
        self.step_factor = 25  # number of steps per height value
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

    def cancel_movement(self):
        self.cancel = True

    def move_platform(self, request, response):
        try:
            self.get_logger().info('Incoming request')
            response = StepperMotor.Response()
            if self.driver.get_current_position() != self.step_factor*request.height:
                response.success = True
                self.target = self.step_factor*request.height
                response.height = int(self.driver.get_current_position() // self.step_factor)
                self.get_logger().info(f'Current height: {response.height}')
                direction = int(np.heaviside(self.target-self.driver.get_current_position(), 0))
                self.get_logger().info(f'Direction: {direction}')
                self.get_logger().info(f'Target: {self.target}')
                self.get_logger().info('execute initiated...')
            else:
                response.success = False
                response.message = 'Stepper motor already at requested height'
                response.height = request.height
                self.get_logger().info(f'{response.message}')
                return response
            self.driver.energize()
            self.driver.exit_safe_start()
            if direction:
                while self.driver.get_current_position() < self.target:
                    if self.cancel:
                        self.driver.halt_and_set_position(self.driver.get_current_position())
                        self.driver.deenergize()
                        self.driver.enter_safe_start()
                        self.cancel = False
                        response.message = 'Platform movement cancel prematurely'
                        break
                    self.driver.go_home(direction)
                    if self.driver.get_current_position() % self.step_factor == 0:
                        response.height = int(self.driver.get_current_position() // self.step_factor)
                        self.get_logger().info(f'Current height: {self.driver.get_current_position()}')
                    self.limit_check()
                    if self.top_limit and not direction:
                        break
            else:
                while self.driver.get_current_position() > self.target:
                    if self.cancel:
                        self.driver.halt_and_set_position(self.driver.get_current_position())
                        self.driver.deenergize()
                        self.driver.enter_safe_start()
                        self.cancel = False
                        response.message = 'Platform movement cancel prematurely'
                        break
                    self.driver.go_home(direction)
                    if self.driver.get_current_position() % self.step_factor == 0:
                        response.height = int(self.driver.get_current_position() // self.step_factor)
                        self.get_logger().info(f'Current height: {self.driver.get_current_position()}')
                    self.limit_check()
                    if self.bottom_limit and direction:
                        break

        except Exception as e:
            response.success = True
            response.message = str(e)
            self.get_logger().error('Driver error')
        finally:
            response.height = int(self.driver.get_current_position() // self.step_factor)
            self.driver.deenergize()
            self.driver.enter_safe_start()
            return response

    def limit_check(self):
        self.top_limit = not bool(int(str(format(self.driver.get_digital_readings()[0], '05b')[0])))
        self.bottom_limit = bool(int(str(format(self.driver.get_digital_readings()[0], '05b')[3])))


def main(args=None):
    """
    Main function. Initializes and spins ROS2 node. Node is ended explicitly before shutdown
    :param args: ROS2 command line arguments
    """
    rclpy.init(args=args)
    stepper_motor_server = StepperMotorServer()
    try:
        rclpy.spin(stepper_motor_server)
    except Exception as e:
        stepper_motor_server.get_logger().info(f'{e})')
    except KeyboardInterrupt:
        print('\n')
    finally:
        stepper_motor_server.driver.deenergize()
        stepper_motor_server.driver.enter_safe_start()
        stepper_motor_server.destroy_node()
        rclpy.shutdown()


def sudo(args=None):
    subprocess.call(['sudo', 'python3', '-E', 'stepper_motor_server.py'])


if __name__ == '__main__':
    if os.geteuid() != 0:
        sudo()
    else:
        main()