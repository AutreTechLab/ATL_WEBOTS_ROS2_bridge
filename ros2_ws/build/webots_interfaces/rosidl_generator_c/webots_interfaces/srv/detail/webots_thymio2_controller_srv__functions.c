// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from webots_interfaces:srv/WebotsThymio2ControllerSrv.idl
// generated code does not contain a copyright notice
#include "webots_interfaces/srv/detail/webots_thymio2_controller_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `command`
// Member `usb_port`
#include "rosidl_runtime_c/string_functions.h"

bool
webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__init(webots_interfaces__srv__WebotsThymio2ControllerSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__fini(msg);
    return false;
  }
  // usb_port
  if (!rosidl_runtime_c__String__init(&msg->usb_port)) {
    webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__fini(msg);
    return false;
  }
  return true;
}

void
webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__fini(webots_interfaces__srv__WebotsThymio2ControllerSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // usb_port
  rosidl_runtime_c__String__fini(&msg->usb_port);
}

webots_interfaces__srv__WebotsThymio2ControllerSrv_Request *
webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__create()
{
  webots_interfaces__srv__WebotsThymio2ControllerSrv_Request * msg = (webots_interfaces__srv__WebotsThymio2ControllerSrv_Request *)malloc(sizeof(webots_interfaces__srv__WebotsThymio2ControllerSrv_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_interfaces__srv__WebotsThymio2ControllerSrv_Request));
  bool success = webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__destroy(webots_interfaces__srv__WebotsThymio2ControllerSrv_Request * msg)
{
  if (msg) {
    webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__fini(msg);
  }
  free(msg);
}


bool
webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__Sequence__init(webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  webots_interfaces__srv__WebotsThymio2ControllerSrv_Request * data = NULL;
  if (size) {
    data = (webots_interfaces__srv__WebotsThymio2ControllerSrv_Request *)calloc(size, sizeof(webots_interfaces__srv__WebotsThymio2ControllerSrv_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__fini(&data[i - 1]);
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
webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__Sequence__fini(webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__fini(&array->data[i]);
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

webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__Sequence *
webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__Sequence__create(size_t size)
{
  webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__Sequence * array = (webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__Sequence *)malloc(sizeof(webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__Sequence__destroy(webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__Sequence * array)
{
  if (array) {
    webots_interfaces__srv__WebotsThymio2ControllerSrv_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `log_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__init(webots_interfaces__srv__WebotsThymio2ControllerSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // log_message
  if (!rosidl_runtime_c__String__init(&msg->log_message)) {
    webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__fini(webots_interfaces__srv__WebotsThymio2ControllerSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // log_message
  rosidl_runtime_c__String__fini(&msg->log_message);
}

webots_interfaces__srv__WebotsThymio2ControllerSrv_Response *
webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__create()
{
  webots_interfaces__srv__WebotsThymio2ControllerSrv_Response * msg = (webots_interfaces__srv__WebotsThymio2ControllerSrv_Response *)malloc(sizeof(webots_interfaces__srv__WebotsThymio2ControllerSrv_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_interfaces__srv__WebotsThymio2ControllerSrv_Response));
  bool success = webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__destroy(webots_interfaces__srv__WebotsThymio2ControllerSrv_Response * msg)
{
  if (msg) {
    webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__fini(msg);
  }
  free(msg);
}


bool
webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__Sequence__init(webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  webots_interfaces__srv__WebotsThymio2ControllerSrv_Response * data = NULL;
  if (size) {
    data = (webots_interfaces__srv__WebotsThymio2ControllerSrv_Response *)calloc(size, sizeof(webots_interfaces__srv__WebotsThymio2ControllerSrv_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__fini(&data[i - 1]);
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
webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__Sequence__fini(webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__fini(&array->data[i]);
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

webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__Sequence *
webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__Sequence__create(size_t size)
{
  webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__Sequence * array = (webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__Sequence *)malloc(sizeof(webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__Sequence__destroy(webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__Sequence * array)
{
  if (array) {
    webots_interfaces__srv__WebotsThymio2ControllerSrv_Response__Sequence__fini(array);
  }
  free(array);
}
