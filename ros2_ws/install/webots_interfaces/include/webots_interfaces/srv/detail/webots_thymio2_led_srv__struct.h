// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webots_interfaces:srv/WebotsThymio2LEDSrv.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__STRUCT_H_
#define WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'leds_top'
// Member 'leds_bottom_left'
// Member 'leds_bottom_right'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/WebotsThymio2LEDSrv in the package webots_interfaces.
typedef struct webots_interfaces__srv__WebotsThymio2LEDSrv_Request
{
  rosidl_runtime_c__int64__Sequence leds_top;
  rosidl_runtime_c__int64__Sequence leds_bottom_left;
  rosidl_runtime_c__int64__Sequence leds_bottom_right;
} webots_interfaces__srv__WebotsThymio2LEDSrv_Request;

// Struct for a sequence of webots_interfaces__srv__WebotsThymio2LEDSrv_Request.
typedef struct webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence
{
  webots_interfaces__srv__WebotsThymio2LEDSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'log_message'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/WebotsThymio2LEDSrv in the package webots_interfaces.
typedef struct webots_interfaces__srv__WebotsThymio2LEDSrv_Response
{
  rosidl_runtime_c__String log_message;
} webots_interfaces__srv__WebotsThymio2LEDSrv_Response;

// Struct for a sequence of webots_interfaces__srv__WebotsThymio2LEDSrv_Response.
typedef struct webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence
{
  webots_interfaces__srv__WebotsThymio2LEDSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__STRUCT_H_
