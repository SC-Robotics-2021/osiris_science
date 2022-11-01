from science_servers.stepper_motor_server import StepperMotorServer
from science_servers.stepper_motor_cancel import StepperMotorCancel
from rclpy.executors import MultiThreadedExecutor
from threading import Thread
import os
import subprocess
import rclpy


class StepperMotor(object):
    def __init__(self):
        self.stepper_motor_server = StepperMotorServer()
        self.stepper_motor_cancel = StepperMotorCancel()

        self.stepper_executor = MultiThreadedExecutor()
        self.stepper_executor.add_node(self.stepper_motor_server)
        self.stepper_executor.add_node(self.stepper_motor_cancel)
        self.stepper_thread = Thread(target=self.stepper_executor.spin, daemon=True)
        self.update_thread = Thread(target=self.check_for_cancel, daemon=True)
        self.stepper_thread.start()
        self.update_thread.start()

    def check_for_cancel(self):
        while True:
            if self.stepper_motor_cancel.cancel:
                self.stepper_motor_server.cancel_movement()
                self.stepper_motor_cancel.cancel = False

    def close(self):
        self.stepper_executor.shutdown
        self.stepper_motor_server.destroy_node()
        self.stepper_motor_cancel.destroy_node()
        self.stepper_thread.join()
        self.update_thread.join()


def main():
    rclpy.init()
    stepper_motor_controller = StepperMotor()
    state = True
    try:
        while rclpy.ok():
            state = not state
    except Exception:
        stepper_motor_controller.stepper_motor_server.get_logger().info(f'{e}')
    finally:
        stepper_motor_controller.close()
        rclpy.shutdown()


def sudo(args=None):
    subprocess.call(['sudo', 'python3', '-E', 'stepper_motor_controller.py'])


if __name__ == '__main__':
    if os.geteuid() != 0:
       sudo()
    else:
       main()
    main()
