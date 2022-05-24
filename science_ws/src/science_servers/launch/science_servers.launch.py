from setuptools import PackageFinder
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    """
    ROS2 launch function. Adds lowering platform nodes to launch description.
    """
    description = LaunchDescription()

    stepper_motor_server = Node(
        package='science_servers',
        executable='stepper_motor_server',
        name='stepper_motor_server'
    )

    uv_camera_server = Node(
        package='science_servers',
        executable='uv_camera_server',
        name='uv_camera_server'
    )

    uv_light_server = Node(
        package='science_servers',
        executable='uv_light_server',
        name='uv_light_server'
    )

    microscope_server = Node(
        package='science_servers',
        executable='microscope_server',
        name='microscope_server'
    )

    ir_camera_server = Node(
        package='science_servers',
        executable='ir_camera_server',
        name='ir_camera_server'
    )

    brush_server = Node(
        package='science_servers',
        executable='brush_server',
        name='brush_server'
    )

    # description.add_action(stepper_motor_server)
    description.add_action(uv_camera_server)
    # description.add_action(uv_light_server)
    description.add_action(microscope_server)
    description.add_action(ir_camera_server)
    # description.add_action(brush_server)

    return description
