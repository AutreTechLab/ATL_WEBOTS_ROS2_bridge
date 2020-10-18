// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from webots_interfaces:srv/WebotsThymio2ControllerSrv.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_CONTROLLER_SRV__TRAITS_HPP_
#define WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_CONTROLLER_SRV__TRAITS_HPP_

#include "webots_interfaces/srv/detail/webots_thymio2_controller_srv__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<webots_interfaces::srv::WebotsThymio2ControllerSrv_Request>()
{
  return "webots_interfaces::srv::WebotsThymio2ControllerSrv_Request";
}

template<>
inline const char * name<webots_interfaces::srv::WebotsThymio2ControllerSrv_Request>()
{
  return "webots_interfaces/srv/WebotsThymio2ControllerSrv_Request";
}

template<>
struct has_fixed_size<webots_interfaces::srv::WebotsThymio2ControllerSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<webots_interfaces::srv::WebotsThymio2ControllerSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<webots_interfaces::srv::WebotsThymio2ControllerSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<webots_interfaces::srv::WebotsThymio2ControllerSrv_Response>()
{
  return "webots_interfaces::srv::WebotsThymio2ControllerSrv_Response";
}

template<>
inline const char * name<webots_interfaces::srv::WebotsThymio2ControllerSrv_Response>()
{
  return "webots_interfaces/srv/WebotsThymio2ControllerSrv_Response";
}

template<>
struct has_fixed_size<webots_interfaces::srv::WebotsThymio2ControllerSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<webots_interfaces::srv::WebotsThymio2ControllerSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<webots_interfaces::srv::WebotsThymio2ControllerSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<webots_interfaces::srv::WebotsThymio2ControllerSrv>()
{
  return "webots_interfaces::srv::WebotsThymio2ControllerSrv";
}

template<>
inline const char * name<webots_interfaces::srv::WebotsThymio2ControllerSrv>()
{
  return "webots_interfaces/srv/WebotsThymio2ControllerSrv";
}

template<>
struct has_fixed_size<webots_interfaces::srv::WebotsThymio2ControllerSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<webots_interfaces::srv::WebotsThymio2ControllerSrv_Request>::value &&
    has_fixed_size<webots_interfaces::srv::WebotsThymio2ControllerSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<webots_interfaces::srv::WebotsThymio2ControllerSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<webots_interfaces::srv::WebotsThymio2ControllerSrv_Request>::value &&
    has_bounded_size<webots_interfaces::srv::WebotsThymio2ControllerSrv_Response>::value
  >
{
};

template<>
struct is_service<webots_interfaces::srv::WebotsThymio2ControllerSrv>
  : std::true_type
{
};

template<>
struct is_service_request<webots_interfaces::srv::WebotsThymio2ControllerSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<webots_interfaces::srv::WebotsThymio2ControllerSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_CONTROLLER_SRV__TRAITS_HPP_
