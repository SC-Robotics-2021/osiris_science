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

class Init_PushButton_pump_pos
{
public:
  explicit Init_PushButton_pump_pos(::push_button_interface::msg::PushButton & msg)
  : msg_(msg)
  {}
  ::push_button_interface::msg::PushButton pump_pos(::push_button_interface::msg::PushButton::_pump_pos_type arg)
  {
    msg_.pump_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::push_button_interface::msg::PushButton msg_;
};

class Init_PushButton_uv_camera
{
public:
  explicit Init_PushButton_uv_camera(::push_button_interface::msg::PushButton & msg)
  : msg_(msg)
  {}
  Init_PushButton_pump_pos uv_camera(::push_button_interface::msg::PushButton::_uv_camera_type arg)
  {
    msg_.uv_camera = std::move(arg);
    return Init_PushButton_pump_pos(msg_);
  }

private:
  ::push_button_interface::msg::PushButton msg_;
};

class Init_PushButton_water_pump
{
public:
  explicit Init_PushButton_water_pump(::push_button_interface::msg::PushButton & msg)
  : msg_(msg)
  {}
  Init_PushButton_uv_camera water_pump(::push_button_interface::msg::PushButton::_water_pump_type arg)
  {
    msg_.water_pump = std::move(arg);
    return Init_PushButton_uv_camera(msg_);
  }

private:
  ::push_button_interface::msg::PushButton msg_;
};

class Init_PushButton_brush
{
public:
  explicit Init_PushButton_brush(::push_button_interface::msg::PushButton & msg)
  : msg_(msg)
  {}
  Init_PushButton_water_pump brush(::push_button_interface::msg::PushButton::_brush_type arg)
  {
    msg_.brush = std::move(arg);
    return Init_PushButton_water_pump(msg_);
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
  Init_PushButton_brush flashlight(::push_button_interface::msg::PushButton::_flashlight_type arg)
  {
    msg_.flashlight = std::move(arg);
    return Init_PushButton_brush(msg_);
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

class Init_PushButton_platform_height
{
public:
  explicit Init_PushButton_platform_height(::push_button_interface::msg::PushButton & msg)
  : msg_(msg)
  {}
  Init_PushButton_microscope platform_height(::push_button_interface::msg::PushButton::_platform_height_type arg)
  {
    msg_.platform_height = std::move(arg);
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
  Init_PushButton_platform_height collect_sample(::push_button_interface::msg::PushButton::_collect_sample_type arg)
  {
    msg_.collect_sample = std::move(arg);
    return Init_PushButton_platform_height(msg_);
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
