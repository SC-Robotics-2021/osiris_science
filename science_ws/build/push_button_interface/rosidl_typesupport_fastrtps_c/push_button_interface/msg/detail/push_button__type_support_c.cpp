// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from push_button_interface:msg/PushButton.idl
// generated code does not contain a copyright notice
#include "push_button_interface/msg/detail/push_button__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "push_button_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "push_button_interface/msg/detail/push_button__struct.h"
#include "push_button_interface/msg/detail/push_button__functions.h"
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


using _PushButton__ros_msg_type = push_button_interface__msg__PushButton;

static bool _PushButton__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PushButton__ros_msg_type * ros_message = static_cast<const _PushButton__ros_msg_type *>(untyped_ros_message);
  // Field name: collect_sample
  {
    cdr << (ros_message->collect_sample ? true : false);
  }

  // Field name: platform
  {
    cdr << (ros_message->platform ? true : false);
  }

  // Field name: microscope
  {
    cdr << (ros_message->microscope ? true : false);
  }

  // Field name: flashlight
  {
    cdr << (ros_message->flashlight ? true : false);
  }

  // Field name: uv_cam
  {
    cdr << (ros_message->uv_cam ? true : false);
  }

  return true;
}

static bool _PushButton__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PushButton__ros_msg_type * ros_message = static_cast<_PushButton__ros_msg_type *>(untyped_ros_message);
  // Field name: collect_sample
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->collect_sample = tmp ? true : false;
  }

  // Field name: platform
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->platform = tmp ? true : false;
  }

  // Field name: microscope
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->microscope = tmp ? true : false;
  }

  // Field name: flashlight
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flashlight = tmp ? true : false;
  }

  // Field name: uv_cam
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->uv_cam = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_push_button_interface
size_t get_serialized_size_push_button_interface__msg__PushButton(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PushButton__ros_msg_type * ros_message = static_cast<const _PushButton__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name collect_sample
  {
    size_t item_size = sizeof(ros_message->collect_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name platform
  {
    size_t item_size = sizeof(ros_message->platform);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name microscope
  {
    size_t item_size = sizeof(ros_message->microscope);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flashlight
  {
    size_t item_size = sizeof(ros_message->flashlight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uv_cam
  {
    size_t item_size = sizeof(ros_message->uv_cam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PushButton__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_push_button_interface__msg__PushButton(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_push_button_interface
size_t max_serialized_size_push_button_interface__msg__PushButton(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: collect_sample
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: platform
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: microscope
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flashlight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uv_cam
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PushButton__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_push_button_interface__msg__PushButton(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PushButton = {
  "push_button_interface::msg",
  "PushButton",
  _PushButton__cdr_serialize,
  _PushButton__cdr_deserialize,
  _PushButton__get_serialized_size,
  _PushButton__max_serialized_size
};

static rosidl_message_type_support_t _PushButton__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PushButton,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, push_button_interface, msg, PushButton)() {
  return &_PushButton__type_support;
}

#if defined(__cplusplus)
}
#endif
