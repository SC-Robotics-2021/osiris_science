// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from push_button_interface:msg/PushButton.idl
// generated code does not contain a copyright notice

#ifndef PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__TRAITS_HPP_
#define PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__TRAITS_HPP_

#include "push_button_interface/msg/detail/push_button__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<push_button_interface::msg::PushButton>()
{
  return "push_button_interface::msg::PushButton";
}

template<>
inline const char * name<push_button_interface::msg::PushButton>()
{
  return "push_button_interface/msg/PushButton";
}

template<>
struct has_fixed_size<push_button_interface::msg::PushButton>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<push_button_interface::msg::PushButton>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<push_button_interface::msg::PushButton>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__TRAITS_HPP_
