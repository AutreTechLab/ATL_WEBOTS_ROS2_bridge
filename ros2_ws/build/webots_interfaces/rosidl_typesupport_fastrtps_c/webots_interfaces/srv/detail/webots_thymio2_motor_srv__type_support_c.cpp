// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from webots_interfaces:srv/WebotsThymio2MotorSrv.idl
// generated code does not contain a copyright notice
#include "webots_interfaces/srv/detail/webots_thymio2_motor_srv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "webots_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "webots_interfaces/srv/detail/webots_thymio2_motor_srv__struct.h"
#include "webots_interfaces/srv/detail/webots_thymio2_motor_srv__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _WebotsThymio2MotorSrv_Request__ros_msg_type = webots_interfaces__srv__WebotsThymio2MotorSrv_Request;

static bool _WebotsThymio2MotorSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WebotsThymio2MotorSrv_Request__ros_msg_type * ros_message = static_cast<const _WebotsThymio2MotorSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_left_target
  {
    cdr << ros_message->motor_left_target;
  }

  // Field name: motor_right_target
  {
    cdr << ros_message->motor_right_target;
  }

  return true;
}

static bool _WebotsThymio2MotorSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WebotsThymio2MotorSrv_Request__ros_msg_type * ros_message = static_cast<_WebotsThymio2MotorSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_left_target
  {
    cdr >> ros_message->motor_left_target;
  }

  // Field name: motor_right_target
  {
    cdr >> ros_message->motor_right_target;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_interfaces
size_t get_serialized_size_webots_interfaces__srv__WebotsThymio2MotorSrv_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WebotsThymio2MotorSrv_Request__ros_msg_type * ros_message = static_cast<const _WebotsThymio2MotorSrv_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motor_left_target
  {
    size_t item_size = sizeof(ros_message->motor_left_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_right_target
  {
    size_t item_size = sizeof(ros_message->motor_right_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WebotsThymio2MotorSrv_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_webots_interfaces__srv__WebotsThymio2MotorSrv_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_interfaces
size_t max_serialized_size_webots_interfaces__srv__WebotsThymio2MotorSrv_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: motor_left_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: motor_right_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _WebotsThymio2MotorSrv_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_webots_interfaces__srv__WebotsThymio2MotorSrv_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WebotsThymio2MotorSrv_Request = {
  "webots_interfaces::srv",
  "WebotsThymio2MotorSrv_Request",
  _WebotsThymio2MotorSrv_Request__cdr_serialize,
  _WebotsThymio2MotorSrv_Request__cdr_deserialize,
  _WebotsThymio2MotorSrv_Request__get_serialized_size,
  _WebotsThymio2MotorSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _WebotsThymio2MotorSrv_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WebotsThymio2MotorSrv_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_interfaces, srv, WebotsThymio2MotorSrv_Request)() {
  return &_WebotsThymio2MotorSrv_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "webots_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "webots_interfaces/srv/detail/webots_thymio2_motor_srv__struct.h"
// already included above
// #include "webots_interfaces/srv/detail/webots_thymio2_motor_srv__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // log_message
#include "rosidl_runtime_c/string_functions.h"  // log_message

// forward declare type support functions


using _WebotsThymio2MotorSrv_Response__ros_msg_type = webots_interfaces__srv__WebotsThymio2MotorSrv_Response;

static bool _WebotsThymio2MotorSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WebotsThymio2MotorSrv_Response__ros_msg_type * ros_message = static_cast<const _WebotsThymio2MotorSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: log_message
  {
    const rosidl_runtime_c__String * str = &ros_message->log_message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _WebotsThymio2MotorSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WebotsThymio2MotorSrv_Response__ros_msg_type * ros_message = static_cast<_WebotsThymio2MotorSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: log_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->log_message.data) {
      rosidl_runtime_c__String__init(&ros_message->log_message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->log_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'log_message'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_interfaces
size_t get_serialized_size_webots_interfaces__srv__WebotsThymio2MotorSrv_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WebotsThymio2MotorSrv_Response__ros_msg_type * ros_message = static_cast<const _WebotsThymio2MotorSrv_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name log_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->log_message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _WebotsThymio2MotorSrv_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_webots_interfaces__srv__WebotsThymio2MotorSrv_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_interfaces
size_t max_serialized_size_webots_interfaces__srv__WebotsThymio2MotorSrv_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: log_message
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

static size_t _WebotsThymio2MotorSrv_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_webots_interfaces__srv__WebotsThymio2MotorSrv_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WebotsThymio2MotorSrv_Response = {
  "webots_interfaces::srv",
  "WebotsThymio2MotorSrv_Response",
  _WebotsThymio2MotorSrv_Response__cdr_serialize,
  _WebotsThymio2MotorSrv_Response__cdr_deserialize,
  _WebotsThymio2MotorSrv_Response__get_serialized_size,
  _WebotsThymio2MotorSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _WebotsThymio2MotorSrv_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WebotsThymio2MotorSrv_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_interfaces, srv, WebotsThymio2MotorSrv_Response)() {
  return &_WebotsThymio2MotorSrv_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "webots_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "webots_interfaces/srv/webots_thymio2_motor_srv.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t WebotsThymio2MotorSrv__callbacks = {
  "webots_interfaces::srv",
  "WebotsThymio2MotorSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_interfaces, srv, WebotsThymio2MotorSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_interfaces, srv, WebotsThymio2MotorSrv_Response)(),
};

static rosidl_service_type_support_t WebotsThymio2MotorSrv__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &WebotsThymio2MotorSrv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_interfaces, srv, WebotsThymio2MotorSrv)() {
  return &WebotsThymio2MotorSrv__handle;
}

#if defined(__cplusplus)
}
#endif
