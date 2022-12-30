from server_template import *

def publish_image(self):
    """
    Publisher callback function. Called every 0.01 seconds and publishes current frame to ROS2 topic.
    """
    if self.count_subscribers(f'/{self.subsystem}/{self.component_name}/images') > 0:
        success, frame = self.camera.read()
        if success:
            frame = np.split(frame, 2, axis=1)[0]
            frame = cv2.resize(frame, (640, 360), interpolation=cv2.INTER_AREA)
            self.get_logger().info(f'Publishing image')
            self.publisher.publish(self.bridge.cv2_to_compressed_imgmsg(frame))
        else:
            self.get_logger().info(f'Unsuccessful image capture')
    else:
        self.get_logger().info(f'No subscribers to receive message')

def main():
    camera_settings = {'device_num': 0, 'fps': 30, 'resolution': (1280, 720)}
    camera_server = CameraServer(subsystem='drive', component_name='zed', camera_settings=camera_settings)
    camera_server.publish_image = publish_image
    boot(camera_server)

if __name__ == '__main__':
    main()