// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from webots_interfaces:srv/WebotsThymio2LEDSrv.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__FUNCTIONS_H_
#define WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "webots_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "webots_interfaces/srv/detail/webots_thymio2_led_srv__struct.h"

/// Initialize srv/WebotsThymio2LEDSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Request
 * )) before or use
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
bool
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__init(webots_interfaces__srv__WebotsThymio2LEDSrv_Request * msg);

/// Finalize srv/WebotsThymio2LEDSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
void
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__fini(webots_interfaces__srv__WebotsThymio2LEDSrv_Request * msg);

/// Create srv/WebotsThymio2LEDSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
webots_interfaces__srv__WebotsThymio2LEDSrv_Request *
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__create();

/// Destroy srv/WebotsThymio2LEDSrv message.
/**
 * It calls
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
void
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__destroy(webots_interfaces__srv__WebotsThymio2LEDSrv_Request * msg);


/// Initialize array of srv/WebotsThymio2LEDSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
bool
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence__init(webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence * array, size_t size);

/// Finalize array of srv/WebotsThymio2LEDSrv messages.
/**
 * It calls
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
void
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence__fini(webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence * array);

/// Create array of srv/WebotsThymio2LEDSrv messages.
/**
 * It allocates the memory for the array and calls
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence *
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence__create(size_t size);

/// Destroy array of srv/WebotsThymio2LEDSrv messages.
/**
 * It calls
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
void
webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence__destroy(webots_interfaces__srv__WebotsThymio2LEDSrv_Request__Sequence * array);

/// Initialize srv/WebotsThymio2LEDSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Response
 * )) before or use
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
bool
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__init(webots_interfaces__srv__WebotsThymio2LEDSrv_Response * msg);

/// Finalize srv/WebotsThymio2LEDSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
void
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__fini(webots_interfaces__srv__WebotsThymio2LEDSrv_Response * msg);

/// Create srv/WebotsThymio2LEDSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
webots_interfaces__srv__WebotsThymio2LEDSrv_Response *
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__create();

/// Destroy srv/WebotsThymio2LEDSrv message.
/**
 * It calls
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
void
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__destroy(webots_interfaces__srv__WebotsThymio2LEDSrv_Response * msg);


/// Initialize array of srv/WebotsThymio2LEDSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
bool
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence__init(webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence * array, size_t size);

/// Finalize array of srv/WebotsThymio2LEDSrv messages.
/**
 * It calls
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
void
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence__fini(webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence * array);

/// Create array of srv/WebotsThymio2LEDSrv messages.
/**
 * It allocates the memory for the array and calls
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence *
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence__create(size_t size);

/// Destroy array of srv/WebotsThymio2LEDSrv messages.
/**
 * It calls
 * webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_interfaces
void
webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence__destroy(webots_interfaces__srv__WebotsThymio2LEDSrv_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__FUNCTIONS_H_
