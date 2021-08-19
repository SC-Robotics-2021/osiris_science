// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from push_button_interface:msg/PushButton.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "push_button_interface/msg/detail/push_button__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace push_button_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PushButton_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) push_button_interface::msg::PushButton(_init);
}

void PushButton_fini_function(void * message_memory)
{
  auto typed_message = static_cast<push_button_interface::msg::PushButton *>(message_memory);
  typed_message->~PushButton();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PushButton_message_member_array[5] = {
  {
    "collect_sample",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(push_button_interface::msg::PushButton, collect_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "platform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(push_button_interface::msg::PushButton, platform),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "microscope",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(push_button_interface::msg::PushButton, microscope),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flashlight",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(push_button_interface::msg::PushButton, flashlight),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uv_cam",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(push_button_interface::msg::PushButton, uv_cam),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PushButton_message_members = {
  "push_button_interface::msg",  // message namespace
  "PushButton",  // message name
  5,  // number of fields
  sizeof(push_button_interface::msg::PushButton),
  PushButton_message_member_array,  // message members
  PushButton_init_function,  // function to initialize message memory (memory has to be allocated)
  PushButton_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PushButton_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PushButton_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace push_button_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<push_button_interface::msg::PushButton>()
{
  return &::push_button_interface::msg::rosidl_typesupport_introspection_cpp::PushButton_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, push_button_interface, msg, PushButton)() {
  return &::push_button_interface::msg::rosidl_typesupport_introspection_cpp::PushButton_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
