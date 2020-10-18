// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from webots_interfaces:srv/WebotsThymio2LEDSrv.idl
// generated code does not contain a copyright notice
#include "webots_interfaces/srv/detail/webots_thymio2_led_srv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "webots_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "webots_interfaces/srv/detail/webots_thymio2_led_srv__struct.h"
#include "webots_interfaces/srv/detail/webots_thymio2_led_srv__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // leds_bottom_left, leds_bottom_right, leds_top
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // leds_bottom_left, leds_bottom_right, leds_top

// forward declare type support functions


using _WebotsThymio2LEDSrv_Request__ros_msg_type = webots_interfaces__srv__WebotsThymio2LEDSrv_Request;

static bool _WebotsThymio2LEDSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WebotsThymio2LEDSrv_Request__ros_msg_type * ros_message = static_cast<const _WebotsThymio2LEDSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: leds_top
  {
    size_t size = ros_message->leds_top.size;
    auto array_ptr = ros_message->leds_top.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: leds_bottom_left
  {
    size_t size = ros_message->leds_bottom_left.size;
    auto array_ptr = ros_message->leds_bottom_left.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: leds_bottom_right
  {
    size_t size = ros_message->leds_bottom_right.size;
    auto array_ptr = ros_message->leds_bottom_right.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _WebotsThymio2LEDSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WebotsThymio2LEDSrv_Request__ros_msg_type * ros_message = static_cast<_WebotsThymio2LEDSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: leds_top
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->leds_top.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->leds_top);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->leds_top, size)) {
      return "failed to create array for field 'leds_top'";
    }
    auto array_ptr = ros_message->leds_top.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: leds_bottom_left
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->leds_bottom_left.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->leds_bottom_left);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->leds_bottom_left, size)) {
      return "failed to create array for field 'leds_bottom_left'";
    }
    auto array_ptr = ros_message->leds_bottom_left.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: leds_bottom_right
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->leds_bottom_right.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->leds_bottom_right);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->leds_bottom_right, size)) {
      return "failed to create array for field 'leds_bottom_right'";
    }
    auto array_ptr = ros_message->leds_bottom_right.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_interfaces
size_t get_serialized_size_webots_interfaces__srv__WebotsThymio2LEDSrv_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WebotsThymio2LEDSrv_Request__ros_msg_type * ros_message = static_cast<const _WebotsThymio2LEDSrv_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name leds_top
  {
    size_t array_size = ros_message->leds_top.size;
    auto array_ptr = ros_message->leds_top.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leds_bottom_left
  {
    size_t array_size = ros_message->leds_bottom_left.size;
    auto array_ptr = ros_message->leds_bottom_left.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leds_bottom_right
  {
    size_t array_size = ros_message->leds_bottom_right.size;
    auto array_ptr = ros_message->leds_bottom_right.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WebotsThymio2LEDSrv_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_webots_interfaces__srv__WebotsThymio2LEDSrv_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_interfaces
size_t max_serialized_size_webots_interfaces__srv__WebotsThymio2LEDSrv_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: leds_top
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: leds_bottom_left
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: leds_bottom_right
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _WebotsThymio2LEDSrv_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_webots_interfaces__srv__WebotsThymio2LEDSrv_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WebotsThymio2LEDSrv_Request = {
  "webots_interfaces::srv",
  "WebotsThymio2LEDSrv_Request",
  _WebotsThymio2LEDSrv_Request__cdr_serialize,
  _WebotsThymio2LEDSrv_Request__cdr_deserialize,
  _WebotsThymio2LEDSrv_Request__get_serialized_size,
  _WebotsThymio2LEDSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _WebotsThymio2LEDSrv_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WebotsThymio2LEDSrv_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_interfaces, srv, WebotsThymio2LEDSrv_Request)() {
  return &_WebotsThymio2LEDSrv_Request__type_support;
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
// #include "webots_interfaces/srv/detail/webots_thymio2_led_srv__struct.h"
// already included above
// #include "webots_interfaces/srv/detail/webots_thymio2_led_srv__functions.h"
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


using _WebotsThymio2LEDSrv_Response__ros_msg_type = webots_interfaces__srv__WebotsThymio2LEDSrv_Response;

static bool _WebotsThymio2LEDSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WebotsThymio2LEDSrv_Response__ros_msg_type * ros_message = static_cast<const _WebotsThymio2LEDSrv_Response__ros_msg_type *>(untyped_ros_message);
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

static bool _WebotsThymio2LEDSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WebotsThymio2LEDSrv_Response__ros_msg_type * ros_message = static_cast<_WebotsThymio2LEDSrv_Response__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_webots_interfaces__srv__WebotsThymio2LEDSrv_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WebotsThymio2LEDSrv_Response__ros_msg_type * ros_message = static_cast<const _WebotsThymio2LEDSrv_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _WebotsThymio2LEDSrv_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_webots_interfaces__srv__WebotsThymio2LEDSrv_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_interfaces
size_t max_serialized_size_webots_interfaces__srv__WebotsThymio2LEDSrv_Response(
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

static size_t _WebotsThymio2LEDSrv_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_webots_interfaces__srv__WebotsThymio2LEDSrv_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WebotsThymio2LEDSrv_Response = {
  "webots_interfaces::srv",
  "WebotsThymio2LEDSrv_Response",
  _WebotsThymio2LEDSrv_Response__cdr_serialize,
  _WebotsThymio2LEDSrv_Response__cdr_deserialize,
  _WebotsThymio2LEDSrv_Response__get_serialized_size,
  _WebotsThymio2LEDSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _WebotsThymio2LEDSrv_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WebotsThymio2LEDSrv_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_interfaces, srv, WebotsThymio2LEDSrv_Response)() {
  return &_WebotsThymio2LEDSrv_Response__type_support;
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
#include "webots_interfaces/srv/webots_thymio2_led_srv.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t WebotsThymio2LEDSrv__callbacks = {
  "webots_interfaces::srv",
  "WebotsThymio2LEDSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_interfaces, srv, WebotsThymio2LEDSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_interfaces, srv, WebotsThymio2LEDSrv_Response)(),
};

static rosidl_service_type_support_t WebotsThymio2LEDSrv__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &WebotsThymio2LEDSrv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_interfaces, srv, WebotsThymio2LEDSrv)() {
  return &WebotsThymio2LEDSrv__handle;
}

#if defined(__cplusplus)
}
#endif
