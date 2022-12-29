from setuptools import setup

package_name = 'science_subscribers'

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
    author='Austin Lake',
    author_email='austinlake04@berkeley.edu',
    maintainer='Austin Lake',
    maintainer_email='austinlake04@berkeley.edu',
    description='This package contains ROS2 subscribers to receive frames from the science package cameras',
    license='BSD-3-Clause License',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'zed_sub = science_subscribers.zed_sub:main',
            'microscope_sub = science_subscribers.microscope_sub:main',
            'uv_camera_sub = science_subscribers.uv_camera_sub:main',
            'ir_camera_sub = science_subscribers.ir_camera_sub:main',
        ],
    },
)
