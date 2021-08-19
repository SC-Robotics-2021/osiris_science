// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from push_button_interface:msg/PushButton.idl
// generated code does not contain a copyright notice

#ifndef PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__BUILDER_HPP_
#define PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__BUILDER_HPP_

#include "push_button_interface/msg/detail/push_button__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace push_button_interface
{

namespace msg
{

namespace builder
{

class Init_PushButton_uv_cam
{
public:
  explicit Init_PushButton_uv_cam(::push_button_interface::msg::PushButton & msg)
  : msg_(msg)
  {}
  ::push_button_interface::msg::PushButton uv_cam(::push_button_interface::msg::PushButton::_uv_cam_type arg)
  {
    msg_.uv_cam = std::move(arg);
    return std::move(msg_);
  }

private:
  ::push_button_interface::msg::PushButton msg_;
};

class Init_PushButton_flashlight
{
public:
  explicit Init_PushButton_flashlight(::push_button_interface::msg::PushButton & msg)
  : msg_(msg)
  {}
  Init_PushButton_uv_cam flashlight(::push_button_interface::msg::PushButton::_flashlight_type arg)
  {
    msg_.flashlight = std::move(arg);
    return Init_PushButton_uv_cam(msg_);
  }

private:
  ::push_button_interface::msg::PushButton msg_;
};

class Init_PushButton_microscope
{
public:
  explicit Init_PushButton_microscope(::push_button_interface::msg::PushButton & msg)
  : msg_(msg)
  {}
  Init_PushButton_flashlight microscope(::push_button_interface::msg::PushButton::_microscope_type arg)
  {
    msg_.microscope = std::move(arg);
    return Init_PushButton_flashlight(msg_);
  }

private:
  ::push_button_interface::msg::PushButton msg_;
};

class Init_PushButton_platform
{
public:
  explicit Init_PushButton_platform(::push_button_interface::msg::PushButton & msg)
  : msg_(msg)
  {}
  Init_PushButton_microscope platform(::push_button_interface::msg::PushButton::_platform_type arg)
  {
    msg_.platform = std::move(arg);
    return Init_PushButton_microscope(msg_);
  }

private:
  ::push_button_interface::msg::PushButton msg_;
};

class Init_PushButton_collect_sample
{
public:
  Init_PushButton_collect_sample()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PushButton_platform collect_sample(::push_button_interface::msg::PushButton::_collect_sample_type arg)
  {
    msg_.collect_sample = std::move(arg);
    return Init_PushButton_platform(msg_);
  }

private:
  ::push_button_interface::msg::PushButton msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::push_button_interface::msg::PushButton>()
{
  return push_button_interface::msg::builder::Init_PushButton_collect_sample();
}

}  // namespace push_button_interface

#endif  // PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__BUILDER_HPP_
