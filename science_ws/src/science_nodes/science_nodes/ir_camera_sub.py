import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image
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
        # initiate the Node class's constructor and give it a name
        super().__init__('ir_camera_sub')
        # create callback to allow for parallel execution
        self.callback_group = self.create_callback_group(rclpy.callbackgroups.ReentrantCallbackGroup)
        # create subscriber to receive frame data
        self.subscription = self.create_subscription(Image, '/osiris/science/ir_camera/images',
                                                     self.receive_frame, qos_profile=qos_profile_sensor_data,
                                                     callback_group=self.callback_group)
        # Used to convert between ROS and OpenCV frame
        self.bridge = CvBridge()
        self.frame_width = 640
        self.frame_height = 480
        self.frame = np.zeros([self.frame_height, self.frame_width, 3], dtype=np.uint8)
        # create media storage path
        self.media_path = os.path.expanduser(f'~/Videos/osiris_science/ir_camera/')
        try:
            os.makedirs(media_path, exist_ok=True)
        except OSError as error:
            self.get_logger().info(f'{error}')
        self.fourcc = cv2.VideoWriter_fourcc(*'mp4v')
        self.out = None
        self.record = False
        self.snapshot = False

    def receive_frame(self, frame):
        """
        Callback function that receives images from ROS2 topic and populates
        OpenCV window.
        """
        # convert ROS Image message to OpenCV frame
        self.frame = self.bridge.imgmsg_to_cv2(frame)
        # display the message on the console
        self.get_logger().info('Receiving IR camera frame')
        if self.record:
            if self.out is None:
                now = datetime.now().strftime('%m-%d-%Y_%H:%M:%S')
                video_path = os.path.join(media_path, 'IR_Camera_' + now + '.mp4')
                self.out = cv2.VideoWriter(video_path, self.fourcc, 30, (self.frame.shape[1], self.frame.shape[0]))
            self.out.write(self.frame)
        else:
            self.out = None
        if self.snapshot:
            now = datetime.now().strftime('%m-%d-%Y_%H:%M:%S')
            image_path = os.path.join(self.media_path, 'IR_Camera_' + now + '.jpeg')
            cv2.imwrite(image_path)
            self.snapshot = False

    def run(self):
        """
        ROS2 spin function. Allows for activation of node class as external dependency.
        """
        # spin node to loop callback function
        rclpy.spin(self)

    def __del__(self):
        """
        Destructor function. Shuts down node explicitly.
        """
        self.get_logger().info('Shutting down node')
        if self.out is not None:
            self.out.release()
        cv2.destroyAllWindows()
        super().destroy_node()


def main(args=None):
    """
    Main function. Initializes and spins ROS2 node. Camera capture and node are ended explicitly before shutdown
    :param args: ROS2 command line arguments
    """
    # initialize the ROS2 Python client library
    rclpy.init(args=args)
    # create node
    ir_camera_sub = IRCameraSub()
    # spin node to initiate callback function
    try:
        rclpy.spin(ir_camera_sub)
    except Exception as e:
        ir_camera_sub.get_logger().info(f'{e})')
    except KeyboardInterrupt:
        print('\n')
    finally:
        ir_camera_sub.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
