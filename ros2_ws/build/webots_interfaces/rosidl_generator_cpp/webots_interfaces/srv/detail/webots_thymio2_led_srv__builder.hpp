// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_interfaces:srv/WebotsThymio2LEDSrv.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__BUILDER_HPP_
#define WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__BUILDER_HPP_

#include "webots_interfaces/srv/detail/webots_thymio2_led_srv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace webots_interfaces
{

namespace srv
{

namespace builder
{

class Init_WebotsThymio2LEDSrv_Request_leds_bottom_right
{
public:
  explicit Init_WebotsThymio2LEDSrv_Request_leds_bottom_right(::webots_interfaces::srv::WebotsThymio2LEDSrv_Request & msg)
  : msg_(msg)
  {}
  ::webots_interfaces::srv::WebotsThymio2LEDSrv_Request leds_bottom_right(::webots_interfaces::srv::WebotsThymio2LEDSrv_Request::_leds_bottom_right_type arg)
  {
    msg_.leds_bottom_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_interfaces::srv::WebotsThymio2LEDSrv_Request msg_;
};

class Init_WebotsThymio2LEDSrv_Request_leds_bottom_left
{
public:
  explicit Init_WebotsThymio2LEDSrv_Request_leds_bottom_left(::webots_interfaces::srv::WebotsThymio2LEDSrv_Request & msg)
  : msg_(msg)
  {}
  Init_WebotsThymio2LEDSrv_Request_leds_bottom_right leds_bottom_left(::webots_interfaces::srv::WebotsThymio2LEDSrv_Request::_leds_bottom_left_type arg)
  {
    msg_.leds_bottom_left = std::move(arg);
    return Init_WebotsThymio2LEDSrv_Request_leds_bottom_right(msg_);
  }

private:
  ::webots_interfaces::srv::WebotsThymio2LEDSrv_Request msg_;
};

class Init_WebotsThymio2LEDSrv_Request_leds_top
{
public:
  Init_WebotsThymio2LEDSrv_Request_leds_top()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebotsThymio2LEDSrv_Request_leds_bottom_left leds_top(::webots_interfaces::srv::WebotsThymio2LEDSrv_Request::_leds_top_type arg)
  {
    msg_.leds_top = std::move(arg);
    return Init_WebotsThymio2LEDSrv_Request_leds_bottom_left(msg_);
  }

private:
  ::webots_interfaces::srv::WebotsThymio2LEDSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_interfaces::srv::WebotsThymio2LEDSrv_Request>()
{
  return webots_interfaces::srv::builder::Init_WebotsThymio2LEDSrv_Request_leds_top();
}

}  // namespace webots_interfaces


namespace webots_interfaces
{

namespace srv
{

namespace builder
{

class Init_WebotsThymio2LEDSrv_Response_log_message
{
public:
  Init_WebotsThymio2LEDSrv_Response_log_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_interfaces::srv::WebotsThymio2LEDSrv_Response log_message(::webots_interfaces::srv::WebotsThymio2LEDSrv_Response::_log_message_type arg)
  {
    msg_.log_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_interfaces::srv::WebotsThymio2LEDSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_interfaces::srv::WebotsThymio2LEDSrv_Response>()
{
  return webots_interfaces::srv::builder::Init_WebotsThymio2LEDSrv_Response_log_message();
}

}  // namespace webots_interfaces

#endif  // WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__BUILDER_HPP_
