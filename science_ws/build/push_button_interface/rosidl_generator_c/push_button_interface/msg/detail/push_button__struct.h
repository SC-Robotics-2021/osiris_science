// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from push_button_interface:msg/PushButton.idl
// generated code does not contain a copyright notice

#ifndef PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__STRUCT_H_
#define PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PushButton in the package push_button_interface.
typedef struct push_button_interface__msg__PushButton
{
  bool collect_sample;
  int32_t platform_height;
  bool microscope;
  bool flashlight;
  bool brush;
  bool water_pump;
  bool uv_camera;
  int16_t pump_pos;
} push_button_interface__msg__PushButton;

// Struct for a sequence of push_button_interface__msg__PushButton.
typedef struct push_button_interface__msg__PushButton__Sequence
{
  push_button_interface__msg__PushButton * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} push_button_interface__msg__PushButton__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__STRUCT_H_
