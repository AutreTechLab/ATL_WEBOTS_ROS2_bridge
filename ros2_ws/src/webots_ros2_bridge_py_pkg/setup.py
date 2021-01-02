from setuptools import setup

package_name = 'webots_ros2_bridge_py_pkg'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='autretechlab',
    maintainer_email='autretechlab@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "webots_thymio2_controller_node = webots_ros2_bridge_py_pkg.webots_thymio2_controller_node:main",
            "webots_cozmo_controller_node = webots_ros2_bridge_py_pkg.webots_cozmo_controller_node:main"
        ],
    },
)
