"""atl_thymio controller."""

# You may need to import some classes of the controller module. Ex:
#  from controller import Robot, Motor, DistanceSensor
from controller import Robot
from controller import Speaker



# import ROS2 modules


# create the Robot instance.
robot = Robot()
cozmoSpeaker = Speaker("HeadSpeaker")

# get the time step of the current world.
timestep = int(robot.getBasicTimeStep())

# You should insert a getDevice-like function in order to get the
# instance of a device of the robot. Something like:
#  motor = robot.getMotor('motorname')
#  ds = robot.getDistanceSensor('prox.horizontal.0')
#  ds.enable(timestep)

Camera = robot.getCamera("HeadCamera")
Camera.enable(1)

# Actuators
## Speaker getEngine(self),getLanguage(self), setEngine(self, engine), setLanguage(self, language), isSpeaking(self), speak(self, text, volume):

cozmoSpeaker.setEngine("pico")
#cozmoSpeaker.setEngine("microsoft")
cozmoSpeaker.setLanguage("fr-FR")  # "en-US" for American English (default value). "en-UK" for British English. "de-DE" for German. "es-ES" for Spanish. "fr-FR" for French. "it-IT" for Italian.

## Motors
leftMotor = robot.getMotor("LeftWheelMotor")
rightMotor = robot.getMotor("RightWheelMotor")
liftMotor = robot.getMotor("LiftMotor")
headMotor = robot.getMotor("HeadMotor")
leftMotor.setVelocity(0.0)
rightMotor.setVelocity(0.0)
liftMotor.setPosition(0.5)
headMotor.setPosition(0.2)
leftMotor.setPosition(-1)
rightMotor.setPosition(-1)

display = robot.getDisplay("face_display")
awe = display.imageLoad("cozmo-awe.png")
surprised = display.imageLoad("cozmo-surprised.png");
happy = display.imageLoad("cozmo-happy.png");

display.imagePaste(awe, 0, 0, False);

# Controller welcome message in webots console
print("Autre TechLab Cozmo controller")
print("TIME STAMP = " +str(timestep))
# Main loop:
# - perform simulation steps until Webots is stopping the controller
left = 0.2
right = 0.2
flag = -2

def CozmoExited(text):
    leftMotor.setVelocity(float(0))     # Stop any movement
    rightMotor.setVelocity(float(0))
    if text:                            # If text is set, say something
        cozmoSpeaker.speak("<prosody rate='0.8' pitch = '-1st'> " + str(text) , 5)
    liftMotor.setPosition(1)
    headMotor.setPosition(1)
    robot.step(timestep * 100)
    print(".")
    display.imagePaste(surprised, 0, 0, False)
    leftMotor.setPosition(-1)
    rightMotor.setPosition(1)
    leftMotor.setVelocity(float(0.2))
    rightMotor.setVelocity(float(0.2))
    robot.step(timestep * 100)
    print("..")
    liftMotor.setPosition(0.0)
    headMotor.setPosition(0.0)
    leftMotor.setPosition(1)
    rightMotor.setPosition(-1)
    leftMotor.setVelocity(float(0.2))
    rightMotor.setVelocity(float(0.2))
    robot.step(timestep * 100)
    print("...")
    display.imagePaste(happy, 0, 0, False)



while robot.step(timestep) != -1:
    # Read the sensors:
    # Enter here functions to read sensor data, like:
    # val = ds.getValue()
    # print("left_dist " + str(left_dist) + " right_dist " + str(right_dist))
    # Process sensor data here.
    # compute behavior (user functions)


    # Enter here functions to send actuator commands, like:
    #  motor.setPosition(10.0)
    if left > 0.1:
        leftMotor.setVelocity(float(left))
        rightMotor.setVelocity(float(right))
        left = left - 0.001
        right = left
        print ("Current speed: " + str(left))
    else:
        CozmoExited("Wow, je vois le Autre TechLab Logo, genial!!")
        robot.step(timestep * 100)
        flag = -1 * flag
        leftMotor.setVelocity(float(0))
        rightMotor.setVelocity(float(0))
        leftMotor.setPosition(flag)
        rightMotor.setPosition(flag)
        left = 0.2
        right = 0.2

    if flag > 0:
        display.imagePaste(happy, 0, 0, False)
        liftMotor.setPosition(0.5)
    else:
        display.imagePaste(surprised, 0, 0, False)
        liftMotor.setPosition(0.1)

# Enter here exit cleanup code.
