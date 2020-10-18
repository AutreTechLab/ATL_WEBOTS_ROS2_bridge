// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from webots_interfaces:srv/WebotsThymio2LEDSrv.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "webots_interfaces/srv/detail/webots_thymio2_led_srv__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace webots_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void WebotsThymio2LEDSrv_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) webots_interfaces::srv::WebotsThymio2LEDSrv_Request(_init);
}

void WebotsThymio2LEDSrv_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<webots_interfaces::srv::WebotsThymio2LEDSrv_Request *>(message_memory);
  typed_message->~WebotsThymio2LEDSrv_Request();
}

size_t size_function__WebotsThymio2LEDSrv_Request__leds_top(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WebotsThymio2LEDSrv_Request__leds_top(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__WebotsThymio2LEDSrv_Request__leds_top(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void resize_function__WebotsThymio2LEDSrv_Request__leds_top(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WebotsThymio2LEDSrv_Request__leds_bottom_left(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WebotsThymio2LEDSrv_Request__leds_bottom_left(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__WebotsThymio2LEDSrv_Request__leds_bottom_left(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void resize_function__WebotsThymio2LEDSrv_Request__leds_bottom_left(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WebotsThymio2LEDSrv_Request__leds_bottom_right(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WebotsThymio2LEDSrv_Request__leds_bottom_right(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__WebotsThymio2LEDSrv_Request__leds_bottom_right(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void resize_function__WebotsThymio2LEDSrv_Request__leds_bottom_right(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WebotsThymio2LEDSrv_Request_message_member_array[3] = {
  {
    "leds_top",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_interfaces::srv::WebotsThymio2LEDSrv_Request, leds_top),  // bytes offset in struct
    nullptr,  // default value
    size_function__WebotsThymio2LEDSrv_Request__leds_top,  // size() function pointer
    get_const_function__WebotsThymio2LEDSrv_Request__leds_top,  // get_const(index) function pointer
    get_function__WebotsThymio2LEDSrv_Request__leds_top,  // get(index) function pointer
    resize_function__WebotsThymio2LEDSrv_Request__leds_top  // resize(index) function pointer
  },
  {
    "leds_bottom_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_interfaces::srv::WebotsThymio2LEDSrv_Request, leds_bottom_left),  // bytes offset in struct
    nullptr,  // default value
    size_function__WebotsThymio2LEDSrv_Request__leds_bottom_left,  // size() function pointer
    get_const_function__WebotsThymio2LEDSrv_Request__leds_bottom_left,  // get_const(index) function pointer
    get_function__WebotsThymio2LEDSrv_Request__leds_bottom_left,  // get(index) function pointer
    resize_function__WebotsThymio2LEDSrv_Request__leds_bottom_left  // resize(index) function pointer
  },
  {
    "leds_bottom_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_interfaces::srv::WebotsThymio2LEDSrv_Request, leds_bottom_right),  // bytes offset in struct
    nullptr,  // default value
    size_function__WebotsThymio2LEDSrv_Request__leds_bottom_right,  // size() function pointer
    get_const_function__WebotsThymio2LEDSrv_Request__leds_bottom_right,  // get_const(index) function pointer
    get_function__WebotsThymio2LEDSrv_Request__leds_bottom_right,  // get(index) function pointer
    resize_function__WebotsThymio2LEDSrv_Request__leds_bottom_right  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WebotsThymio2LEDSrv_Request_message_members = {
  "webots_interfaces::srv",  // message namespace
  "WebotsThymio2LEDSrv_Request",  // message name
  3,  // number of fields
  sizeof(webots_interfaces::srv::WebotsThymio2LEDSrv_Request),
  WebotsThymio2LEDSrv_Request_message_member_array,  // message members
  WebotsThymio2LEDSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  WebotsThymio2LEDSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WebotsThymio2LEDSrv_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WebotsThymio2LEDSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace webots_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<webots_interfaces::srv::WebotsThymio2LEDSrv_Request>()
{
  return &::webots_interfaces::srv::rosidl_typesupport_introspection_cpp::WebotsThymio2LEDSrv_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, webots_interfaces, srv, WebotsThymio2LEDSrv_Request)() {
  return &::webots_interfaces::srv::rosidl_typesupport_introspection_cpp::WebotsThymio2LEDSrv_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "webots_interfaces/srv/detail/webots_thymio2_led_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace webots_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void WebotsThymio2LEDSrv_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) webots_interfaces::srv::WebotsThymio2LEDSrv_Response(_init);
}

void WebotsThymio2LEDSrv_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<webots_interfaces::srv::WebotsThymio2LEDSrv_Response *>(message_memory);
  typed_message->~WebotsThymio2LEDSrv_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WebotsThymio2LEDSrv_Response_message_member_array[1] = {
  {
    "log_message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_interfaces::srv::WebotsThymio2LEDSrv_Response, log_message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WebotsThymio2LEDSrv_Response_message_members = {
  "webots_interfaces::srv",  // message namespace
  "WebotsThymio2LEDSrv_Response",  // message name
  1,  // number of fields
  sizeof(webots_interfaces::srv::WebotsThymio2LEDSrv_Response),
  WebotsThymio2LEDSrv_Response_message_member_array,  // message members
  WebotsThymio2LEDSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  WebotsThymio2LEDSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WebotsThymio2LEDSrv_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WebotsThymio2LEDSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace webots_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<webots_interfaces::srv::WebotsThymio2LEDSrv_Response>()
{
  return &::webots_interfaces::srv::rosidl_typesupport_introspection_cpp::WebotsThymio2LEDSrv_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, webots_interfaces, srv, WebotsThymio2LEDSrv_Response)() {
  return &::webots_interfaces::srv::rosidl_typesupport_introspection_cpp::WebotsThymio2LEDSrv_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "webots_interfaces/srv/detail/webots_thymio2_led_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace webots_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers WebotsThymio2LEDSrv_service_members = {
  "webots_interfaces::srv",  // service namespace
  "WebotsThymio2LEDSrv",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<webots_interfaces::srv::WebotsThymio2LEDSrv>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t WebotsThymio2LEDSrv_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WebotsThymio2LEDSrv_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace webots_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<webots_interfaces::srv::WebotsThymio2LEDSrv>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::webots_interfaces::srv::rosidl_typesupport_introspection_cpp::WebotsThymio2LEDSrv_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::webots_interfaces::srv::WebotsThymio2LEDSrv_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::webots_interfaces::srv::WebotsThymio2LEDSrv_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, webots_interfaces, srv, WebotsThymio2LEDSrv)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<webots_interfaces::srv::WebotsThymio2LEDSrv>();
}

#ifdef __cplusplus
}
#endif
