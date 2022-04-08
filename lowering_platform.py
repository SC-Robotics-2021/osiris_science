from science_nodes.stepper_motor_client import StepperMotorClient
from science_nodes.station_flashlight_node import FlashlightClient
from science_nodes.uv_light_client import UVLightClient


class Platform:
    def __init__(self):
        self._uv_light_on = False
        self._flashlight_on = False
        self._brush_on = False
        self._platform_height = 0

        self.stepper_motor = StepperMotorClient()
        self.flashlight_cli = FlashlightClient()
        self.uv_light_cli = UVLightClient()

    def set_platform_height(self, height):
        self._platform_height = height
        self.stepper_motor.send_request(self._platform_height)
        self.stepper_motor.run()

    def turn_brush_on(self):
        self._brush_on = True
        self.brush_cli.send_request(self._brush_on)
        self.brush_cli.run()

    def turn_brush_off(self):
        self._brush_on = False
        self.brush_cli.send_request(self._brush_on)
        self.brush_cli.run()

    def turn_flashlight_on(self):
        self._flashlight_on = True
        self.flashlight_cli.send_request(self._flashlight_on)
        self.flashlight_cli.run()

    def turn_flashlight_off(self):
        self._flashlight_on = False
        self.flashlight_cli.send_request(self._flashlight_on)
        self.flashlight_cli.run()

    def turn_uv_light_on(self):
        self._uv_light_on = True
        self.uv_light_cli.send_request(self._uv_light_on)
        self.uv_light_cli.run()

    def turn_uv_light_off(self):
        self._uv_light_on = False
        self.uv_light_cli.send_request(self._uv_light_on)
        self.uv_light_cli.run()

    def __del__(self):
        self.uv_light_cli.__del__()
        self.stepper_motor.__del__()
        # flashlight destructor
