from science_clients.stepper_motor_client import StepperMotorClient
from science_clients.flashlight_client import FlashlightClient
from science_clients.uv_light_client import UVLightClient
from science_clients.brush_client import BrushClient


class Platform:
    def __init__(self):
        self.uv_light_on = False
        self.flashlight_on = False
        self.brush_on = False
        self.platform_height = 0

        self.stepper_motor_client = StepperMotorClient()
        self.brush_client = BrushClient()
        self.flashlight_client = FlashlightClient()
        self.uv_light_client = UVLightClient()

    def set_platform_height(self, height):
        if self.platform_height != height:
            self.platform_height = height
            self.stepper_motor_client.send_request(self.platform_height)
            self.stepper_motor_client.run()

    def turn_brush_on(self):
        if self.brush_on:
            self.brush_on = True
            self.brush_client.send_request(self.brush_on)
            self.brush_client.run()

    def turn_brush_off(self):
        if self.brush_on:
            self.brush_on = False
            self.brush_client.send_request(self.brush_on)
            self.brush_client.run()

    def turn_flashlight_on(self):
        if not self.flashlight_on:
            self.flashlight_on = True
            self.flashlight_cli.send_request(self.flashlight_on)
            self.flashlight_cli.run()

    def turn_flashlight_off(self):
        if self.flashlight_on:
            self.flashlight_on = False
            self.flashlight_cli.send_request(self.flashlight_on)
            self.flashlight_cli.run()

    def turn_uv_light_on(self):
        if not self.uv_light_on:
            self.uv_light_on = True
            self.uv_light_client.send_request(self.uv_light_on)
            self.uv_light_client.run()

    def turn_uv_light_off(self):
        if self.uv_light_on:
            self.uv_light_on = False
            self.uv_light_client.send_request(self.uv_light_on)
            self.uv_light_client.run()

    def close(self):
        self.stepper_motor_client.destroy_node()
        self.flashlight_client.destroy_node()
        self.brush_client.destroy_node()
        self.uv_light_client.destroy_node()
