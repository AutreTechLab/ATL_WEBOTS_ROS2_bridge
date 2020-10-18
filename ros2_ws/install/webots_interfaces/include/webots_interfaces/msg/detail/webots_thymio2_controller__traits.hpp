// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from webots_interfaces:msg/WebotsThymio2Controller.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_INTERFACES__MSG__DETAIL__WEBOTS_THYMIO2_CONTROLLER__TRAITS_HPP_
#define WEBOTS_INTERFACES__MSG__DETAIL__WEBOTS_THYMIO2_CONTROLLER__TRAITS_HPP_

#include "webots_interfaces/msg/detail/webots_thymio2_controller__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<webots_interfaces::msg::WebotsThymio2Controller>()
{
  return "webots_interfaces::msg::WebotsThymio2Controller";
}

template<>
inline const char * name<webots_interfaces::msg::WebotsThymio2Controller>()
{
  return "webots_interfaces/msg/WebotsThymio2Controller";
}

template<>
struct has_fixed_size<webots_interfaces::msg::WebotsThymio2Controller>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<webots_interfaces::msg::WebotsThymio2Controller>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<webots_interfaces::msg::WebotsThymio2Controller>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WEBOTS_INTERFACES__MSG__DETAIL__WEBOTS_THYMIO2_CONTROLLER__TRAITS_HPP_
