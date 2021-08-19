// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from push_button_interface:msg/PushButton.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "push_button_interface/msg/push_button__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions


namespace push_button_interface
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__PushButton()
{
  return push_button_interface::msg::dds_::PushButton_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const push_button_interface::msg::PushButton & ros_message,
  push_button_interface::msg::dds_::PushButton_ & dds_message)
{
  // member.name collect_sample
  dds_message.collect_sample_ =
    ros_message.collect_sample;

  // member.name platform
  dds_message.platform_ =
    ros_message.platform;

  // member.name microscope
  dds_message.microscope_ =
    ros_message.microscope;

  // member.name flashlight
  dds_message.flashlight_ =
    ros_message.flashlight;

  // member.name uv_cam
  dds_message.uv_cam_ =
    ros_message.uv_cam;

  return true;
}

bool
convert_dds_message_to_ros(
  const push_button_interface::msg::dds_::PushButton_ & dds_message,
  push_button_interface::msg::PushButton & ros_message)
{
  // member.name collect_sample
  ros_message.collect_sample =
    dds_message.collect_sample_ == DDS_BOOLEAN_TRUE;

  // member.name platform
  ros_message.platform =
    dds_message.platform_ == DDS_BOOLEAN_TRUE;

  // member.name microscope
  ros_message.microscope =
    dds_message.microscope_ == DDS_BOOLEAN_TRUE;

  // member.name flashlight
  ros_message.flashlight =
    dds_message.flashlight_ == DDS_BOOLEAN_TRUE;

  // member.name uv_cam
  ros_message.uv_cam =
    dds_message.uv_cam_ == DDS_BOOLEAN_TRUE;

  return true;
}

bool
to_cdr_stream__PushButton(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const push_button_interface::msg::PushButton & ros_message =
    *(const push_button_interface::msg::PushButton *)untyped_ros_message;

  // create a respective connext dds type
  push_button_interface::msg::dds_::PushButton_ * dds_message = push_button_interface::msg::dds_::PushButton_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (push_button_interface::msg::dds_::PushButton_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call push_button_interface::msg::dds_::PushButton_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  if (expected_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "expected_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < expected_length) {
    uint8_t * new_buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(expected_length, cdr_stream->allocator.state));
    if (NULL == new_buffer) {
      fprintf(stderr, "failed to allocate memory for cdr data\n");
      return false;
    }
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = new_buffer;
    cdr_stream->buffer_capacity = expected_length;
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(expected_length);
  if (push_button_interface::msg::dds_::PushButton_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (push_button_interface::msg::dds_::PushButton_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__PushButton(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  push_button_interface::msg::dds_::PushButton_ * dds_message =
    push_button_interface::msg::dds_::PushButton_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (push_button_interface::msg::dds_::PushButton_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  push_button_interface::msg::PushButton & ros_message =
    *(push_button_interface::msg::PushButton *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (push_button_interface::msg::dds_::PushButton_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _PushButton__callbacks = {
  "push_button_interface::msg",
  "PushButton",
  &get_type_code__PushButton,
  nullptr,
  nullptr,
  &to_cdr_stream__PushButton,
  &to_message__PushButton
};

static rosidl_message_type_support_t _PushButton__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_PushButton__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace push_button_interface


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_push_button_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<push_button_interface::msg::PushButton>()
{
  return &push_button_interface::msg::typesupport_connext_cpp::_PushButton__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  push_button_interface, msg,
  PushButton)()
{
  return &push_button_interface::msg::typesupport_connext_cpp::_PushButton__handle;
}

#ifdef __cplusplus
}
#endif
