#!/usr/bin/env python

# Copyright 1996-2019 Cyberbotics Ltd.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""Launch Webots and the controller."""

# AutreTechLAB - Launch file for webots and Cozmo_V1 ros2 controller
# autretechlab@gmail.com

import os
from launch import LaunchDescription
from launch_ros.actions import Node


from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Webots
    os.environ["WEBOTS_ROBOT_NAME"] = "cozmo_v1" # Robot name to link controller and webots robot
    webots_world = os.path.join(get_package_share_directory('cozmo_v1_bringup'), 'launch', 'worlds', 'cozmo_on_stage.wbt')
    webots_port = "9090"
    webots_options = " --batch --mode=pause --minimize --stream=['port=" + str(webots_port) +";mode=x3d']"
    webots_command = "webots " + str(webots_options) + str(webots_world)
    print (webots_command)
    os.system("("+str(webots_command) + " &) && sleep 0.3")

    # Controller node
    ld = LaunchDescription()

    remap_number_topic = ("number", "my_number")

    webots_cozmo_controller_node = Node(
        package="webots_ros2_bridge_py_pkg",
        executable="webots_cozmo_controller_node",
        # name="my_number_publisher",
        # remappings=[
        #     remap_number_topic
        # ],
        parameters=[
            {"number_to_publish": 4}
        ]
    )

    ld.add_action(webots_cozmo_controller_node)
#    ld.add_action(number_counter_node)
    return ld

# ps afux | grep webots | grep 9090
# pkill -n webots