from setuptools import PackageFinder
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    """
    ROS2 launch function. Adds lowering platform nodes to launch description.
    """
    description = LaunchDescription()

    lowering_platform_server = Node(
        package='science_servers',
        executable='lowering_platform_server',
        name='lowering_platform_server'
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

    funnel_cake_server = Node(
        package='science_servers',
        executable='funnel_cake_server',
        name='funnel_cake_server'
    )

    vacuum_server = Node(
        package='science_servers',
        executable='vacuum_server',
        name='vacuum_server'
    )

    water_pump_server = Node(
        package='science_servers',
        executable='water_pump_server',
        name='water_pump_server'
    )

    description.add_action(lowering_platform_server)
    description.add_action(uv_camera_server)
    description.add_action(uv_light_server)
    description.add_action(microscope_server)
    description.add_action(ir_camera_server)
    description.add_action(funnel_cake_server)
    description.add_action(vacuum_server)
    description.add_action(water_pump_server)
    description.add_action(brush_server)

    return description
