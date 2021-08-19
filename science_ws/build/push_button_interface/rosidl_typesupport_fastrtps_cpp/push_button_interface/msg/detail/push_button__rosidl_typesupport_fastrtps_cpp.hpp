// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from push_button_interface:msg/PushButton.idl
// generated code does not contain a copyright notice

#ifndef PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "push_button_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "push_button_interface/msg/detail/push_button__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_push_button_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  push_button_interface::msg::PushButton & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_push_button_interface
get_serialized_size(
  const push_button_interface::msg::PushButton & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_push_button_interface
max_serialized_size_PushButton(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace push_button_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_push_button_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, push_button_interface, msg, PushButton)();

#ifdef __cplusplus
}
#endif

#endif  // PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
