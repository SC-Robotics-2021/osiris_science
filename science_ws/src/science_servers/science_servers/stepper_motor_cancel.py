from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from science_interfaces.srv import StepperMotor
from std_srvs.srv import Trigger


class StepperMotorCancel(Node):
    def __init__(self):
        super().__init__('stepper_motor_cancel')
        self.callback_group = ReentrantCallbackGroup()
        self.cancel_service = self.create_service(Trigger, '/osiris/science/stepper_motor/cancel',
                                              self.cancel_movement, callback_group=self.callback_group)
        self.cancel = False

    def cancel_movement(self, request, response):
        self.cancel = True
        response.success = True
        response.message = 'Cancel request received'
        return response