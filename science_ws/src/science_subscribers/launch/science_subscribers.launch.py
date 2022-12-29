from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    """
    ROS2 launch function. Adds lowering platform subscribers to launch description.
    """
    description = LaunchDescription()

    zed_sub = Node(
        package='science_subscribers',
        executable='zed_sub',
        name='zed_sub'
    )

    microscope_sub = Node(
        package='science_subscribers',
        executable='microscope_sub',
        name='microscope_sub'
    )

    uv_camera_sub = Node(
        package='science_subscribers',
        executable='uv_camera_sub',
        name='uv_camera_sub'
    )

    ir_camera_sub = Node(
        package='science_subscribers',
        executable='ir_camera_sub',
        name='ir_camera_sub'
    )

    description.add_action(zed_sub)
    description.add_action(microscope_sub)
    description.add_action(uv_camera_sub)
    description.add_action(ir_camera_sub)

    return description
