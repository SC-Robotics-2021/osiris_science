from science_clients.turret_client import TurretClient


class Turret(object):
    def __init__(self):
        self.turret_client = TurretClient()

    def adjust_speed(self, speed):
        self.turret_client.send_request(speed)
        self.turret_client.run()
