// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from push_button_interface:action/PushButton.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "push_button_interface/action/push_button__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "push_button_interface/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "push_button_interface/action/detail/push_button__struct.h"
#include "push_button_interface/action/detail/push_button__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "push_button_interface/action/dds_connext/PushButton_Support.h"
#include "push_button_interface/action/dds_connext/PushButton_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions

static DDS_TypeCode *
_PushButton_Goal__get_type_code()
{
  return push_button_interface::action::dds_::PushButton_Goal_TypeSupport::get_typecode();
}

static bool
_PushButton_Goal__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface__action__PushButton_Goal * ros_message =
    static_cast<const push_button_interface__action__PushButton_Goal *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_Goal_ * dds_message =
    static_cast<push_button_interface::action::dds_::PushButton_Goal_ *>(untyped_dds_message);
  // Member name: msg
  {
    dds_message->msg_ = ros_message->msg;
  }
  return true;
}

static bool
_PushButton_Goal__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface::action::dds_::PushButton_Goal_ * dds_message =
    static_cast<const push_button_interface::action::dds_::PushButton_Goal_ *>(untyped_dds_message);
  push_button_interface__action__PushButton_Goal * ros_message =
    static_cast<push_button_interface__action__PushButton_Goal *>(untyped_ros_message);
  // Member name: msg
  {
    ros_message->msg = dds_message->msg_ == static_cast<DDS_Boolean>(true);
  }
  return true;
}


static bool
_PushButton_Goal__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const push_button_interface__action__PushButton_Goal * ros_message =
    static_cast<const push_button_interface__action__PushButton_Goal *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_Goal_ dds_message;
  if (!_PushButton_Goal__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (push_button_interface::action::dds_::PushButton_Goal_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call push_button_interface::action::dds_::PushButton_Goal_Plugin_serialize_to_cdr_buffer()\n");
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
  if (push_button_interface::action::dds_::PushButton_Goal_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_PushButton_Goal__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  push_button_interface::action::dds_::PushButton_Goal_ * dds_message =
    push_button_interface::action::dds_::PushButton_Goal_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (push_button_interface::action::dds_::PushButton_Goal_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _PushButton_Goal__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (push_button_interface::action::dds_::PushButton_Goal_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _PushButton_Goal__callbacks = {
  "push_button_interface::action",  // message_namespace
  "PushButton_Goal",  // message_name
  _PushButton_Goal__get_type_code,  // get_type_code
  _PushButton_Goal__convert_ros_to_dds,  // convert_ros_to_dds
  _PushButton_Goal__convert_dds_to_ros,  // convert_dds_to_ros
  _PushButton_Goal__to_cdr_stream,  // to_cdr_stream
  _PushButton_Goal__to_message  // to_message
};

static rosidl_message_type_support_t _PushButton_Goal__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_PushButton_Goal__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  push_button_interface, action,
  PushButton_Goal)()
{
  return &_PushButton_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif
#ifdef Connext_GLIBCXX_USE_CXX11_ABI_ZERO
#define _GLIBCXX_USE_CXX11_ABI 0
#endif

#ifndef _WIN32
# pragma GCC diagnostic push
# if __GNUC__ >= 9
#  pragma GCC diagnostic ignored "-Wclass-memaccess"
# endif
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include <ndds/connext_cpp/connext_cpp_requester_details.h>
#include <ndds/ndds_cpp.h>
#include <ndds/ndds_requestreply_cpp.h>

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "push_button_interface/action/push_button__rosidl_typesupport_connext_c.h"
#include "rosidl_typesupport_connext_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rmw/rmw.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
// already included above
// #include "push_button_interface/msg/rosidl_typesupport_connext_c__visibility_control.h"
// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Support.h"
#include "push_button_interface/action/push_button.h"
#include "push_button_interface/action/push_button__rosidl_typesupport_connext_cpp.hpp"

// already included above
// #include "push_button_interface/action/push_button__rosidl_typesupport_connext_c.h"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
// already included above
// #include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "push_button_interface/msg/rosidl_typesupport_connext_c__visibility_control.h"
// already included above
// #include "push_button_interface/action/detail/push_button__struct.h"
// already included above
// #include "push_button_interface/action/detail/push_button__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Support.h"
// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member 'goal'
// already included above
// #include "push_button_interface/action/detail/push_button__struct.h"
// Member 'goal'
// already included above
// #include "push_button_interface/action/detail/push_button__functions.h"

// forward declare type support functions
// Member 'goal_id'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_push_button_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  unique_identifier_msgs, msg,
  UUID)();
// Member 'goal'
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  push_button_interface, action,
  PushButton_Goal)();

static DDS_TypeCode *
_PushButton_SendGoal_Request__get_type_code()
{
  return push_button_interface::action::dds_::PushButton_SendGoal_Request_TypeSupport::get_typecode();
}

static bool
_PushButton_SendGoal_Request__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface__action__PushButton_SendGoal_Request * ros_message =
    static_cast<const push_button_interface__action__PushButton_SendGoal_Request *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_SendGoal_Request_ * dds_message =
    static_cast<push_button_interface::action::dds_::PushButton_SendGoal_Request_ *>(untyped_dds_message);
  // Member name: goal_id
  {
    const message_type_support_callbacks_t * unique_identifier_msgs__msg__UUID__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!unique_identifier_msgs__msg__UUID__callbacks->convert_ros_to_dds(
        &ros_message->goal_id, &dds_message->goal_id_))
    {
      return false;
    }
  }
  // Member name: goal
  {
    const message_type_support_callbacks_t * push_button_interface__action__PushButton_Goal__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, push_button_interface, action, PushButton_Goal
      )()->data);
    if (!push_button_interface__action__PushButton_Goal__callbacks->convert_ros_to_dds(
        &ros_message->goal, &dds_message->goal_))
    {
      return false;
    }
  }
  return true;
}

static bool
_PushButton_SendGoal_Request__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface::action::dds_::PushButton_SendGoal_Request_ * dds_message =
    static_cast<const push_button_interface::action::dds_::PushButton_SendGoal_Request_ *>(untyped_dds_message);
  push_button_interface__action__PushButton_SendGoal_Request * ros_message =
    static_cast<push_button_interface__action__PushButton_SendGoal_Request *>(untyped_ros_message);
  // Member name: goal_id
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      unique_identifier_msgs, msg,
      UUID)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->goal_id_, &ros_message->goal_id);
  }
  // Member name: goal
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      push_button_interface, action,
      PushButton_Goal)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->goal_, &ros_message->goal);
  }
  return true;
}


static bool
_PushButton_SendGoal_Request__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const push_button_interface__action__PushButton_SendGoal_Request * ros_message =
    static_cast<const push_button_interface__action__PushButton_SendGoal_Request *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_SendGoal_Request_ dds_message;
  if (!_PushButton_SendGoal_Request__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_serialize_to_cdr_buffer()\n");
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
  if (push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_PushButton_SendGoal_Request__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  push_button_interface::action::dds_::PushButton_SendGoal_Request_ * dds_message =
    push_button_interface::action::dds_::PushButton_SendGoal_Request_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _PushButton_SendGoal_Request__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (push_button_interface::action::dds_::PushButton_SendGoal_Request_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _PushButton_SendGoal_Request__callbacks = {
  "push_button_interface::action",  // message_namespace
  "PushButton_SendGoal_Request",  // message_name
  _PushButton_SendGoal_Request__get_type_code,  // get_type_code
  _PushButton_SendGoal_Request__convert_ros_to_dds,  // convert_ros_to_dds
  _PushButton_SendGoal_Request__convert_dds_to_ros,  // convert_dds_to_ros
  _PushButton_SendGoal_Request__to_cdr_stream,  // to_cdr_stream
  _PushButton_SendGoal_Request__to_message  // to_message
};

static rosidl_message_type_support_t _PushButton_SendGoal_Request__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_PushButton_SendGoal_Request__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  push_button_interface, action,
  PushButton_SendGoal_Request)()
{
  return &_PushButton_SendGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "push_button_interface/action/push_button__rosidl_typesupport_connext_c.h"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
// already included above
// #include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "push_button_interface/msg/rosidl_typesupport_connext_c__visibility_control.h"
// already included above
// #include "push_button_interface/action/detail/push_button__struct.h"
// already included above
// #include "push_button_interface/action/detail/push_button__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Support.h"
// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__functions.h"

// forward declare type support functions
// Member 'stamp'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_push_button_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  builtin_interfaces, msg,
  Time)();

static DDS_TypeCode *
_PushButton_SendGoal_Response__get_type_code()
{
  return push_button_interface::action::dds_::PushButton_SendGoal_Response_TypeSupport::get_typecode();
}

static bool
_PushButton_SendGoal_Response__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface__action__PushButton_SendGoal_Response * ros_message =
    static_cast<const push_button_interface__action__PushButton_SendGoal_Response *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_SendGoal_Response_ * dds_message =
    static_cast<push_button_interface::action::dds_::PushButton_SendGoal_Response_ *>(untyped_dds_message);
  // Member name: accepted
  {
    dds_message->accepted_ = ros_message->accepted;
  }
  // Member name: stamp
  {
    const message_type_support_callbacks_t * builtin_interfaces__msg__Time__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, builtin_interfaces, msg, Time
      )()->data);
    if (!builtin_interfaces__msg__Time__callbacks->convert_ros_to_dds(
        &ros_message->stamp, &dds_message->stamp_))
    {
      return false;
    }
  }
  return true;
}

static bool
_PushButton_SendGoal_Response__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface::action::dds_::PushButton_SendGoal_Response_ * dds_message =
    static_cast<const push_button_interface::action::dds_::PushButton_SendGoal_Response_ *>(untyped_dds_message);
  push_button_interface__action__PushButton_SendGoal_Response * ros_message =
    static_cast<push_button_interface__action__PushButton_SendGoal_Response *>(untyped_ros_message);
  // Member name: accepted
  {
    ros_message->accepted = dds_message->accepted_ == static_cast<DDS_Boolean>(true);
  }
  // Member name: stamp
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      builtin_interfaces, msg,
      Time)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->stamp_, &ros_message->stamp);
  }
  return true;
}


static bool
_PushButton_SendGoal_Response__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const push_button_interface__action__PushButton_SendGoal_Response * ros_message =
    static_cast<const push_button_interface__action__PushButton_SendGoal_Response *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_SendGoal_Response_ dds_message;
  if (!_PushButton_SendGoal_Response__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_serialize_to_cdr_buffer()\n");
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
  if (push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_PushButton_SendGoal_Response__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  push_button_interface::action::dds_::PushButton_SendGoal_Response_ * dds_message =
    push_button_interface::action::dds_::PushButton_SendGoal_Response_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _PushButton_SendGoal_Response__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (push_button_interface::action::dds_::PushButton_SendGoal_Response_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _PushButton_SendGoal_Response__callbacks = {
  "push_button_interface::action",  // message_namespace
  "PushButton_SendGoal_Response",  // message_name
  _PushButton_SendGoal_Response__get_type_code,  // get_type_code
  _PushButton_SendGoal_Response__convert_ros_to_dds,  // convert_ros_to_dds
  _PushButton_SendGoal_Response__convert_dds_to_ros,  // convert_dds_to_ros
  _PushButton_SendGoal_Response__to_cdr_stream,  // to_cdr_stream
  _PushButton_SendGoal_Response__to_message  // to_message
};

static rosidl_message_type_support_t _PushButton_SendGoal_Response__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_PushButton_SendGoal_Response__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  push_button_interface, action,
  PushButton_SendGoal_Response)()
{
  return &_PushButton_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

class DDSDomainParticipant;
class DDSDataReader;
struct DDS_SampleIdentity_t;

#if defined(__cplusplus)
extern "C"
{
#endif

static void * create_requester__PushButton_SendGoal(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  return push_button_interface::action::typesupport_connext_cpp::create_requester__PushButton_SendGoal(
    untyped_participant,
    request_topic_str,
    response_topic_str,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    untyped_reader,
    untyped_writer,
    allocator);
}
static const char * destroy_requester__PushButton_SendGoal(
  void * untyped_requester,
  void (* deallocator)(void *))
{
  return push_button_interface::action::typesupport_connext_cpp::destroy_requester__PushButton_SendGoal(
    untyped_requester, deallocator);
}

static int64_t send_request__PushButton_SendGoal(
  void * untyped_requester,
  const void * untyped_ros_request)
{
  using RequesterType = connext::Requester<
    push_button_interface::action::dds_::PushButton_SendGoal_Request_,
    push_button_interface::action::dds_::PushButton_SendGoal_Response_
  >;
  connext::WriteSample<push_button_interface::action::dds_::PushButton_SendGoal_Request_> request;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    push_button_interface, action,
    PushButton_SendGoal_Request)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_ros_to_dds(
    untyped_ros_request, static_cast<void *>(&request.data()));
  if (!converted) {
    fprintf(stderr, "Unable to convert request!\n");
    return -1;
  }

  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);

  requester->send_request(request);
  int64_t sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 |
    request.identity().sequence_number.low;
  return sequence_number;
}

static void * create_replier__PushButton_SendGoal(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  return push_button_interface::action::typesupport_connext_cpp::create_replier__PushButton_SendGoal(
    untyped_participant,
    request_topic_str,
    response_topic_str,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    untyped_reader,
    untyped_writer,
    allocator);
}

static const char * destroy_replier__PushButton_SendGoal(
  void * untyped_replier,
  void (* deallocator)(void *))
{
  return push_button_interface::action::typesupport_connext_cpp::destroy_replier__PushButton_SendGoal(
    untyped_replier, deallocator);
}

static bool take_request__PushButton_SendGoal(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request)
{
  using ReplierType = connext::Replier<
    push_button_interface::action::dds_::PushButton_SendGoal_Request_,
    push_button_interface::action::dds_::PushButton_SendGoal_Response_
  >;
  if (!untyped_replier || !request_header || !untyped_ros_request) {
    return false;
  }

  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);

  connext::Sample<push_button_interface::action::dds_::PushButton_SendGoal_Request_> request;
  bool taken = replier->take_request(request);
  if (!taken) {
    return false;
  }
  if (!request.info().valid_data) {
    return false;
  }

  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    push_button_interface, action,
    PushButton_SendGoal_Request)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_dds_to_ros(
    static_cast<const void *>(&request.data()), untyped_ros_request);
  if (!converted) {
    return false;
  }

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(&(request_header->request_id.writer_guid[0]), request.identity().writer_guid.value, SAMPLE_IDENTITY_SIZE);

  request_header->request_id.sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 | request.identity().sequence_number.low;
  request_header->source_timestamp = 0;
  request_header->received_timestamp = 0;
  return true;
}

static bool take_response__PushButton_SendGoal(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response)
{
  using RequesterType = connext::Requester<
    push_button_interface::action::dds_::PushButton_SendGoal_Request_,
    push_button_interface::action::dds_::PushButton_SendGoal_Response_
  >;
  if (!untyped_requester || !request_header || !untyped_ros_response) {
    return false;
  }

  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);

  connext::Sample<push_button_interface::action::dds_::PushButton_SendGoal_Response_> response;
  bool received = requester->take_reply(response);
  if (!received) {
    return false;
  }
  if (!response.info().valid_data) {
    return false;
  }

  int64_t sequence_number =
    (((int64_t)response.related_identity().sequence_number.high) << 32) |
    response.related_identity().sequence_number.low;
  request_header->request_id.sequence_number = sequence_number;
  request_header->source_timestamp = 0;
  request_header->received_timestamp = 0;

  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    push_button_interface, action,
    PushButton_SendGoal_Response)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_dds_to_ros(
    static_cast<const void *>(&response.data()), untyped_ros_response);
  return converted;
}

bool send_response__PushButton_SendGoal(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  using ReplierType = connext::Replier<
    push_button_interface::action::dds_::PushButton_SendGoal_Request_,
    push_button_interface::action::dds_::PushButton_SendGoal_Response_
  >;
  if (!untyped_replier || !request_header || !untyped_ros_response) {
    return false;
  }

  connext::WriteSample<push_button_interface::action::dds_::PushButton_SendGoal_Response_> response;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    push_button_interface, action,
    PushButton_SendGoal_Response)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_ros_to_dds(
    untyped_ros_response, static_cast<void *>(&response.data()));
  if (!converted) {
    return false;
  }

  DDS_SampleIdentity_t request_identity;

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(request_identity.writer_guid.value, &request_header->writer_guid[0], SAMPLE_IDENTITY_SIZE);

  request_identity.sequence_number.high = (int32_t)((request_header->sequence_number & 0xFFFFFFFF00000000) >> 32);
  request_identity.sequence_number.low = (uint32_t)(request_header->sequence_number & 0xFFFFFFFF);

  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);

  replier->send_reply(response, request_identity);
  return true;
}

static void *
get_request_datawriter__PushButton_SendGoal(void * untyped_requester)
{
  return push_button_interface::action::typesupport_connext_cpp::get_request_datawriter__PushButton_SendGoal(
    untyped_requester);
}

static void *
get_reply_datareader__PushButton_SendGoal(void * untyped_requester)
{
  return push_button_interface::action::typesupport_connext_cpp::get_reply_datareader__PushButton_SendGoal(
    untyped_requester);
}

static void *
get_request_datareader__PushButton_SendGoal(void * untyped_replier)
{
  return push_button_interface::action::typesupport_connext_cpp::get_request_datareader__PushButton_SendGoal(
    untyped_replier);
}

static void *
get_reply_datawriter__PushButton_SendGoal(void * untyped_replier)
{
  return push_button_interface::action::typesupport_connext_cpp::get_reply_datawriter__PushButton_SendGoal(
    untyped_replier);
}

static service_type_support_callbacks_t _PushButton_SendGoal__callbacks = {
  "push_button_interface::action",  // service_namespace
  "PushButton_SendGoal",
  &create_requester__PushButton_SendGoal,
  &destroy_requester__PushButton_SendGoal,
  &create_replier__PushButton_SendGoal,
  &destroy_replier__PushButton_SendGoal,
  &send_request__PushButton_SendGoal,
  &take_request__PushButton_SendGoal,
  &send_response__PushButton_SendGoal,
  &take_response__PushButton_SendGoal,
  &get_request_datawriter__PushButton_SendGoal,
  &get_reply_datareader__PushButton_SendGoal,
  &get_request_datareader__PushButton_SendGoal,
  &get_reply_datawriter__PushButton_SendGoal
};

static rosidl_service_type_support_t _PushButton_SendGoal__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_PushButton_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  push_button_interface, action,
  PushButton_SendGoal)()
{
  return &_PushButton_SendGoal__type_support;
}

#if defined(__cplusplus)
}
#endif
// already included above
// #include "push_button_interface/action/push_button__rosidl_typesupport_connext_c.h"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
// already included above
// #include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "push_button_interface/msg/rosidl_typesupport_connext_c__visibility_control.h"
// already included above
// #include "push_button_interface/action/detail/push_button__struct.h"
// already included above
// #include "push_button_interface/action/detail/push_button__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Support.h"
// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions

static DDS_TypeCode *
_PushButton_Result__get_type_code()
{
  return push_button_interface::action::dds_::PushButton_Result_TypeSupport::get_typecode();
}

static bool
_PushButton_Result__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface__action__PushButton_Result * ros_message =
    static_cast<const push_button_interface__action__PushButton_Result *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_Result_ * dds_message =
    static_cast<push_button_interface::action::dds_::PushButton_Result_ *>(untyped_dds_message);
  // Member name: result
  {
    dds_message->result_ = ros_message->result;
  }
  return true;
}

static bool
_PushButton_Result__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface::action::dds_::PushButton_Result_ * dds_message =
    static_cast<const push_button_interface::action::dds_::PushButton_Result_ *>(untyped_dds_message);
  push_button_interface__action__PushButton_Result * ros_message =
    static_cast<push_button_interface__action__PushButton_Result *>(untyped_ros_message);
  // Member name: result
  {
    ros_message->result = dds_message->result_ == static_cast<DDS_Boolean>(true);
  }
  return true;
}


static bool
_PushButton_Result__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const push_button_interface__action__PushButton_Result * ros_message =
    static_cast<const push_button_interface__action__PushButton_Result *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_Result_ dds_message;
  if (!_PushButton_Result__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (push_button_interface::action::dds_::PushButton_Result_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call push_button_interface::action::dds_::PushButton_Result_Plugin_serialize_to_cdr_buffer()\n");
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
  if (push_button_interface::action::dds_::PushButton_Result_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_PushButton_Result__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  push_button_interface::action::dds_::PushButton_Result_ * dds_message =
    push_button_interface::action::dds_::PushButton_Result_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (push_button_interface::action::dds_::PushButton_Result_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _PushButton_Result__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (push_button_interface::action::dds_::PushButton_Result_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _PushButton_Result__callbacks = {
  "push_button_interface::action",  // message_namespace
  "PushButton_Result",  // message_name
  _PushButton_Result__get_type_code,  // get_type_code
  _PushButton_Result__convert_ros_to_dds,  // convert_ros_to_dds
  _PushButton_Result__convert_dds_to_ros,  // convert_dds_to_ros
  _PushButton_Result__to_cdr_stream,  // to_cdr_stream
  _PushButton_Result__to_message  // to_message
};

static rosidl_message_type_support_t _PushButton_Result__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_PushButton_Result__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  push_button_interface, action,
  PushButton_Result)()
{
  return &_PushButton_Result__type_support;
}

#if defined(__cplusplus)
}
#endif
#ifdef Connext_GLIBCXX_USE_CXX11_ABI_ZERO
#define _GLIBCXX_USE_CXX11_ABI 0
#endif

#ifndef _WIN32
# pragma GCC diagnostic push
# if __GNUC__ >= 9
#  pragma GCC diagnostic ignored "-Wclass-memaccess"
# endif
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include <ndds/connext_cpp/connext_cpp_requester_details.h>
// already included above
// #include <ndds/ndds_cpp.h>
// already included above
// #include <ndds/ndds_requestreply_cpp.h>

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "push_button_interface/action/push_button__rosidl_typesupport_connext_c.h"
// already included above
// #include "rosidl_typesupport_connext_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "rmw/rmw.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
// already included above
// #include "push_button_interface/msg/rosidl_typesupport_connext_c__visibility_control.h"
// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Support.h"
// already included above
// #include "push_button_interface/action/push_button.h"
// already included above
// #include "push_button_interface/action/push_button__rosidl_typesupport_connext_cpp.hpp"

// already included above
// #include "push_button_interface/action/push_button__rosidl_typesupport_connext_c.h"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
// already included above
// #include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "push_button_interface/msg/rosidl_typesupport_connext_c__visibility_control.h"
// already included above
// #include "push_button_interface/action/detail/push_button__struct.h"
// already included above
// #include "push_button_interface/action/detail/push_button__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Support.h"
// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

// forward declare type support functions
// Member 'goal_id'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_push_button_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  unique_identifier_msgs, msg,
  UUID)();

static DDS_TypeCode *
_PushButton_GetResult_Request__get_type_code()
{
  return push_button_interface::action::dds_::PushButton_GetResult_Request_TypeSupport::get_typecode();
}

static bool
_PushButton_GetResult_Request__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface__action__PushButton_GetResult_Request * ros_message =
    static_cast<const push_button_interface__action__PushButton_GetResult_Request *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_GetResult_Request_ * dds_message =
    static_cast<push_button_interface::action::dds_::PushButton_GetResult_Request_ *>(untyped_dds_message);
  // Member name: goal_id
  {
    const message_type_support_callbacks_t * unique_identifier_msgs__msg__UUID__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!unique_identifier_msgs__msg__UUID__callbacks->convert_ros_to_dds(
        &ros_message->goal_id, &dds_message->goal_id_))
    {
      return false;
    }
  }
  return true;
}

static bool
_PushButton_GetResult_Request__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface::action::dds_::PushButton_GetResult_Request_ * dds_message =
    static_cast<const push_button_interface::action::dds_::PushButton_GetResult_Request_ *>(untyped_dds_message);
  push_button_interface__action__PushButton_GetResult_Request * ros_message =
    static_cast<push_button_interface__action__PushButton_GetResult_Request *>(untyped_ros_message);
  // Member name: goal_id
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      unique_identifier_msgs, msg,
      UUID)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->goal_id_, &ros_message->goal_id);
  }
  return true;
}


static bool
_PushButton_GetResult_Request__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const push_button_interface__action__PushButton_GetResult_Request * ros_message =
    static_cast<const push_button_interface__action__PushButton_GetResult_Request *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_GetResult_Request_ dds_message;
  if (!_PushButton_GetResult_Request__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_serialize_to_cdr_buffer()\n");
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
  if (push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_PushButton_GetResult_Request__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  push_button_interface::action::dds_::PushButton_GetResult_Request_ * dds_message =
    push_button_interface::action::dds_::PushButton_GetResult_Request_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _PushButton_GetResult_Request__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (push_button_interface::action::dds_::PushButton_GetResult_Request_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _PushButton_GetResult_Request__callbacks = {
  "push_button_interface::action",  // message_namespace
  "PushButton_GetResult_Request",  // message_name
  _PushButton_GetResult_Request__get_type_code,  // get_type_code
  _PushButton_GetResult_Request__convert_ros_to_dds,  // convert_ros_to_dds
  _PushButton_GetResult_Request__convert_dds_to_ros,  // convert_dds_to_ros
  _PushButton_GetResult_Request__to_cdr_stream,  // to_cdr_stream
  _PushButton_GetResult_Request__to_message  // to_message
};

static rosidl_message_type_support_t _PushButton_GetResult_Request__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_PushButton_GetResult_Request__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  push_button_interface, action,
  PushButton_GetResult_Request)()
{
  return &_PushButton_GetResult_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "push_button_interface/action/push_button__rosidl_typesupport_connext_c.h"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
// already included above
// #include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "push_button_interface/msg/rosidl_typesupport_connext_c__visibility_control.h"
// already included above
// #include "push_button_interface/action/detail/push_button__struct.h"
// already included above
// #include "push_button_interface/action/detail/push_button__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Support.h"
// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'result'
// already included above
// #include "push_button_interface/action/detail/push_button__struct.h"
// Member 'result'
// already included above
// #include "push_button_interface/action/detail/push_button__functions.h"

// forward declare type support functions
// Member 'result'
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  push_button_interface, action,
  PushButton_Result)();

static DDS_TypeCode *
_PushButton_GetResult_Response__get_type_code()
{
  return push_button_interface::action::dds_::PushButton_GetResult_Response_TypeSupport::get_typecode();
}

static bool
_PushButton_GetResult_Response__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface__action__PushButton_GetResult_Response * ros_message =
    static_cast<const push_button_interface__action__PushButton_GetResult_Response *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_GetResult_Response_ * dds_message =
    static_cast<push_button_interface::action::dds_::PushButton_GetResult_Response_ *>(untyped_dds_message);
  // Member name: status
  {
    dds_message->status_ = ros_message->status;
  }
  // Member name: result
  {
    const message_type_support_callbacks_t * push_button_interface__action__PushButton_Result__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, push_button_interface, action, PushButton_Result
      )()->data);
    if (!push_button_interface__action__PushButton_Result__callbacks->convert_ros_to_dds(
        &ros_message->result, &dds_message->result_))
    {
      return false;
    }
  }
  return true;
}

static bool
_PushButton_GetResult_Response__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface::action::dds_::PushButton_GetResult_Response_ * dds_message =
    static_cast<const push_button_interface::action::dds_::PushButton_GetResult_Response_ *>(untyped_dds_message);
  push_button_interface__action__PushButton_GetResult_Response * ros_message =
    static_cast<push_button_interface__action__PushButton_GetResult_Response *>(untyped_ros_message);
  // Member name: status
  {
    ros_message->status = dds_message->status_;
  }
  // Member name: result
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      push_button_interface, action,
      PushButton_Result)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->result_, &ros_message->result);
  }
  return true;
}


static bool
_PushButton_GetResult_Response__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const push_button_interface__action__PushButton_GetResult_Response * ros_message =
    static_cast<const push_button_interface__action__PushButton_GetResult_Response *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_GetResult_Response_ dds_message;
  if (!_PushButton_GetResult_Response__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_serialize_to_cdr_buffer()\n");
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
  if (push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_PushButton_GetResult_Response__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  push_button_interface::action::dds_::PushButton_GetResult_Response_ * dds_message =
    push_button_interface::action::dds_::PushButton_GetResult_Response_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _PushButton_GetResult_Response__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (push_button_interface::action::dds_::PushButton_GetResult_Response_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _PushButton_GetResult_Response__callbacks = {
  "push_button_interface::action",  // message_namespace
  "PushButton_GetResult_Response",  // message_name
  _PushButton_GetResult_Response__get_type_code,  // get_type_code
  _PushButton_GetResult_Response__convert_ros_to_dds,  // convert_ros_to_dds
  _PushButton_GetResult_Response__convert_dds_to_ros,  // convert_dds_to_ros
  _PushButton_GetResult_Response__to_cdr_stream,  // to_cdr_stream
  _PushButton_GetResult_Response__to_message  // to_message
};

static rosidl_message_type_support_t _PushButton_GetResult_Response__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_PushButton_GetResult_Response__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  push_button_interface, action,
  PushButton_GetResult_Response)()
{
  return &_PushButton_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

class DDSDomainParticipant;
class DDSDataReader;
struct DDS_SampleIdentity_t;

#if defined(__cplusplus)
extern "C"
{
#endif

static void * create_requester__PushButton_GetResult(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  return push_button_interface::action::typesupport_connext_cpp::create_requester__PushButton_GetResult(
    untyped_participant,
    request_topic_str,
    response_topic_str,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    untyped_reader,
    untyped_writer,
    allocator);
}
static const char * destroy_requester__PushButton_GetResult(
  void * untyped_requester,
  void (* deallocator)(void *))
{
  return push_button_interface::action::typesupport_connext_cpp::destroy_requester__PushButton_GetResult(
    untyped_requester, deallocator);
}

static int64_t send_request__PushButton_GetResult(
  void * untyped_requester,
  const void * untyped_ros_request)
{
  using RequesterType = connext::Requester<
    push_button_interface::action::dds_::PushButton_GetResult_Request_,
    push_button_interface::action::dds_::PushButton_GetResult_Response_
  >;
  connext::WriteSample<push_button_interface::action::dds_::PushButton_GetResult_Request_> request;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    push_button_interface, action,
    PushButton_GetResult_Request)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_ros_to_dds(
    untyped_ros_request, static_cast<void *>(&request.data()));
  if (!converted) {
    fprintf(stderr, "Unable to convert request!\n");
    return -1;
  }

  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);

  requester->send_request(request);
  int64_t sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 |
    request.identity().sequence_number.low;
  return sequence_number;
}

static void * create_replier__PushButton_GetResult(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  return push_button_interface::action::typesupport_connext_cpp::create_replier__PushButton_GetResult(
    untyped_participant,
    request_topic_str,
    response_topic_str,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    untyped_reader,
    untyped_writer,
    allocator);
}

static const char * destroy_replier__PushButton_GetResult(
  void * untyped_replier,
  void (* deallocator)(void *))
{
  return push_button_interface::action::typesupport_connext_cpp::destroy_replier__PushButton_GetResult(
    untyped_replier, deallocator);
}

static bool take_request__PushButton_GetResult(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request)
{
  using ReplierType = connext::Replier<
    push_button_interface::action::dds_::PushButton_GetResult_Request_,
    push_button_interface::action::dds_::PushButton_GetResult_Response_
  >;
  if (!untyped_replier || !request_header || !untyped_ros_request) {
    return false;
  }

  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);

  connext::Sample<push_button_interface::action::dds_::PushButton_GetResult_Request_> request;
  bool taken = replier->take_request(request);
  if (!taken) {
    return false;
  }
  if (!request.info().valid_data) {
    return false;
  }

  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    push_button_interface, action,
    PushButton_GetResult_Request)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_dds_to_ros(
    static_cast<const void *>(&request.data()), untyped_ros_request);
  if (!converted) {
    return false;
  }

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(&(request_header->request_id.writer_guid[0]), request.identity().writer_guid.value, SAMPLE_IDENTITY_SIZE);

  request_header->request_id.sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 | request.identity().sequence_number.low;
  request_header->source_timestamp = 0;
  request_header->received_timestamp = 0;
  return true;
}

static bool take_response__PushButton_GetResult(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response)
{
  using RequesterType = connext::Requester<
    push_button_interface::action::dds_::PushButton_GetResult_Request_,
    push_button_interface::action::dds_::PushButton_GetResult_Response_
  >;
  if (!untyped_requester || !request_header || !untyped_ros_response) {
    return false;
  }

  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);

  connext::Sample<push_button_interface::action::dds_::PushButton_GetResult_Response_> response;
  bool received = requester->take_reply(response);
  if (!received) {
    return false;
  }
  if (!response.info().valid_data) {
    return false;
  }

  int64_t sequence_number =
    (((int64_t)response.related_identity().sequence_number.high) << 32) |
    response.related_identity().sequence_number.low;
  request_header->request_id.sequence_number = sequence_number;
  request_header->source_timestamp = 0;
  request_header->received_timestamp = 0;

  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    push_button_interface, action,
    PushButton_GetResult_Response)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_dds_to_ros(
    static_cast<const void *>(&response.data()), untyped_ros_response);
  return converted;
}

bool send_response__PushButton_GetResult(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  using ReplierType = connext::Replier<
    push_button_interface::action::dds_::PushButton_GetResult_Request_,
    push_button_interface::action::dds_::PushButton_GetResult_Response_
  >;
  if (!untyped_replier || !request_header || !untyped_ros_response) {
    return false;
  }

  connext::WriteSample<push_button_interface::action::dds_::PushButton_GetResult_Response_> response;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    push_button_interface, action,
    PushButton_GetResult_Response)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_ros_to_dds(
    untyped_ros_response, static_cast<void *>(&response.data()));
  if (!converted) {
    return false;
  }

  DDS_SampleIdentity_t request_identity;

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(request_identity.writer_guid.value, &request_header->writer_guid[0], SAMPLE_IDENTITY_SIZE);

  request_identity.sequence_number.high = (int32_t)((request_header->sequence_number & 0xFFFFFFFF00000000) >> 32);
  request_identity.sequence_number.low = (uint32_t)(request_header->sequence_number & 0xFFFFFFFF);

  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);

  replier->send_reply(response, request_identity);
  return true;
}

static void *
get_request_datawriter__PushButton_GetResult(void * untyped_requester)
{
  return push_button_interface::action::typesupport_connext_cpp::get_request_datawriter__PushButton_GetResult(
    untyped_requester);
}

static void *
get_reply_datareader__PushButton_GetResult(void * untyped_requester)
{
  return push_button_interface::action::typesupport_connext_cpp::get_reply_datareader__PushButton_GetResult(
    untyped_requester);
}

static void *
get_request_datareader__PushButton_GetResult(void * untyped_replier)
{
  return push_button_interface::action::typesupport_connext_cpp::get_request_datareader__PushButton_GetResult(
    untyped_replier);
}

static void *
get_reply_datawriter__PushButton_GetResult(void * untyped_replier)
{
  return push_button_interface::action::typesupport_connext_cpp::get_reply_datawriter__PushButton_GetResult(
    untyped_replier);
}

static service_type_support_callbacks_t _PushButton_GetResult__callbacks = {
  "push_button_interface::action",  // service_namespace
  "PushButton_GetResult",
  &create_requester__PushButton_GetResult,
  &destroy_requester__PushButton_GetResult,
  &create_replier__PushButton_GetResult,
  &destroy_replier__PushButton_GetResult,
  &send_request__PushButton_GetResult,
  &take_request__PushButton_GetResult,
  &send_response__PushButton_GetResult,
  &take_response__PushButton_GetResult,
  &get_request_datawriter__PushButton_GetResult,
  &get_reply_datareader__PushButton_GetResult,
  &get_request_datareader__PushButton_GetResult,
  &get_reply_datawriter__PushButton_GetResult
};

static rosidl_service_type_support_t _PushButton_GetResult__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_PushButton_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  push_button_interface, action,
  PushButton_GetResult)()
{
  return &_PushButton_GetResult__type_support;
}

#if defined(__cplusplus)
}
#endif
// already included above
// #include "push_button_interface/action/push_button__rosidl_typesupport_connext_c.h"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
// already included above
// #include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "push_button_interface/msg/rosidl_typesupport_connext_c__visibility_control.h"
// already included above
// #include "push_button_interface/action/detail/push_button__struct.h"
// already included above
// #include "push_button_interface/action/detail/push_button__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Support.h"
// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions

static DDS_TypeCode *
_PushButton_Feedback__get_type_code()
{
  return push_button_interface::action::dds_::PushButton_Feedback_TypeSupport::get_typecode();
}

static bool
_PushButton_Feedback__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface__action__PushButton_Feedback * ros_message =
    static_cast<const push_button_interface__action__PushButton_Feedback *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_Feedback_ * dds_message =
    static_cast<push_button_interface::action::dds_::PushButton_Feedback_ *>(untyped_dds_message);
  // Member name: feedback
  {
    dds_message->feedback_ = ros_message->feedback;
  }
  return true;
}

static bool
_PushButton_Feedback__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface::action::dds_::PushButton_Feedback_ * dds_message =
    static_cast<const push_button_interface::action::dds_::PushButton_Feedback_ *>(untyped_dds_message);
  push_button_interface__action__PushButton_Feedback * ros_message =
    static_cast<push_button_interface__action__PushButton_Feedback *>(untyped_ros_message);
  // Member name: feedback
  {
    ros_message->feedback = dds_message->feedback_ == static_cast<DDS_Boolean>(true);
  }
  return true;
}


static bool
_PushButton_Feedback__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const push_button_interface__action__PushButton_Feedback * ros_message =
    static_cast<const push_button_interface__action__PushButton_Feedback *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_Feedback_ dds_message;
  if (!_PushButton_Feedback__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (push_button_interface::action::dds_::PushButton_Feedback_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call push_button_interface::action::dds_::PushButton_Feedback_Plugin_serialize_to_cdr_buffer()\n");
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
  if (push_button_interface::action::dds_::PushButton_Feedback_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_PushButton_Feedback__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  push_button_interface::action::dds_::PushButton_Feedback_ * dds_message =
    push_button_interface::action::dds_::PushButton_Feedback_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (push_button_interface::action::dds_::PushButton_Feedback_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _PushButton_Feedback__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (push_button_interface::action::dds_::PushButton_Feedback_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _PushButton_Feedback__callbacks = {
  "push_button_interface::action",  // message_namespace
  "PushButton_Feedback",  // message_name
  _PushButton_Feedback__get_type_code,  // get_type_code
  _PushButton_Feedback__convert_ros_to_dds,  // convert_ros_to_dds
  _PushButton_Feedback__convert_dds_to_ros,  // convert_dds_to_ros
  _PushButton_Feedback__to_cdr_stream,  // to_cdr_stream
  _PushButton_Feedback__to_message  // to_message
};

static rosidl_message_type_support_t _PushButton_Feedback__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_PushButton_Feedback__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  push_button_interface, action,
  PushButton_Feedback)()
{
  return &_PushButton_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif
// already included above
// #include "push_button_interface/action/push_button__rosidl_typesupport_connext_c.h"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
// already included above
// #include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "push_button_interface/msg/rosidl_typesupport_connext_c__visibility_control.h"
// already included above
// #include "push_button_interface/action/detail/push_button__struct.h"
// already included above
// #include "push_button_interface/action/detail/push_button__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Support.h"
// already included above
// #include "push_button_interface/action/dds_connext/PushButton_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member 'feedback'
// already included above
// #include "push_button_interface/action/detail/push_button__struct.h"
// Member 'feedback'
// already included above
// #include "push_button_interface/action/detail/push_button__functions.h"

// forward declare type support functions
// Member 'goal_id'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_push_button_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  unique_identifier_msgs, msg,
  UUID)();
// Member 'feedback'
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  push_button_interface, action,
  PushButton_Feedback)();

static DDS_TypeCode *
_PushButton_FeedbackMessage__get_type_code()
{
  return push_button_interface::action::dds_::PushButton_FeedbackMessage_TypeSupport::get_typecode();
}

static bool
_PushButton_FeedbackMessage__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface__action__PushButton_FeedbackMessage * ros_message =
    static_cast<const push_button_interface__action__PushButton_FeedbackMessage *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_FeedbackMessage_ * dds_message =
    static_cast<push_button_interface::action::dds_::PushButton_FeedbackMessage_ *>(untyped_dds_message);
  // Member name: goal_id
  {
    const message_type_support_callbacks_t * unique_identifier_msgs__msg__UUID__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!unique_identifier_msgs__msg__UUID__callbacks->convert_ros_to_dds(
        &ros_message->goal_id, &dds_message->goal_id_))
    {
      return false;
    }
  }
  // Member name: feedback
  {
    const message_type_support_callbacks_t * push_button_interface__action__PushButton_Feedback__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, push_button_interface, action, PushButton_Feedback
      )()->data);
    if (!push_button_interface__action__PushButton_Feedback__callbacks->convert_ros_to_dds(
        &ros_message->feedback, &dds_message->feedback_))
    {
      return false;
    }
  }
  return true;
}

static bool
_PushButton_FeedbackMessage__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const push_button_interface::action::dds_::PushButton_FeedbackMessage_ * dds_message =
    static_cast<const push_button_interface::action::dds_::PushButton_FeedbackMessage_ *>(untyped_dds_message);
  push_button_interface__action__PushButton_FeedbackMessage * ros_message =
    static_cast<push_button_interface__action__PushButton_FeedbackMessage *>(untyped_ros_message);
  // Member name: goal_id
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      unique_identifier_msgs, msg,
      UUID)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->goal_id_, &ros_message->goal_id);
  }
  // Member name: feedback
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      push_button_interface, action,
      PushButton_Feedback)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->feedback_, &ros_message->feedback);
  }
  return true;
}


static bool
_PushButton_FeedbackMessage__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const push_button_interface__action__PushButton_FeedbackMessage * ros_message =
    static_cast<const push_button_interface__action__PushButton_FeedbackMessage *>(untyped_ros_message);
  push_button_interface::action::dds_::PushButton_FeedbackMessage_ dds_message;
  if (!_PushButton_FeedbackMessage__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_serialize_to_cdr_buffer()\n");
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
  if (push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_PushButton_FeedbackMessage__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  push_button_interface::action::dds_::PushButton_FeedbackMessage_ * dds_message =
    push_button_interface::action::dds_::PushButton_FeedbackMessage_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _PushButton_FeedbackMessage__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (push_button_interface::action::dds_::PushButton_FeedbackMessage_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _PushButton_FeedbackMessage__callbacks = {
  "push_button_interface::action",  // message_namespace
  "PushButton_FeedbackMessage",  // message_name
  _PushButton_FeedbackMessage__get_type_code,  // get_type_code
  _PushButton_FeedbackMessage__convert_ros_to_dds,  // convert_ros_to_dds
  _PushButton_FeedbackMessage__convert_dds_to_ros,  // convert_dds_to_ros
  _PushButton_FeedbackMessage__to_cdr_stream,  // to_cdr_stream
  _PushButton_FeedbackMessage__to_message  // to_message
};

static rosidl_message_type_support_t _PushButton_FeedbackMessage__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_PushButton_FeedbackMessage__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  push_button_interface, action,
  PushButton_FeedbackMessage)()
{
  return &_PushButton_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
