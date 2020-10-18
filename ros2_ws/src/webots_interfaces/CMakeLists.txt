cmake_minimum_required(VERSION 3.5)
project(webots_interfaces)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/WebotsThymio2Controller.msg"
  "srv/WebotsThymio2ControllerSrv.srv"
  "srv/WebotsThymio2MotorSrv.srv"
  "srv/WebotsThymio2LEDSrv.srv"
)


ament_package()
