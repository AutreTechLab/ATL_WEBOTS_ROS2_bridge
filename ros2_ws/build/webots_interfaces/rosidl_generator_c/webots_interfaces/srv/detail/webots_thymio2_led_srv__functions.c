// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from webots_interfaces:srv/WebotsThymio2LEDSrv.idl
// generated code does not contain a copyright notice
#include "webots_interfaces/srv/detail/webots_thymio2_led_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `leds_top`
// Member `leds_bottom_left`
// Member `leds_bottom_right`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__init(webots_interfaces__srv__WebotsThymio2LEDSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // leds_top
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->leds_top, 0)) {
    webots_interfaces__srv__WebotsThymio2LEDSrv_Request__fini(msg);
    return false;
  }
  // leds_bottom_left
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->leds_bottom_left, 0)) {
    webots_interfaces__srv__WebotsThymio2LEDSrv_Request__fini(msg);
    return false;
  }
  // leds_bottom_right
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->leds_bottom_right, 0)) {
    webots_interfaces__srv__WebotsThymio2LEDSrv_Request__fini(msg);
    return false;
  }
  return true;
}

void
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__fini(webots_interfaces__srv__WebotsThymio2LEDSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // leds_top
  rosidl_runtime_c__int64__Sequence__fini(&msg->leds_top);
  // leds_bottom_left
  rosidl_runtime_c__int64__Sequence__fini(&msg->leds_bottom_left);
  // leds_bottom_right
  rosidl_runtime_c__int64__Sequence__fini(&msg->leds_bottom_right);
}

webots_interfaces__srv__WebotsThymio2LEDSrv_Request *
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__create()
{
  webots_interfaces__srv__WebotsThymio2LEDSrv_Request * msg = (webots_interfaces__srv__WebotsThymio2LEDSrv_Request *)malloc(sizeof(webots_interfaces__srv__WebotsThymio2LEDSrv_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_interfaces__srv__WebotsThymio2LEDSrv_Request));
  bool success = webots_interfaces__srv__WebotsThymio2LEDSrv_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__destroy(webots_interfaces__srv__WebotsThymio2LEDSrv_Request * msg)
{
  if (msg) {
    webots_interfaces__srv__WebotsThymio2LEDSrv_Request__fini(msg);
  }
  free(msg);
}


bool
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence__init(webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  webots_interfaces__srv__WebotsThymio2LEDSrv_Request * data = NULL;
  if (size) {
    data = (webots_interfaces__srv__WebotsThymio2LEDSrv_Request *)calloc(size, sizeof(webots_interfaces__srv__WebotsThymio2LEDSrv_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_interfaces__srv__WebotsThymio2LEDSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_interfaces__srv__WebotsThymio2LEDSrv_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence__fini(webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      webots_interfaces__srv__WebotsThymio2LEDSrv_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence *
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence__create(size_t size)
{
  webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence * array = (webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence *)malloc(sizeof(webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence__destroy(webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence * array)
{
  if (array) {
    webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `log_message`
#include "rosidl_runtime_c/string_functions.h"

bool
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__init(webots_interfaces__srv__WebotsThymio2LEDSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // log_message
  if (!rosidl_runtime_c__String__init(&msg->log_message)) {
    webots_interfaces__srv__WebotsThymio2LEDSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__fini(webots_interfaces__srv__WebotsThymio2LEDSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // log_message
  rosidl_runtime_c__String__fini(&msg->log_message);
}

webots_interfaces__srv__WebotsThymio2LEDSrv_Response *
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__create()
{
  webots_interfaces__srv__WebotsThymio2LEDSrv_Response * msg = (webots_interfaces__srv__WebotsThymio2LEDSrv_Response *)malloc(sizeof(webots_interfaces__srv__WebotsThymio2LEDSrv_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_interfaces__srv__WebotsThymio2LEDSrv_Response));
  bool success = webots_interfaces__srv__WebotsThymio2LEDSrv_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__destroy(webots_interfaces__srv__WebotsThymio2LEDSrv_Response * msg)
{
  if (msg) {
    webots_interfaces__srv__WebotsThymio2LEDSrv_Response__fini(msg);
  }
  free(msg);
}


bool
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence__init(webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  webots_interfaces__srv__WebotsThymio2LEDSrv_Response * data = NULL;
  if (size) {
    data = (webots_interfaces__srv__WebotsThymio2LEDSrv_Response *)calloc(size, sizeof(webots_interfaces__srv__WebotsThymio2LEDSrv_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_interfaces__srv__WebotsThymio2LEDSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_interfaces__srv__WebotsThymio2LEDSrv_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence__fini(webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      webots_interfaces__srv__WebotsThymio2LEDSrv_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence *
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence__create(size_t size)
{
  webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence * array = (webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence *)malloc(sizeof(webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence__destroy(webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence * array)
{
  if (array) {
    webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence__fini(array);
  }
  free(array);
}
