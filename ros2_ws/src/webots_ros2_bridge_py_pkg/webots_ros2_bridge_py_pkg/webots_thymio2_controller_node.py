#!/usr/bin/env python3
import os
import rclpy
from webots_ros2_core.webots_node import WebotsNode


from webots_interfaces.msg import WebotsThymio2Controller
from webots_interfaces.srv import WebotsThymio2ControllerSrv
from webots_interfaces.srv import WebotsThymio2MotorSrv
from webots_interfaces.srv import WebotsThymio2LEDSrv

from controller import Robot
import math

class WebotsThymio2ontrollerNode(WebotsNode): # MODIFY NAME
    def __init__(self):
        super().__init__("WebotsThymio2ControllerNode")
        self.get_logger().info("Default WEBOTS_ROBOT_NAME env is " + str(os.environ["WEBOTS_ROBOT_NAME"]) )
        self.declare_parameter("robot_device", "Thymio2_V1")
        os.environ["WEBOTS_ROBOT_NAME"] = str(self.get_parameter("robot_device").value)
        self.get_logger().info("Active WEBOTS_ROBOT_NAME env is " + str(os.environ["WEBOTS_ROBOT_NAME"]) )
        self.thymio2_status_publisher_ = self.create_publisher(WebotsThymio2Controller, "ThymioControllerPublisher_" + str(
            self.get_parameter("robot_device").value), 10)
        self.thymio2_controller_service_ = self.create_service(WebotsThymio2ControllerSrv, "ThymioControllerService_" + str(
            self.get_parameter("robot_device").value), self.callback_thymio2_controller)
        self.thymio2_motor_service_ = self.create_service(WebotsThymio2MotorSrv, "WebotsThymio2MotorSrv_" + str(
            self.get_parameter("robot_device").value), self.callback_thymio2_motors)
        self.thymio2_led_service_ = self.create_service(WebotsThymio2LEDSrv, "WebotsThymio2LEDSrv_" + str(
            self.get_parameter("robot_device").value), self.callback_thymio2_LED)

        self.timer_ = self.create_timer(0.5, self.publish_thymio_status)

        robot = Robot()
        timestep = int(robot.getBasicTimeStep())

        # Initialize Sensors
        ## Proximity

        self.prox_horizontal_0 = robot.getDistanceSensor("prox.horizontal.0")
        self.prox_horizontal_0.enable(timestep)
        self.prox_horizontal_1 = robot.getDistanceSensor("prox.horizontal.1")
        self.prox_horizontal_1.enable(timestep)
        self.prox_horizontal_2 = robot.getDistanceSensor("prox.horizontal.2")
        self.prox_horizontal_2.enable(timestep)
        self.prox_horizontal_3 = robot.getDistanceSensor("prox.horizontal.3")
        self.prox_horizontal_3.enable(timestep)
        self.prox_horizontal_4 = robot.getDistanceSensor("prox.horizontal.4")
        self.prox_horizontal_4.enable(timestep)
        self.prox_horizontal_5 = robot.getDistanceSensor("prox.horizontal.5")
        self.prox_horizontal_5.enable(timestep)
        self.prox_horizontal_6 = robot.getDistanceSensor("prox.horizontal.6")
        self.prox_horizontal_6.enable(timestep)
        self.get_logger().info("prox.horizontal 0-6 initiatialised")
        self.prox_ground_0 = robot.getDistanceSensor("prox.ground.0")
        self.prox_ground_0.enable(timestep)
        self.prox_ground_1 = robot.getDistanceSensor("prox.ground.1")
        self.prox_ground_1.enable(timestep)
        self.get_logger().info("prox.ground 0-1 initiatialised" + str(self.prox_horizontal_6))

        # Actuators
        ## Motors
        self.left_motor = robot.getMotor("motor.left")
        self.right_motor = robot.getMotor("motor.right")
        self.left_motor.setPosition(float('inf'))
        self.right_motor.setPosition(float('inf'))
        self.left_motor.setVelocity(4.0)
        self.right_motor.setVelocity(4.0)
        self.motorMaxSpeed = self.leftMotor.getMaxVelocity()
        self.get_logger().info("motor.left/right initiatialised")

        print("ALT Controller ready, let's do this!")
        # ## LEDs
        # LED_FREQ = 4.0
        # time = robot.getTime()
        # # rgb_red = float(0.5 * math.sin(math.pi() / float(LED_FREQ) * float(time)) + 0.5);
        # # rgb_green = 0.5 * math.sin(math.pi() / float(LED_FREQ) * float(time) + float(math.pi()/3)) + 0.5;
        # # rgb_blue = 0.5 * math.sin(math.pi() / float(LED_FREQ) * float(time) + float(2*math.pi()/3)) + 0.5;
        #
        # leds_top = robot.getLED("leds.top")
        # leds_bottom_left = robot.getLED("leds.bottom.left")
        # leds_bottom_right = robot.getLED("leds.bottom.right")
        # leds_buttons_led = [
        #     robot.getLED("leds.buttons.led0"),
        #     robot.getLED("leds.buttons.led1"),
        #     robot.getLED("leds.buttons.led2"),
        #     robot.getLED("leds.buttons.led3")
        # ]
        # leds_circle_led = [
        #     robot.getLED("leds.circle.led0"),
        #     robot.getLED("leds.circle.led1"),
        #     robot.getLED("leds.circle.led2"),
        #     robot.getLED("leds.circle.led3"),
        #     robot.getLED("leds.circle.led4"),
        #     robot.getLED("leds.circle.led5"),
        #     robot.getLED("leds.circle.led6")
        # ]
        # leds_prox_h_led = [
        #     robot.getLED("leds.prox.h.led0"),
        #     robot.getLED("leds.prox.h.led1"),
        #     robot.getLED("leds.prox.h.led2"),
        #     robot.getLED("leds.prox.h.led3"),
        #     robot.getLED("leds.prox.h.led4"),
        #     robot.getLED("leds.prox.h.led5"),
        #     robot.getLED("leds.prox.h.led6")
        # ]
        # leds_prox_v_led = [
        #     robot.getLED("leds.prox.v.led0"),
        #     robot.getLED("leds.prox.v.led1")
        # ]
        # leds_sound = robot.getLED("leds.sound")
        # leds_rc = robot.getLED("leds.rc")
        # leds_temperature_red = robot.getLED("leds.temperature.red")
        # leds_temperature_blue = robot.getLED("leds.temperature.blue")
        #


    def publish_thymio_status(self):
        msg = WebotsThymio2Controller()
        print("in the Publisher loop")
        # msg.acc =
        msg.prox_horizontal = [
            self.prox_horizontal_0.getValue(),
            self.prox_horizontal_1.getValue(),
            self.prox_horizontal_2.getValue(),
            self.prox_horizontal_3.getValue(),
            self.prox_horizontal_4.getValue(),
            self.prox_horizontal_5.getValue(),
            self.prox_horizontal_6.getValue()
        ]
        #msg.prox_ground_ambiant = self.asebaNetwork.GetVariable("thymio-II", "prox.ground.ambiant")
        #msg.prox_ground_delta = self.asebaNetwork.GetVariable("thymio-II", "prox.ground.delta")
        #msg.prox_ground_reflected = self.asebaNetwork.GetVariable("thymio-II", "prox.ground.reflected")
        #msg.sd_present = bool(self.asebaNetwork.GetVariable("thymio-II", "sd.present"))
        msg.debug_message = "TBD"

        self.thymio2_status_publisher_.publish(msg)

    def callback_thymio2_controller(self, request, response):
       if request.data:
            self.counter_ = 0
            response.success = True
            response.log_message = "Counter has been reset"
       else:
            response.success = False
            response.log_message = "Counter has not been reset"
       return response

    def callback_thymio2_motors(self, request, response):
        response.log_message = "OK"
        self.left_motor.setVelocity(request.motor_left_target)
        self.right_motor.setVelocity(request.motor_right_target)

        response.log_message = "TBD"

        return response

    def callback_thymio2_LED(self, request, response):
        response.log_message = "OK"
#              self.get_logger().info("Setting leds.top: " + str(request.leds_top[0]) + ":" + str(request.leds_top[1]) + ":" + str(request.leds_top[2]))
#              self.asebaNetwork.SetVariable("thymio-II", "leds.top", (int(request.leds_top[0]),int(request.leds_top[1]),int(request.leds_top[2])))
#              self.asebaNetwork.SetVariable("thymio-II", "leds.top", (0,0,0))
#              self.asebaNetwork.SetVariable("thymio-II", "leds.bottom.left", (0,0,0))
#              self.asebaNetwork.SetVariable("thymio-II", "leds.bottom.right", (0,0,0))
#              self.asebaNetwork.SetVariable("thymio-II", "leds.circle", [int(leds_circle)])
#              self.get_logger().info("Setting leds.top/bottom_left/bottom_right to " + str(request.leds_top))
        return response


def main(args=None):
    rclpy.init(args=args)
    node = WebotsThymio2ontrollerNode(args=args) # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()