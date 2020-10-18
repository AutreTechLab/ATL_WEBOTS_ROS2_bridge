// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from webots_interfaces:msg/WebotsThymio2Controller.idl
// generated code does not contain a copyright notice
#include "webots_interfaces/msg/detail/webots_thymio2_controller__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `debug_message`
// Member `button_backward`
// Member `button_center`
// Member `button_forward`
// Member `button_left`
// Member `button_right`
// Member `event_args`
// Member `event_source`
// Member `leds_bottom_left`
// Member `leds_bottom_right`
// Member `leds_top`
// Member `mic_intensity`
// Member `mic_threshold`
// Member `motor_left_pwm`
// Member `motor_left_speed`
// Member `motor_left_target`
// Member `motor_right_pwm`
// Member `motor_right_speed`
// Member `motor_right_target`
// Member `prox_comm_rx`
// Member `prox_comm_tx`
// Member `rc5_address`
// Member `rc5_command`
#include "rosidl_runtime_c/string_functions.h"
// Member `acc`
// Member `leds_circle`
// Member `prox_ground_ambiant`
// Member `prox_ground_delta`
// Member `prox_ground_reflected`
// Member `prox_horizontal`
// Member `timer_period`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
webots_interfaces__msg__WebotsThymio2Controller__init(webots_interfaces__msg__WebotsThymio2Controller * msg)
{
  if (!msg) {
    return false;
  }
  // debug_message
  if (!rosidl_runtime_c__String__init(&msg->debug_message)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // acc
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->acc, 0)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // button_backward
  if (!rosidl_runtime_c__String__init(&msg->button_backward)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // button_center
  if (!rosidl_runtime_c__String__init(&msg->button_center)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // button_forward
  if (!rosidl_runtime_c__String__init(&msg->button_forward)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // button_left
  if (!rosidl_runtime_c__String__init(&msg->button_left)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // button_right
  if (!rosidl_runtime_c__String__init(&msg->button_right)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // event_args
  if (!rosidl_runtime_c__String__Sequence__init(&msg->event_args, 0)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // event_source
  if (!rosidl_runtime_c__String__init(&msg->event_source)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // leds_bottom_left
  if (!rosidl_runtime_c__String__Sequence__init(&msg->leds_bottom_left, 0)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // leds_bottom_right
  if (!rosidl_runtime_c__String__Sequence__init(&msg->leds_bottom_right, 0)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // leds_circle
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->leds_circle, 0)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // leds_top
  if (!rosidl_runtime_c__String__Sequence__init(&msg->leds_top, 0)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // mic_intensity
  if (!rosidl_runtime_c__String__init(&msg->mic_intensity)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // mic_threshold
  if (!rosidl_runtime_c__String__init(&msg->mic_threshold)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // motor_left_pwm
  if (!rosidl_runtime_c__String__init(&msg->motor_left_pwm)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // motor_left_speed
  if (!rosidl_runtime_c__String__init(&msg->motor_left_speed)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // motor_left_target
  if (!rosidl_runtime_c__String__init(&msg->motor_left_target)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // motor_right_pwm
  if (!rosidl_runtime_c__String__init(&msg->motor_right_pwm)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // motor_right_speed
  if (!rosidl_runtime_c__String__init(&msg->motor_right_speed)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // motor_right_target
  if (!rosidl_runtime_c__String__init(&msg->motor_right_target)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // prox_comm_rx
  if (!rosidl_runtime_c__String__init(&msg->prox_comm_rx)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // prox_comm_tx
  if (!rosidl_runtime_c__String__init(&msg->prox_comm_tx)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // prox_ground_ambiant
  if (!rosidl_runtime_c__double__Sequence__init(&msg->prox_ground_ambiant, 0)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // prox_ground_delta
  if (!rosidl_runtime_c__double__Sequence__init(&msg->prox_ground_delta, 0)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // prox_ground_reflected
  if (!rosidl_runtime_c__double__Sequence__init(&msg->prox_ground_reflected, 0)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // prox_horizontal
  if (!rosidl_runtime_c__double__Sequence__init(&msg->prox_horizontal, 0)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // rc5_address
  if (!rosidl_runtime_c__String__init(&msg->rc5_address)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // rc5_command
  if (!rosidl_runtime_c__String__init(&msg->rc5_command)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  // sd_present
  // temperature
  // timer_period
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->timer_period, 0)) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
    return false;
  }
  return true;
}

void
webots_interfaces__msg__WebotsThymio2Controller__fini(webots_interfaces__msg__WebotsThymio2Controller * msg)
{
  if (!msg) {
    return;
  }
  // debug_message
  rosidl_runtime_c__String__fini(&msg->debug_message);
  // acc
  rosidl_runtime_c__int64__Sequence__fini(&msg->acc);
  // button_backward
  rosidl_runtime_c__String__fini(&msg->button_backward);
  // button_center
  rosidl_runtime_c__String__fini(&msg->button_center);
  // button_forward
  rosidl_runtime_c__String__fini(&msg->button_forward);
  // button_left
  rosidl_runtime_c__String__fini(&msg->button_left);
  // button_right
  rosidl_runtime_c__String__fini(&msg->button_right);
  // event_args
  rosidl_runtime_c__String__Sequence__fini(&msg->event_args);
  // event_source
  rosidl_runtime_c__String__fini(&msg->event_source);
  // leds_bottom_left
  rosidl_runtime_c__String__Sequence__fini(&msg->leds_bottom_left);
  // leds_bottom_right
  rosidl_runtime_c__String__Sequence__fini(&msg->leds_bottom_right);
  // leds_circle
  rosidl_runtime_c__int64__Sequence__fini(&msg->leds_circle);
  // leds_top
  rosidl_runtime_c__String__Sequence__fini(&msg->leds_top);
  // mic_intensity
  rosidl_runtime_c__String__fini(&msg->mic_intensity);
  // mic_threshold
  rosidl_runtime_c__String__fini(&msg->mic_threshold);
  // motor_left_pwm
  rosidl_runtime_c__String__fini(&msg->motor_left_pwm);
  // motor_left_speed
  rosidl_runtime_c__String__fini(&msg->motor_left_speed);
  // motor_left_target
  rosidl_runtime_c__String__fini(&msg->motor_left_target);
  // motor_right_pwm
  rosidl_runtime_c__String__fini(&msg->motor_right_pwm);
  // motor_right_speed
  rosidl_runtime_c__String__fini(&msg->motor_right_speed);
  // motor_right_target
  rosidl_runtime_c__String__fini(&msg->motor_right_target);
  // prox_comm_rx
  rosidl_runtime_c__String__fini(&msg->prox_comm_rx);
  // prox_comm_tx
  rosidl_runtime_c__String__fini(&msg->prox_comm_tx);
  // prox_ground_ambiant
  rosidl_runtime_c__double__Sequence__fini(&msg->prox_ground_ambiant);
  // prox_ground_delta
  rosidl_runtime_c__double__Sequence__fini(&msg->prox_ground_delta);
  // prox_ground_reflected
  rosidl_runtime_c__double__Sequence__fini(&msg->prox_ground_reflected);
  // prox_horizontal
  rosidl_runtime_c__double__Sequence__fini(&msg->prox_horizontal);
  // rc5_address
  rosidl_runtime_c__String__fini(&msg->rc5_address);
  // rc5_command
  rosidl_runtime_c__String__fini(&msg->rc5_command);
  // sd_present
  // temperature
  // timer_period
  rosidl_runtime_c__int64__Sequence__fini(&msg->timer_period);
}

webots_interfaces__msg__WebotsThymio2Controller *
webots_interfaces__msg__WebotsThymio2Controller__create()
{
  webots_interfaces__msg__WebotsThymio2Controller * msg = (webots_interfaces__msg__WebotsThymio2Controller *)malloc(sizeof(webots_interfaces__msg__WebotsThymio2Controller));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_interfaces__msg__WebotsThymio2Controller));
  bool success = webots_interfaces__msg__WebotsThymio2Controller__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
webots_interfaces__msg__WebotsThymio2Controller__destroy(webots_interfaces__msg__WebotsThymio2Controller * msg)
{
  if (msg) {
    webots_interfaces__msg__WebotsThymio2Controller__fini(msg);
  }
  free(msg);
}


bool
webots_interfaces__msg__WebotsThymio2Controller__Sequence__init(webots_interfaces__msg__WebotsThymio2Controller__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  webots_interfaces__msg__WebotsThymio2Controller * data = NULL;
  if (size) {
    data = (webots_interfaces__msg__WebotsThymio2Controller *)calloc(size, sizeof(webots_interfaces__msg__WebotsThymio2Controller));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_interfaces__msg__WebotsThymio2Controller__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_interfaces__msg__WebotsThymio2Controller__fini(&data[i - 1]);
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
webots_interfaces__msg__WebotsThymio2Controller__Sequence__fini(webots_interfaces__msg__WebotsThymio2Controller__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      webots_interfaces__msg__WebotsThymio2Controller__fini(&array->data[i]);
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

webots_interfaces__msg__WebotsThymio2Controller__Sequence *
webots_interfaces__msg__WebotsThymio2Controller__Sequence__create(size_t size)
{
  webots_interfaces__msg__WebotsThymio2Controller__Sequence * array = (webots_interfaces__msg__WebotsThymio2Controller__Sequence *)malloc(sizeof(webots_interfaces__msg__WebotsThymio2Controller__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = webots_interfaces__msg__WebotsThymio2Controller__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
webots_interfaces__msg__WebotsThymio2Controller__Sequence__destroy(webots_interfaces__msg__WebotsThymio2Controller__Sequence * array)
{
  if (array) {
    webots_interfaces__msg__WebotsThymio2Controller__Sequence__fini(array);
  }
  free(array);
}
