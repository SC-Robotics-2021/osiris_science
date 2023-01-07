import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import CompressedImage
import sys
import cv2
import os
from cv_bridge import CvBridge
from datetime import datetime
import numpy as np

class CameraSubscriber(Node):
    """
    Subclass of ROS2 Node class. Receives and displays video feed from camera.
    """

    def __init__(self, subsystem, component_name):
        """
        Class constructor to set up the node
        """
        super().__init__(f'{component_name}_sub')
        self.component_name = component_name.replace("_", " ")
        self.callback_group = ReentrantCallbackGroup()
        self.subscription = self.create_subscription(CompressedImage, f'/{subsystem}/{component_name}/images',
                                                     self.receive_frame, qos_profile=qos_profile_sensor_data,
                                                     callback_group=self.callback_group)
        self.bridge = CvBridge()
        frame_width = 320
        frame_height = 240
        self.frame = np.zeros([frame_height, frame_width, 4], dtype=np.uint8)
        self.media_path = os.path.join(os.path.dirname(os.path.realpath(sys.argv[0])), 'recordings', f'{component_name}')
        try:
            os.makedirs(self.media_path, exist_ok=True)
        except OSError:
            self.get_logger().error(f'System error')
        self.video = cv2.VideoWriter(os.path.join(self.media_path, f'{component_name}'+datetime.now().strftime('%m-%d-%Y_%H:%M:%S')+'.mp4'),
                                   cv2.VideoWriter_fourcc(*'mp4v'), 30, (frame_width, frame_height))
        self.snapshot = False
        self.gui = False

    def receive_frame(self, frame):
        """
        ROS2 subscriber callback. Receives frame via ROS2 topic. Saves image to mp4 if requested
        """
        self.frame = self.bridge.compressed_imgmsg_to_cv2(frame)
        self.video.write(self.frame)
        self.get_logger().info(f'Receiving {self.component_name} frame')
        if self.gui:
            cv2.imshow(f'{self.component_name.title()} View', self.frame)
            cv2.waitKey(1)
        if self.snapshot:
            cv2.imwrite(os.path.join(self.media_path, ''+datetime.now().strftime('%m-%d-%Y_%H:%M:%S')+'.jpg'), self.frame)
            self.snapshot = False

def boot(subscriber):
    """
    Initializes and spins ROS2 node. Camera capture and node are ended explicitly before shutdown
    :param args: ROS2 command line arguments
    """
    cv2.namedWindow(f'{subscriber.component_name.title()}', cv2.WINDOW_NORMAL)
    try:
        rclpy.spin(subscriber)
    except KeyboardInterrupt:
        print('\n')
    except:
        subscriber.get_logger().error(f'System error')
    finally:
        cv2.destroyAllWindows()
        subscriber.video.release()
        subscriber.destroy_node()
        rclpy.shutdown()
