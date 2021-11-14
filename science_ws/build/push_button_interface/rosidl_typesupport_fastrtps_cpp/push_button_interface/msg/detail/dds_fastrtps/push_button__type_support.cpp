// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from push_button_interface:msg/PushButton.idl
// generated code does not contain a copyright notice
#include "push_button_interface/msg/detail/push_button__rosidl_typesupport_fastrtps_cpp.hpp"
#include "push_button_interface/msg/detail/push_button__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace push_button_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_push_button_interface
cdr_serialize(
  const push_button_interface::msg::PushButton & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: collect_sample
  cdr << (ros_message.collect_sample ? true : false);
  // Member: platform_height
  cdr << ros_message.platform_height;
  // Member: microscope
  cdr << (ros_message.microscope ? true : false);
  // Member: flashlight
  cdr << (ros_message.flashlight ? true : false);
  // Member: brush
  cdr << (ros_message.brush ? true : false);
  // Member: water_pump
  cdr << (ros_message.water_pump ? true : false);
  // Member: uv_camera
  cdr << (ros_message.uv_camera ? true : false);
  // Member: pump_pos
  cdr << ros_message.pump_pos;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_push_button_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  push_button_interface::msg::PushButton & ros_message)
{
  // Member: collect_sample
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.collect_sample = tmp ? true : false;
  }

  // Member: platform_height
  cdr >> ros_message.platform_height;

  // Member: microscope
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.microscope = tmp ? true : false;
  }

  // Member: flashlight
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flashlight = tmp ? true : false;
  }

  // Member: brush
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.brush = tmp ? true : false;
  }

  // Member: water_pump
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.water_pump = tmp ? true : false;
  }

  // Member: uv_camera
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.uv_camera = tmp ? true : false;
  }

  // Member: pump_pos
  cdr >> ros_message.pump_pos;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_push_button_interface
get_serialized_size(
  const push_button_interface::msg::PushButton & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: collect_sample
  {
    size_t item_size = sizeof(ros_message.collect_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: platform_height
  {
    size_t item_size = sizeof(ros_message.platform_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: microscope
  {
    size_t item_size = sizeof(ros_message.microscope);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flashlight
  {
    size_t item_size = sizeof(ros_message.flashlight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brush
  {
    size_t item_size = sizeof(ros_message.brush);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: water_pump
  {
    size_t item_size = sizeof(ros_message.water_pump);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uv_camera
  {
    size_t item_size = sizeof(ros_message.uv_camera);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pump_pos
  {
    size_t item_size = sizeof(ros_message.pump_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_push_button_interface
max_serialized_size_PushButton(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: collect_sample
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: platform_height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: microscope
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flashlight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brush
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: water_pump
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: uv_camera
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pump_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PushButton__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const push_button_interface::msg::PushButton *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PushButton__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<push_button_interface::msg::PushButton *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PushButton__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const push_button_interface::msg::PushButton *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PushButton__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PushButton(full_bounded, 0);
}

static message_type_support_callbacks_t _PushButton__callbacks = {
  "push_button_interface::msg",
  "PushButton",
  _PushButton__cdr_serialize,
  _PushButton__cdr_deserialize,
  _PushButton__get_serialized_size,
  _PushButton__max_serialized_size
};

static rosidl_message_type_support_t _PushButton__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PushButton__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace push_button_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_push_button_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<push_button_interface::msg::PushButton>()
{
  return &push_button_interface::msg::typesupport_fastrtps_cpp::_PushButton__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, push_button_interface, msg, PushButton)() {
  return &push_button_interface::msg::typesupport_fastrtps_cpp::_PushButton__handle;
}

#ifdef __cplusplus
}
#endif
