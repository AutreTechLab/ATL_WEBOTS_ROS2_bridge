// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_interfaces:srv/WebotsThymio2MotorSrv.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_MOTOR_SRV__BUILDER_HPP_
#define WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_MOTOR_SRV__BUILDER_HPP_

#include "webots_interfaces/srv/detail/webots_thymio2_motor_srv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace webots_interfaces
{

namespace srv
{

namespace builder
{

class Init_WebotsThymio2MotorSrv_Request_motor_right_target
{
public:
  explicit Init_WebotsThymio2MotorSrv_Request_motor_right_target(::webots_interfaces::srv::WebotsThymio2MotorSrv_Request & msg)
  : msg_(msg)
  {}
  ::webots_interfaces::srv::WebotsThymio2MotorSrv_Request motor_right_target(::webots_interfaces::srv::WebotsThymio2MotorSrv_Request::_motor_right_target_type arg)
  {
    msg_.motor_right_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_interfaces::srv::WebotsThymio2MotorSrv_Request msg_;
};

class Init_WebotsThymio2MotorSrv_Request_motor_left_target
{
public:
  Init_WebotsThymio2MotorSrv_Request_motor_left_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebotsThymio2MotorSrv_Request_motor_right_target motor_left_target(::webots_interfaces::srv::WebotsThymio2MotorSrv_Request::_motor_left_target_type arg)
  {
    msg_.motor_left_target = std::move(arg);
    return Init_WebotsThymio2MotorSrv_Request_motor_right_target(msg_);
  }

private:
  ::webots_interfaces::srv::WebotsThymio2MotorSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_interfaces::srv::WebotsThymio2MotorSrv_Request>()
{
  return webots_interfaces::srv::builder::Init_WebotsThymio2MotorSrv_Request_motor_left_target();
}

}  // namespace webots_interfaces


namespace webots_interfaces
{

namespace srv
{

namespace builder
{

class Init_WebotsThymio2MotorSrv_Response_log_message
{
public:
  Init_WebotsThymio2MotorSrv_Response_log_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_interfaces::srv::WebotsThymio2MotorSrv_Response log_message(::webots_interfaces::srv::WebotsThymio2MotorSrv_Response::_log_message_type arg)
  {
    msg_.log_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_interfaces::srv::WebotsThymio2MotorSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_interfaces::srv::WebotsThymio2MotorSrv_Response>()
{
  return webots_interfaces::srv::builder::Init_WebotsThymio2MotorSrv_Response_log_message();
}

}  // namespace webots_interfaces

#endif  // WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_MOTOR_SRV__BUILDER_HPP_
