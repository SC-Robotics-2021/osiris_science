// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from push_button_interface:msg/PushButton.idl
// generated code does not contain a copyright notice

#ifndef PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__FUNCTIONS_H_
#define PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "push_button_interface/msg/rosidl_generator_c__visibility_control.h"

#include "push_button_interface/msg/detail/push_button__struct.h"

/// Initialize msg/PushButton message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * push_button_interface__msg__PushButton
 * )) before or use
 * push_button_interface__msg__PushButton__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_push_button_interface
bool
push_button_interface__msg__PushButton__init(push_button_interface__msg__PushButton * msg);

/// Finalize msg/PushButton message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_push_button_interface
void
push_button_interface__msg__PushButton__fini(push_button_interface__msg__PushButton * msg);

/// Create msg/PushButton message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * push_button_interface__msg__PushButton__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_push_button_interface
push_button_interface__msg__PushButton *
push_button_interface__msg__PushButton__create();

/// Destroy msg/PushButton message.
/**
 * It calls
 * push_button_interface__msg__PushButton__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_push_button_interface
void
push_button_interface__msg__PushButton__destroy(push_button_interface__msg__PushButton * msg);


/// Initialize array of msg/PushButton messages.
/**
 * It allocates the memory for the number of elements and calls
 * push_button_interface__msg__PushButton__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_push_button_interface
bool
push_button_interface__msg__PushButton__Sequence__init(push_button_interface__msg__PushButton__Sequence * array, size_t size);

/// Finalize array of msg/PushButton messages.
/**
 * It calls
 * push_button_interface__msg__PushButton__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_push_button_interface
void
push_button_interface__msg__PushButton__Sequence__fini(push_button_interface__msg__PushButton__Sequence * array);

/// Create array of msg/PushButton messages.
/**
 * It allocates the memory for the array and calls
 * push_button_interface__msg__PushButton__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_push_button_interface
push_button_interface__msg__PushButton__Sequence *
push_button_interface__msg__PushButton__Sequence__create(size_t size);

/// Destroy array of msg/PushButton messages.
/**
 * It calls
 * push_button_interface__msg__PushButton__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_push_button_interface
void
push_button_interface__msg__PushButton__Sequence__destroy(push_button_interface__msg__PushButton__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__FUNCTIONS_H_
