// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from push_button_interface:msg/PushButton.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "push_button_interface/msg/detail/push_button__rosidl_typesupport_introspection_c.h"
#include "push_button_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "push_button_interface/msg/detail/push_button__functions.h"
#include "push_button_interface/msg/detail/push_button__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PushButton__rosidl_typesupport_introspection_c__PushButton_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  push_button_interface__msg__PushButton__init(message_memory);
}

void PushButton__rosidl_typesupport_introspection_c__PushButton_fini_function(void * message_memory)
{
  push_button_interface__msg__PushButton__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PushButton__rosidl_typesupport_introspection_c__PushButton_message_member_array[5] = {
  {
    "collect_sample",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(push_button_interface__msg__PushButton, collect_sample),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "platform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(push_button_interface__msg__PushButton, platform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "microscope",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(push_button_interface__msg__PushButton, microscope),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flashlight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(push_button_interface__msg__PushButton, flashlight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uv_cam",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(push_button_interface__msg__PushButton, uv_cam),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PushButton__rosidl_typesupport_introspection_c__PushButton_message_members = {
  "push_button_interface__msg",  // message namespace
  "PushButton",  // message name
  5,  // number of fields
  sizeof(push_button_interface__msg__PushButton),
  PushButton__rosidl_typesupport_introspection_c__PushButton_message_member_array,  // message members
  PushButton__rosidl_typesupport_introspection_c__PushButton_init_function,  // function to initialize message memory (memory has to be allocated)
  PushButton__rosidl_typesupport_introspection_c__PushButton_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PushButton__rosidl_typesupport_introspection_c__PushButton_message_type_support_handle = {
  0,
  &PushButton__rosidl_typesupport_introspection_c__PushButton_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_push_button_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, push_button_interface, msg, PushButton)() {
  if (!PushButton__rosidl_typesupport_introspection_c__PushButton_message_type_support_handle.typesupport_identifier) {
    PushButton__rosidl_typesupport_introspection_c__PushButton_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PushButton__rosidl_typesupport_introspection_c__PushButton_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
