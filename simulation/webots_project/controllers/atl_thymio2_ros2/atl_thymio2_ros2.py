"""atl_thymio2_ros2 controller."""

# You may need to import some classes of the controller module. Ex:
#  from controller import Robot, Motor, DistanceSensor
from controller import Robot

import rclpy
from rclpy.node import Node

from thymio2_interfaces.msg import Thymio2Controller
from thymio2_interfaces.srv import Thymio2ControllerSrv
from thymio2_interfaces.srv import Thymio2MotorSrv
from thymio2_interfaces.srv import Thymio2LEDSrv


# create the Robot instance.
robot = Robot()

# get the time step of the current world.
timestep = int(robot.getBasicTimeStep())

class Thymio2ControllerNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("Thymio2ControllerNode")
        self.declare_parameter("robot_device", "THYMIO_V1")
        self.thymio2_status_publisher_ = self.create_publisher(Thymio2Controller, "ThymioControllerPublisher_"+str(self.get_parameter("robot_device").value), 10)
        self.thymio2_controller_service_ = self.create_service(Thymio2ControllerSrv, "ThymioControllerService_"+str(self.get_parameter("robot_device").value), self.callback_thymio2_controller)
        self.thymio2_motor_service_ = self.create_service(Thymio2MotorSrv, "Thymio2MotorSrv_"+str(self.get_parameter("robot_device").value), self.callback_thymio2_motors)
        self.thymio2_led_service_ = self.create_service(Thymio2LEDSrv, "Thymio2LEDSrv_"+str(self.get_parameter("robot_device").value), self.callback_thymio2_LED)

        self.timer_ = self.create_timer(0.5, self.publish_thymio_status)
        self.get_logger().info("Thymio2_DBUS_Controller publisher has been started.")

        # Initializing WEBOT Thymio actuator
        ## Motors
        self.leftMotor = self.robot.getMotor('motor.left')
        self.rightMotor = self.robot.getMotor('motor.right')
        self.leftMotor.setPosition(float('inf'))
        self.rightMotor.setPosition(float('inf'))
        self.leftMotor.setVelocity(0)
        self.rightMotor.setVelocity(0)
        self.motorMaxSpeed = self.leftMotor.getMaxVelocity()
        self.get_logger().info("Thymio2 Motors initialzed!")



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
        self.leftMotor.setVelocity(request.motor_left_target)
        self.rightMotor.setVelocity(request.motor_right_target)
        return response

    def callback_thymio2_LED(self, request, response):
        # Add LED commands here
        return response

    def publish_thymio_status(self):
        # Read and publish sensor data
        msg = Thymio2Controller()
        msg.acc =
        msg.prox_horizontal
        msg.prox_ground_ambiant
        msg.prox_ground_delta
        msg.prox_ground_reflected
        msg.sd_present
        msg.debug_message
        self.thymio2_status_publisher_.publish(msg)

# while robot.step(timestep) != -1:
    # Enter here functions to read sensor data, like:
    #  val = ds.getValue()

    # Publish sensor date to ROS2 topic - check with
                                        # ros2 topic list
                                        # ros2 topic echo <topic>`


    # Process sensor data here.

    # Enter here functions to send actuator commands, like:
    #  motor.setPosition(10.0)

def main(args=None):
    rclpy.init(args=args)
    node = Thymio2ControllerNode()  # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()

