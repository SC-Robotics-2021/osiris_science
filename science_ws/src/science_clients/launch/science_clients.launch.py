from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    """
    ROS2 launch function. Adds lowering platform clients to launch description.
    """
    description = LaunchDescription()

    stepper_motor_client = Node(
        package='lowering_platform_clients',
        executable='stepper_motor_client',
        name='stepper_motor_client'
    )

    microscope_client = Node(
        package='lowering_platform_clients',
        executable='microscope',
        name='microscope'
    )

    uv_camera_client = Node(
        package='lowering_platform_clients',
        executable='uv_camera_client',
        name='uv_camera_client'
    )

    ir_camera_client = Node(
        package='lowering_platform_clients',
        executable='ir_camera_client',
        name='ir_camera_client'
    )

    uv_light_client = Node(
        package='lowering_platform_clients',
        executable='uv_light_client',
        name='uv_light_client'
    )

    brush_client = Node(
        package='lowering_platform_clients',
        executable='brush_client',
        name='brush_client'
    )

    description.add_action(stepper_motor_client)
    description.add_action(microscope_client)
    description.add_action(uv_camera_client)
    description.add_action(ir_camera_client)
    description.add_action(uv_light_client)
    description.add_action(brush_client)

    return description
