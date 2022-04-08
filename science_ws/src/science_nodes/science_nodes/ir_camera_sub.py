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
        # create client to control camera
        # create subscriber to receive frame data
        self.subscription = self.create_subscription(Image, '/osiris/science/ir_camera/images',
                                                     self.receive_frame, qos_profile=qos_profile_sensor_data)
        # Used to convert between ROS and OpenCV frame
        self.bridge = CvBridge()
        self.frame_width = 640
        self.frame_height = 480
        self.frame = np.zeros([self.frame_height, self.frame_width, 3], dtype=np.uint8)
        # create video recorder
        video_path = os.path.expanduser(f'~/Videos/osiris_science/ir_camera/')
        try:
            os.makedirs(video_path, exist_ok=True)
        except OSError as error:
            self.get_logger().info(f'{error}')
        now = datetime.now().strftime('%m-%d-%Y_%H:%M:%S')
        self.fourcc = cv2.VideoWriter_fourcc(*'mp4v')
        self.video_path = os.path.join(video_path, 'IR_Camera_'+now+'.mp4')
        self.out = None
        self.record = False

    def receive_frame(self, frame):
        """
        Callback function that receives images from ROS2 topic and populates
        OpenCV window.
        """
        # display the message on the console
        self.get_logger().info('Receiving infrared image')
        # convert ROS Image message to OpenCV frame
        self.frame = self.bridge.imgmsg_to_cv2(frame)
        cv2.imshow('IR Camera Feed', self.frame)
        cv2.waitKey(1)
        if self.record:
            if self.out is None:
                self.out = cv2.VideoWriter(self.video_path, self.fourcc, 30, (self.frame.shape[1], self.frame.shape[0]))
            self.out.write(self.frame)

    def run_node(self):
        """
        ROS2 spin function. Allows for activation of node class as external dependency.
        """
        # spin node to loop callback function
        rclpy.spin(self)
        # destroy node
        self.destroy_node()

    def destroy_node(self):
        """
        Shutdown function. Destroys node explicitly.
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
    ir_camera_sub.destroy_node()
    # shutdown ROS2 Python client libray
    rclpy.shutdown()


if __name__ == '__main__':
    main()
