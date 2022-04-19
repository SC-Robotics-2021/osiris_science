import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import CompressedImage
import cv2
from cv_bridge import CvBridge
import os
from datetime import datetime
import numpy as np


class IRCameraSub(Node):
    """
    Subclass of ROS2 Node class. Receives and displays video feed from camera.
    """
    def __init__(self):
        """
        Class constructor to set up the node
        """
        super().__init__('ir_camera_sub')
        self.callback_group = ReentrantCallbackGroup()
        self.subscription = self.create_subscription(CompressedImage, '/osiris/science/ir_camera/images',
                                                     self.receive_frame, qos_profile=qos_profile_sensor_data,
                                                     callback_group=self.callback_group)
        self.bridge = CvBridge()
        frame_width = 640
        frame_height = 480
        self.frame = np.zeros([frame_width, frame_height, 3], dtype=np.uint8)
        self.media_path = os.path.expanduser(f'~/Videos/osiris_science/ir_camera/')
        try:
            os.makedirs(self.media_path, exist_ok=True)
        except OSError as e:
            self.get_logger().info(f'{e}')
        now = datetime.now().strftime('%m-%d-%Y_%H:%M:%S')
        self.out = cv2.VideoWriter(os.path.join(self.media_path, 'UV_Camera_' + now + '.mp4'),
                                   cv2.VideoWriter_fourcc(*'mp4v'), 30, (frame_width, frame_height))
        self.snapshot = False

    def receive_frame(self, frame):
        """
        ROS2 subscriber callback. Receives frame via ROS2 topic. Saves image to mp4 if requested
        """
        self.frame = self.bridge.compressed_imgmsg_to_cv2(frame)
        self.out.write(self.frame)
        self.get_logger().info('Receiving IR camera frame')  # logging is done after recording to ensure data retention
        if self.snapshot:
            now = datetime.now().strftime('%m-%d-%Y_%H:%M:%S')
            cv2.imwrite(os.path.join(self.media_path, 'IR_Camera_' + now + '.jpeg'), self.frame)
            self.snapshot = False


def main(args=None):
    """
    Main function. Initializes and spins ROS2 node. Camera capture and node are ended explicitly before shutdown
    :param args: ROS2 command line arguments
    """
    rclpy.init(args=args)
    ir_camera_sub = IRCameraSub()
    try:
        rclpy.spin(ir_camera_sub)
    except Exception as e:
        ir_camera_sub.get_logger().info(f'{e})')
    except KeyboardInterrupt:
        print('\n')
    finally:
        ir_camera_sub.out.release()
        ir_camera_sub.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
