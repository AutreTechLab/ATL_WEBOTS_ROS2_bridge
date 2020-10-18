// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_interfaces:srv/WebotsThymio2ControllerSrv.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_CONTROLLER_SRV__BUILDER_HPP_
#define WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_CONTROLLER_SRV__BUILDER_HPP_

#include "webots_interfaces/srv/detail/webots_thymio2_controller_srv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace webots_interfaces
{

namespace srv
{

namespace builder
{

class Init_WebotsThymio2ControllerSrv_Request_usb_port
{
public:
  explicit Init_WebotsThymio2ControllerSrv_Request_usb_port(::webots_interfaces::srv::WebotsThymio2ControllerSrv_Request & msg)
  : msg_(msg)
  {}
  ::webots_interfaces::srv::WebotsThymio2ControllerSrv_Request usb_port(::webots_interfaces::srv::WebotsThymio2ControllerSrv_Request::_usb_port_type arg)
  {
    msg_.usb_port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_interfaces::srv::WebotsThymio2ControllerSrv_Request msg_;
};

class Init_WebotsThymio2ControllerSrv_Request_command
{
public:
  Init_WebotsThymio2ControllerSrv_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebotsThymio2ControllerSrv_Request_usb_port command(::webots_interfaces::srv::WebotsThymio2ControllerSrv_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_WebotsThymio2ControllerSrv_Request_usb_port(msg_);
  }

private:
  ::webots_interfaces::srv::WebotsThymio2ControllerSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_interfaces::srv::WebotsThymio2ControllerSrv_Request>()
{
  return webots_interfaces::srv::builder::Init_WebotsThymio2ControllerSrv_Request_command();
}

}  // namespace webots_interfaces


namespace webots_interfaces
{

namespace srv
{

namespace builder
{

class Init_WebotsThymio2ControllerSrv_Response_log_message
{
public:
  explicit Init_WebotsThymio2ControllerSrv_Response_log_message(::webots_interfaces::srv::WebotsThymio2ControllerSrv_Response & msg)
  : msg_(msg)
  {}
  ::webots_interfaces::srv::WebotsThymio2ControllerSrv_Response log_message(::webots_interfaces::srv::WebotsThymio2ControllerSrv_Response::_log_message_type arg)
  {
    msg_.log_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_interfaces::srv::WebotsThymio2ControllerSrv_Response msg_;
};

class Init_WebotsThymio2ControllerSrv_Response_success
{
public:
  Init_WebotsThymio2ControllerSrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebotsThymio2ControllerSrv_Response_log_message success(::webots_interfaces::srv::WebotsThymio2ControllerSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_WebotsThymio2ControllerSrv_Response_log_message(msg_);
  }

private:
  ::webots_interfaces::srv::WebotsThymio2ControllerSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_interfaces::srv::WebotsThymio2ControllerSrv_Response>()
{
  return webots_interfaces::srv::builder::Init_WebotsThymio2ControllerSrv_Response_success();
}

}  // namespace webots_interfaces

#endif  // WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_CONTROLLER_SRV__BUILDER_HPP_
