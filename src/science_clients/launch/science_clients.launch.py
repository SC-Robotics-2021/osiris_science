from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    """
    ROS2 launch function. Adds lowering platform clients to launch description.
    """
    description = LaunchDescription()

    lowering_platform_client = Node(
        package='science_clients',
        executable='lowering_platform_client',
        name='lowering_platform_client'
    )

    microscope_client = Node(
        package='lowering_platform_clients',
        executable='microscope',
        name='microscope'
    )

    uv_camera_client = Node(
        package='science_clients',
        executable='uv_camera_client',
        name='uv_camera_client'
    )

    ir_camera_client = Node(
        package='science_clients',
        executable='ir_camera_client',
        name='ir_camera_client'
    )

    uv_light_client = Node(
        package='science_clients',
        executable='uv_light_client',
        name='uv_light_client'
    )

    brush_client = Node(
        package='science_clients',
        executable='brush_client',
        name='brush_client'
    )

    funnel_cake_client = Node(
        package='science_clients',
        executable='funnel_cake_client',
        name='funnel_cake_client'
    )

    description.add_action(lowering_platform_client)
    description.add_action(microscope_client)
    description.add_action(uv_camera_client)
    description.add_action(ir_camera_client)
    description.add_action(uv_light_client)
    description.add_action(brush_client)
    description.add_action(funnel_cake_client)

    return description
