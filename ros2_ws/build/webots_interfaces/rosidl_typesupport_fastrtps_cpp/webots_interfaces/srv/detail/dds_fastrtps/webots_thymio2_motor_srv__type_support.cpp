// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from webots_interfaces:srv/WebotsThymio2MotorSrv.idl
// generated code does not contain a copyright notice
#include "webots_interfaces/srv/detail/webots_thymio2_motor_srv__rosidl_typesupport_fastrtps_cpp.hpp"
#include "webots_interfaces/srv/detail/webots_thymio2_motor_srv__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace webots_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webots_interfaces
cdr_serialize(
  const webots_interfaces::srv::WebotsThymio2MotorSrv_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motor_left_target
  cdr << ros_message.motor_left_target;
  // Member: motor_right_target
  cdr << ros_message.motor_right_target;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webots_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  webots_interfaces::srv::WebotsThymio2MotorSrv_Request & ros_message)
{
  // Member: motor_left_target
  cdr >> ros_message.motor_left_target;

  // Member: motor_right_target
  cdr >> ros_message.motor_right_target;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webots_interfaces
get_serialized_size(
  const webots_interfaces::srv::WebotsThymio2MotorSrv_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motor_left_target
  {
    size_t item_size = sizeof(ros_message.motor_left_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_right_target
  {
    size_t item_size = sizeof(ros_message.motor_right_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webots_interfaces
max_serialized_size_WebotsThymio2MotorSrv_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: motor_left_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: motor_right_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _WebotsThymio2MotorSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const webots_interfaces::srv::WebotsThymio2MotorSrv_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WebotsThymio2MotorSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<webots_interfaces::srv::WebotsThymio2MotorSrv_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WebotsThymio2MotorSrv_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const webots_interfaces::srv::WebotsThymio2MotorSrv_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WebotsThymio2MotorSrv_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_WebotsThymio2MotorSrv_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _WebotsThymio2MotorSrv_Request__callbacks = {
  "webots_interfaces::srv",
  "WebotsThymio2MotorSrv_Request",
  _WebotsThymio2MotorSrv_Request__cdr_serialize,
  _WebotsThymio2MotorSrv_Request__cdr_deserialize,
  _WebotsThymio2MotorSrv_Request__get_serialized_size,
  _WebotsThymio2MotorSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _WebotsThymio2MotorSrv_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WebotsThymio2MotorSrv_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace webots_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_webots_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<webots_interfaces::srv::WebotsThymio2MotorSrv_Request>()
{
  return &webots_interfaces::srv::typesupport_fastrtps_cpp::_WebotsThymio2MotorSrv_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, webots_interfaces, srv, WebotsThymio2MotorSrv_Request)() {
  return &webots_interfaces::srv::typesupport_fastrtps_cpp::_WebotsThymio2MotorSrv_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace webots_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webots_interfaces
cdr_serialize(
  const webots_interfaces::srv::WebotsThymio2MotorSrv_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: log_message
  cdr << ros_message.log_message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webots_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  webots_interfaces::srv::WebotsThymio2MotorSrv_Response & ros_message)
{
  // Member: log_message
  cdr >> ros_message.log_message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webots_interfaces
get_serialized_size(
  const webots_interfaces::srv::WebotsThymio2MotorSrv_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: log_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.log_message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webots_interfaces
max_serialized_size_WebotsThymio2MotorSrv_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: log_message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _WebotsThymio2MotorSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const webots_interfaces::srv::WebotsThymio2MotorSrv_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WebotsThymio2MotorSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<webots_interfaces::srv::WebotsThymio2MotorSrv_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WebotsThymio2MotorSrv_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const webots_interfaces::srv::WebotsThymio2MotorSrv_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WebotsThymio2MotorSrv_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_WebotsThymio2MotorSrv_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _WebotsThymio2MotorSrv_Response__callbacks = {
  "webots_interfaces::srv",
  "WebotsThymio2MotorSrv_Response",
  _WebotsThymio2MotorSrv_Response__cdr_serialize,
  _WebotsThymio2MotorSrv_Response__cdr_deserialize,
  _WebotsThymio2MotorSrv_Response__get_serialized_size,
  _WebotsThymio2MotorSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _WebotsThymio2MotorSrv_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WebotsThymio2MotorSrv_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace webots_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_webots_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<webots_interfaces::srv::WebotsThymio2MotorSrv_Response>()
{
  return &webots_interfaces::srv::typesupport_fastrtps_cpp::_WebotsThymio2MotorSrv_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, webots_interfaces, srv, WebotsThymio2MotorSrv_Response)() {
  return &webots_interfaces::srv::typesupport_fastrtps_cpp::_WebotsThymio2MotorSrv_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace webots_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _WebotsThymio2MotorSrv__callbacks = {
  "webots_interfaces::srv",
  "WebotsThymio2MotorSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, webots_interfaces, srv, WebotsThymio2MotorSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, webots_interfaces, srv, WebotsThymio2MotorSrv_Response)(),
};

static rosidl_service_type_support_t _WebotsThymio2MotorSrv__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WebotsThymio2MotorSrv__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace webots_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_webots_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<webots_interfaces::srv::WebotsThymio2MotorSrv>()
{
  return &webots_interfaces::srv::typesupport_fastrtps_cpp::_WebotsThymio2MotorSrv__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, webots_interfaces, srv, WebotsThymio2MotorSrv)() {
  return &webots_interfaces::srv::typesupport_fastrtps_cpp::_WebotsThymio2MotorSrv__handle;
}

#ifdef __cplusplus
}
#endif
