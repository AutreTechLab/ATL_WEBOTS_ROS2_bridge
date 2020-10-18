"""atl_thymio controller."""

# You may need to import some classes of the controller module. Ex:
#  from controller import Robot, Motor, DistanceSensor
from controller import Robot
import math

# create the Robot instance.
robot = Robot()

# get the time step of the current world.
timestep = int(robot.getBasicTimeStep())

# You should insert a getDevice-like function in order to get the
# instance of a device of the robot. Something like:
#  motor = robot.getMotor('motorname')
#  ds = robot.getDistanceSensor('prox.horizontal.0')
#  ds.enable(timestep)

prox_horizontal_0 = robot.getDistanceSensor("prox.horizontal.0")
prox_horizontal_0.enable(timestep)
prox_horizontal_1 = robot.getDistanceSensor("prox.horizontal.1")
prox_horizontal_1.enable(timestep)
prox_horizontal_2 = robot.getDistanceSensor("prox.horizontal.2")
prox_horizontal_2.enable(timestep)
prox_horizontal_3 = robot.getDistanceSensor("prox.horizontal.3")
prox_horizontal_3.enable(timestep)
prox_horizontal_4 = robot.getDistanceSensor("prox.horizontal.4")
prox_horizontal_4.enable(timestep)
prox_horizontal_5 = robot.getDistanceSensor("prox.horizontal.5")
prox_horizontal_5.enable(timestep)
prox_horizontal_6  = robot.getDistanceSensor("prox.horizontal.6")
prox_horizontal_6.enable(timestep)
prox_ground_0 = robot.getDistanceSensor("prox.ground.0")
prox_ground_0.enable(timestep)
prox_ground_1 = robot.getDistanceSensor("prox.ground.1")
prox_ground_1.enable(timestep)



# Actuators
## Motors
left_motor = robot.getMotor("motor.left")
right_motor = robot.getMotor("motor.right")
left_motor.setPosition(float('inf'))
right_motor.setPosition(float('inf'))
left_motor.setVelocity(0.0)
right_motor.setVelocity(0.0)

## LEDs
LED_FREQ = 4.0
time = robot.getTime()
#rgb_red = float(0.5 * math.sin(math.pi() / float(LED_FREQ) * float(time)) + 0.5);
#rgb_green = 0.5 * math.sin(math.pi() / float(LED_FREQ) * float(time) + float(math.pi()/3)) + 0.5;
#rgb_blue = 0.5 * math.sin(math.pi() / float(LED_FREQ) * float(time) + float(2*math.pi()/3)) + 0.5;

leds_top = robot.getLED("leds.top")
leds_bottom_left = robot.getLED("leds.bottom.left")
leds_bottom_right = robot.getLED("leds.bottom.right")
leds_buttons_led = [
    robot.getLED("leds.buttons.led0"),
    robot.getLED("leds.buttons.led1"),
    robot.getLED("leds.buttons.led2"),
    robot.getLED("leds.buttons.led3")
    ]
leds_circle_led = [
    robot.getLED("leds.circle.led0"),
    robot.getLED("leds.circle.led1"),
    robot.getLED("leds.circle.led2"),
    robot.getLED("leds.circle.led3"),
    robot.getLED("leds.circle.led4"),
    robot.getLED("leds.circle.led5"),
    robot.getLED("leds.circle.led6")
    ]
leds_prox_h_led = [
    robot.getLED("leds.prox.h.led0"),
    robot.getLED("leds.prox.h.led1"),
    robot.getLED("leds.prox.h.led2"),
    robot.getLED("leds.prox.h.led3"),
    robot.getLED("leds.prox.h.led4"),
    robot.getLED("leds.prox.h.led5"),
    robot.getLED("leds.prox.h.led6")
    ]
leds_prox_v_led = [
    robot.getLED("leds.prox.v.led0"),
    robot.getLED("leds.prox.v.led1")
    ]
leds_sound = robot.getLED("leds.sound")
leds_rc = robot.getLED("leds.rc")
leds_temperature_red = robot.getLED("leds.temperature.red")
leds_temperature_blue = robot.getLED("leds.temperature.blue")

print(str(leds_prox_v_led))

# Controller welcome message in webots console
print("Autre TechLab ThymioII controller")
print("TIME STAMP = " +str(timestep))
# Main loop:
# - perform simulation steps until Webots is stopping the controller
while robot.step(timestep) != -1:
    # Read the sensors:
    # Enter here functions to read sensor data, like:
    # val = ds.getValue()
    left_dist = prox_horizontal_0.getValue()
    right_dist = prox_horizontal_4.getValue()
    # print("left_dist " + str(left_dist) + " right_dist " + str(right_dist)) 
    # Process sensor data here.
    # compute behavior (user functions)
    left = 5
    right = 5

    # Enter here functions to send actuator commands, like:
    #  motor.setPosition(10.0)
    if left_dist > 0:
        leds_prox_h_led[0].set(1)
        leds_prox_h_led[4].set(1)
        leds_circle_led[0].set(1)
        left_motor.setVelocity(10)
        right_motor.setVelocity(10)
    else:
        leds_prox_h_led[0].set(1)
        leds_prox_h_led[4].set(1)
        left_motor.setVelocity(left)
        right_motor.setVelocity(right)
    pass

# Enter here exit cleanup code.
