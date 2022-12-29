from setuptools import PackageFinder
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    """
    ROS2 launch function. Adds lowering platform nodes to launch description.
    """
    description = LaunchDescription()

    # stepper_motor_server = Node(
    #     package='science_servers',
    #     executable='stepper_motor_server',
    #     name='stepper_motor_server'
    # )

    # uv_camera_server = Node(
    #     package='science_servers',
    #     executable='uv_camera_server',
    #     name='uv_camera_server'
    # )

    # uv_light_server = Node(
    #     package='science_servers',
    #     executable='uv_light_server',
    #     name='uv_light_server'
    # )

    # microscope_server = Node(
    #     package='science_servers',
    #     executable='microscope_server',
    #     name='microscope_server'
    # )

    # ir_camera_server = Node(
    #     package='science_servers',
    #     executable='ir_camera_server',
    #     name='ir_camera_server'
    # )

    # brush_server = Node(
    #     package='science_servers',
    #     executable='brush_server',
    #     name='brush_server'
    # )

    turret_server = Node(
        package='science_servers',
        executable='turret_server',
        name='turret_server'
    )

    platform_server = Node(
        package='science_servers',
        executable='stepper_motor_server',
        name='stepper_motor_server'
    )

    vacuum_server = Node(
        package='science_servers',
        executable='vacuum_server',
        name='vacuum_server'
    )

    water_server = Node(
        package='science_servers',
        executable='water_server',
        name='water_server'
    )

    # description.add_action(stepper_motor_server)
    # description.add_action(uv_camera_server)
    # description.add_action(uv_light_server)
    # description.add_action(microscope_server)
    # description.add_action(ir_camera_server)
    description.add_action(turret_server)
    description.add_action(platform_server)
    description.add_action(vacuum_server)
    description.add_action(water_server)
    # description.add_action(brush_server)

    return description
