// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from push_button_interface:msg/PushButton.idl
// generated code does not contain a copyright notice


#ifndef PUSH_BUTTON_INTERFACE__MSG__PUSH_BUTTON__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define PUSH_BUTTON_INTERFACE__MSG__PUSH_BUTTON__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "push_button_interface/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "push_button_interface/msg/detail/push_button__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "push_button_interface/msg/dds_connext/PushButton_Support.h"
#include "push_button_interface/msg/dds_connext/PushButton_Plugin.h"
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace push_button_interface
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__PushButton();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_push_button_interface
convert_ros_message_to_dds(
  const push_button_interface::msg::PushButton & ros_message,
  push_button_interface::msg::dds_::PushButton_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_push_button_interface
convert_dds_message_to_ros(
  const push_button_interface::msg::dds_::PushButton_ & dds_message,
  push_button_interface::msg::PushButton & ros_message);

bool
to_cdr_stream__PushButton(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__PushButton(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace push_button_interface


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_push_button_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  push_button_interface, msg,
  PushButton)();

#ifdef __cplusplus
}
#endif


#endif  // PUSH_BUTTON_INTERFACE__MSG__PUSH_BUTTON__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
