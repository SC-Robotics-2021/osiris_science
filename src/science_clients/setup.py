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
    maintainer_email='austinlake04@berkeley.edu',
    description='This package contains ROS2 clients to issue commands to the science package components',
    license='BSD-3-Clause License',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'lowering_platform_client = science_clients.lowering_platform_client:main',
            'microscope_client = science_clients.microscope_client:main',
            'uv_camera_client = science_clients.uv_camera_client:main',
            'ir_camera_client = science_clients.ir_camera_client:main',
            'uv_light_client = science_clients.uv_light_client:main',
            'brush_client = science_clients.brush_client:main',
            'funnel_cake_client = science_clients.funnel_cake_client:main',
            'vacuum_client = science_clients.vacuum_client:main',
            'water_pump_client = science_clients.water_pump_client:main',
        ],
    },
)
