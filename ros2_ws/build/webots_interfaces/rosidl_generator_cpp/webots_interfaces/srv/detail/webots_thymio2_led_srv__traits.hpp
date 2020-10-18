// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from webots_interfaces:srv/WebotsThymio2LEDSrv.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__TRAITS_HPP_
#define WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__TRAITS_HPP_

#include "webots_interfaces/srv/detail/webots_thymio2_led_srv__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<webots_interfaces::srv::WebotsThymio2LEDSrv_Request>()
{
  return "webots_interfaces::srv::WebotsThymio2LEDSrv_Request";
}

template<>
inline const char * name<webots_interfaces::srv::WebotsThymio2LEDSrv_Request>()
{
  return "webots_interfaces/srv/WebotsThymio2LEDSrv_Request";
}

template<>
struct has_fixed_size<webots_interfaces::srv::WebotsThymio2LEDSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<webots_interfaces::srv::WebotsThymio2LEDSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<webots_interfaces::srv::WebotsThymio2LEDSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<webots_interfaces::srv::WebotsThymio2LEDSrv_Response>()
{
  return "webots_interfaces::srv::WebotsThymio2LEDSrv_Response";
}

template<>
inline const char * name<webots_interfaces::srv::WebotsThymio2LEDSrv_Response>()
{
  return "webots_interfaces/srv/WebotsThymio2LEDSrv_Response";
}

template<>
struct has_fixed_size<webots_interfaces::srv::WebotsThymio2LEDSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<webots_interfaces::srv::WebotsThymio2LEDSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<webots_interfaces::srv::WebotsThymio2LEDSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<webots_interfaces::srv::WebotsThymio2LEDSrv>()
{
  return "webots_interfaces::srv::WebotsThymio2LEDSrv";
}

template<>
inline const char * name<webots_interfaces::srv::WebotsThymio2LEDSrv>()
{
  return "webots_interfaces/srv/WebotsThymio2LEDSrv";
}

template<>
struct has_fixed_size<webots_interfaces::srv::WebotsThymio2LEDSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<webots_interfaces::srv::WebotsThymio2LEDSrv_Request>::value &&
    has_fixed_size<webots_interfaces::srv::WebotsThymio2LEDSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<webots_interfaces::srv::WebotsThymio2LEDSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<webots_interfaces::srv::WebotsThymio2LEDSrv_Request>::value &&
    has_bounded_size<webots_interfaces::srv::WebotsThymio2LEDSrv_Response>::value
  >
{
};

template<>
struct is_service<webots_interfaces::srv::WebotsThymio2LEDSrv>
  : std::true_type
{
};

template<>
struct is_service_request<webots_interfaces::srv::WebotsThymio2LEDSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<webots_interfaces::srv::WebotsThymio2LEDSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__TRAITS_HPP_
