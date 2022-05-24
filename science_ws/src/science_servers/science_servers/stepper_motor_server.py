import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from science_interfaces.action import StepperMotor
from ticlib import TicUSB
from time import sleep
import os
import subprocess


class StepperMotorServer(Node):
    """
    Subclass of ROS2 Node. Controls stepper motor control for lowering platform
    """
    def __init__(self):
        """
        Class constructor to set server parameters
        """
        super().__init__('stepper_motor_server')
        self.action_server = ActionServer(self, StepperMotor, '/osiris/science/stepper_motor/cmd', self.request_request)
        self.driver = TicUSB()
        self.driver.set_step_mode(32)
        self.driver.set_current_limit(2800)
        self.driver.settings.get_rc_limit_switch_reverse()
        self.step_factor = 220  # number of steps per height value
        self.driver.energize()
        self.driver.exit_safe_start()
        self.driver.set_target_velocity(-40000)
        self.driver.get_home('reverse')
        self.height = 0
        self.driver.deenergize()
        self.driver.enter_safe_start()

    def request_request(self, action_handler):
        """
        ROS2 action server callback function
        :param action_handler: Incoming action command from base station
        """
        self.get_logger().info('Incoming request')
        feedback = StepperMotor.Feedback()
        feedback.success = True
        if self.height != action_handler.request.height:
            self.height = action_handler.request.height
            feedback.message = f'New height goal: {action_handler.request.height}'
            self.get_logger().info(f'{feedback.message}')
            action_handler.publish_feedback(feedback)
        else:
            feedback.success = False
            feedback.message = 'Stepper motor already at requested height'
            self.get_logger().info(f'{feedback.message}')
            return feedback
        self.driver.energize()
        self.driver.exit_safe_start()
        target = self.step_factor * int(self.driver.get_step_mode()) * action_handler.request.height
        self.driver.set_target_posiiton(target)
        while self.driver.get_current_position() != self.driver.get_target_position():
            sleep(0)
            self.driver.reset_command_timeout()
            if self.driver.get_current_position() % (self.step_factor * self.driver.get_step_mode()) == 0:
                self.height = self.driver.get_current_position() // (self.step_factor * self.driver.get_step_mode())
                feedback.message = f'Current height: {self.height}'
                self.get_logger().info(f'{feedback.message}')
                action_handler.publish_feedback(feedback)
            if self.driver.get_error_occured():
                feedback.success = False
                feedback.message = f'Error status: {self.driver.get_error_status()}' +\
                                   f'\n\t\t\t\t\t\tMiscellaneous flags: {self.driver.get_misc_flags()}' +\
                                   f'\n\t\t\t\t\t\tOperation state: {self.driver.get_operation_state()}'
                self.get_logger().info(f'{feedback.message}')
                action_handler.publish_feedback(feedback)
                break
        self.driver.deenergize()
        self.driver.enter_safe_start()
        feedback.message = f'Final height: {self.height}'
        self.get_logger().info(f'{feedback.message}')
        return feedback

    def stop(self):
        """
        Shutdown function. Shuts down driver and destroys node explicitly.
        """
        self.get_logger().info('Shutting down node')

        super().destroy_node()


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
