from setuptools import setup
import os
from glob import glob

science_servers = 'science_servers'
science_interfaces = 'science_interfaces'

setup(
    name=science_servers,
    version='1.0.0',
    packages=[science_servers],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + science_servers]),
        ('share/' + science_servers, ['package.xml']),
        (os.path.join('share', science_servers), glob('launch/*.launch.py'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    author='Austin Lake',
    author_email='austinlake04@berkeley.edu',
    maintainer='Austin Lake',
    maintainer_email='austinlake04@berkeley.edu',
    description='This package contains ROS2 server nodes to execute functionality of lowering platform components in the science package.',
    license='BSD-3-Clause License',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'stepper_motor_server = science_servers.stepper_motor_server:main',
            # 'uv_camera_server = science_servers.uv_camera_server:main',
            # 'uv_light_server = science_servers.uv_light_server:main',
            # 'microscope_server = science_servers.microscope_server:main',
            # 'ir_camera_server = science_servers.ir_camera_server:main',
            # 'brush_server = science_servers.brush_server:main',
            # 'zed_server = science_servers.zed_server:main',
            'turret_server = science_servers.turret_server:main',
        ],
    },
)
