from setuptools import setup

package_name = 'science_clients'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    author='Parham Sharafoleslami',
    author_email='parham2002sh@gmail.com',
    maintainer='Austin Lake',
    maintainer_email='alake4@ivc.edu',
    description='This package contains ROS2 clients to issue commands to the science package components',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'stepper_motor_client = science_clients.stepper_motor_client:main',
            'microscope_client = science_clients.microscope_client:main',
            'uv_camera_client = science_clients.uv_camera_client:main',
            'ir_camera_client = science_clients.ir_camera_client:main',
            'uv_light_client = science_clients.uv_light_client:main',
            'brush_client = science_clients.brush_client:main',
        ],
    },
)
