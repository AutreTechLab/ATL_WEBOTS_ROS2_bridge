#!/usr/bin/env python3
import os
import rclpy
from webots_ros2_core.webots_node import WebotsNode
from ament_index_python.packages import get_package_share_directory
from controller import Speaker
from controller import PositionSensor

from webots_interfaces.msg import WebotsCozmoController
from webots_interfaces.srv import WebotsCozmoSpeakerSrv
from webots_interfaces.srv import WebotsCozmoMotorSrv
from webots_interfaces.srv import WebotsCozmoLEDSrv


class WebotsCozmoControllerNode(WebotsNode): # MODIFY NAME
    def __init__(self, args):
        super().__init__("WebotsCozmoControllerNode")
        self.get_logger().info("Default WEBOTS_ROBOT_NAME env is " + str(os.environ["WEBOTS_ROBOT_NAME"]) )
        self.declare_parameter("robot_device", "Cozmo_V1")
        os.environ["WEBOTS_ROBOT_NAME"] = str(self.get_parameter("robot_device").value)
        self.get_logger().info("Active WEBOTS_ROBOT_NAME env is " + str(os.environ["WEBOTS_ROBOT_NAME"]) )

        self.cozmo_status_publisher_ = self.create_publisher(WebotsCozmoController, "WebotsControllerPublisher_" + str(
            self.get_parameter("robot_device").value), 10)



    # Services for Cozmo Actuators:
        # 1. Skeaker
        cozmoSpeaker = Speaker("HeadSpeaker")
        cozmoSpeaker.setEngine("pico")       # cozmoSpeaker.setEngine("microsoft")
        cozmoSpeaker.setLanguage(
            "fr-FR")  # "en-US" for American English (default value). "en-UK" for British English. "de-DE" for German. "es-ES" for Spanish. "fr-FR" for French. "it-IT" for Italian.
        self.cozmo_speaker_service_ = self.create_service(WebotsCozmoSpeakerSrv, "WebotsCozmoSpeakerSrv_" + str(self.get_parameter("robot_device").value), self.callback_cozmo_speaker)
        self.get_logger().info("Activating Service: WebotsCozmoSpeakerSrv_" + str(self.get_parameter("robot_device").value))

        # 2. Motor
        leftMotor = self.robot.getMotor("LeftWheelMotor")
        rightMotor = self.robot.getMotor("RightWheelMotor")
        leftMotor.setVelocity(0.0)
        rightMotor.setVelocity(0.0)
        leftMotor.setPosition(1)
        rightMotor.setPosition(1)
        LeftWheelMotorPosSensor = PositionSensor("LeftWheelMotorPosSensor")
        LeftWheelMotorPosSensor.enable(1)
        RightWheelMotorPosSensor = PositionSensor("RightWheelMotorPosSensor")
        RightWheelMotorPosSensor.enable(1)

        # 3. Head Angle
        headMotor = self.robot.getMotor("HeadMotor")
        HeadMotorPosSensor = PositionSensor("HeadMotorPosSensor")
        HeadMotorPosSensor.enable(1)
        # 4. Face
        display = self.robot.getDisplay("face_display") # TODO: Find a way to load the images from controller directory and not the ros_ws
        awe = display.imageLoad(os.path.join(get_package_share_directory('cozmo_v1_bringup'),'webots_resources', "cozmo-awe.png"))
 #       awe = display.imageLoad("cozmo-awe.png")
        surprised = display.imageLoad(os.path.join(get_package_share_directory('cozmo_v1_bringup'),'webots_resources', "cozmo-surprised.png"))
        happy = display.imageLoad(os.path.join(get_package_share_directory('cozmo_v1_bringup'),'webots_resources', "cozmo-happy.png"))
        display.imagePaste(awe, 0, 0, False)

        # 5. Backpack LEDs
        ledHealth = [
            self.robot.getLED("ledHealth0"),
            self.robot.getLED("ledHealth1"),
            self.robot.getLED("ledHealth2")
            ]
        ledDirLeft = self.robot.getLED("ledDirLeft")
        ledDirRight = self.robot.getLED("ledDirRight")
        ledDirLeft.set(0x000000)
        ledDirRight.set(0xff0000)
        ledHealth[0].set(0x00ff00)
        ledHealth[1].set(0x00ff00)
        ledHealth[2].set(0x00ff00)

        # 6. Cammera and Object recognition
        Camera = self.robot.getCamera("HeadCamera")
        Camera.enable(1)
        # 7. Lift
        liftMotor = self.robot.getMotor("LiftMotor")
        # 8. Annimations and Emotions

        # self.cozmo_motor_service_ = self.create_service(WebotsCozmoMotorSrv, "WebotsCozmoMotorSrv_" + str(
        #     self.get_parameter("robot_device").value), self.callback_cozmo_motors)
        #
        #
        # self.cozmo_led_service_ = self.create_service(WebotsCozmoLEDSrv, "WebotsCozmoLEDSrv_" + str(
        #     self.get_parameter("robot_device").value), self.callback_cozmo_LED)


        self.timer_ = self.create_timer(0.001 * self.timestep, self.publish_cozmo_status)


    def publish_cozmo_status(self):
        # Sensors
        HeadMotorPosSensor = PositionSensor("HeadMotorPosSensor")
        HeadMotorPosSensor.enable(1)
        self.LeftWheelMotorPosSensor = PositionSensor("LeftWheelMotorPosSensor")
        self.RightWheelMotorPosSensor = PositionSensor("RightWheelMotorPosSensor")

        msg = WebotsCozmoController()
        print("in the Publisher loop")
        msg.debug_message = "Test run"
        msg.left_wheel_motor_pos_sensor = str(self.LeftWheelMotorPosSensor.getValue)
        msg.right_wheel_motor_pos_sensor = str(self.RightWheelMotorPosSensor.getValue)
        self.cozmo_status_publisher_.publish(msg)

    def callback_cozmo_speaker(self, request, response):
        self.get_logger().info("Speaker Service:" + str(request.speak_text))
        cozmoSpeaker = Speaker("HeadSpeaker")
        if request.set_language:
            cozmoSpeaker.setLanguage(request.set_language)
        if request.speak_volume:
            speak_volume = request.speak_volume
        else:
            speak_volume = 1 # valid entries are from 0 to 1
        if request.speak_rate:
            speak_rate = request.speak_rate
        else:
            speak_rate = 1.0
        if request.speak_pitch:
            speak_pitch = request.speak_rate
        else:
            speak_pitch = "-1st"

        speak_text = request.speak_text
        cozmoSpeaker.speak("<prosody rate='" + str(speak_rate) + "' pitch = '" + str(speak_pitch) + "'> " + str(speak_text), speak_volume)

        response.get_engine = str(cozmoSpeaker.getEngine)
        response.get_language = str(cozmoSpeaker.getLanguage)
        response.is_speaking = str(cozmoSpeaker.isSpeaking)
        return response

def main(args=None):
    rclpy.init(args=args)
    node = WebotsCozmoControllerNode(args=args) # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
