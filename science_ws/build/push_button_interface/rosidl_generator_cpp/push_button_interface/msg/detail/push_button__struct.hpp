// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from push_button_interface:msg/PushButton.idl
// generated code does not contain a copyright notice

#ifndef PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__STRUCT_HPP_
#define PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__push_button_interface__msg__PushButton __attribute__((deprecated))
#else
# define DEPRECATED__push_button_interface__msg__PushButton __declspec(deprecated)
#endif

namespace push_button_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PushButton_
{
  using Type = PushButton_<ContainerAllocator>;

  explicit PushButton_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->collect_sample = false;
      this->platform_height = 0l;
      this->microscope = false;
      this->flashlight = false;
      this->brush = false;
      this->water_pump = false;
      this->uv_camera = false;
      this->pump_pos = 0;
    }
  }

  explicit PushButton_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->collect_sample = false;
      this->platform_height = 0l;
      this->microscope = false;
      this->flashlight = false;
      this->brush = false;
      this->water_pump = false;
      this->uv_camera = false;
      this->pump_pos = 0;
    }
  }

  // field types and members
  using _collect_sample_type =
    bool;
  _collect_sample_type collect_sample;
  using _platform_height_type =
    int32_t;
  _platform_height_type platform_height;
  using _microscope_type =
    bool;
  _microscope_type microscope;
  using _flashlight_type =
    bool;
  _flashlight_type flashlight;
  using _brush_type =
    bool;
  _brush_type brush;
  using _water_pump_type =
    bool;
  _water_pump_type water_pump;
  using _uv_camera_type =
    bool;
  _uv_camera_type uv_camera;
  using _pump_pos_type =
    int16_t;
  _pump_pos_type pump_pos;

  // setters for named parameter idiom
  Type & set__collect_sample(
    const bool & _arg)
  {
    this->collect_sample = _arg;
    return *this;
  }
  Type & set__platform_height(
    const int32_t & _arg)
  {
    this->platform_height = _arg;
    return *this;
  }
  Type & set__microscope(
    const bool & _arg)
  {
    this->microscope = _arg;
    return *this;
  }
  Type & set__flashlight(
    const bool & _arg)
  {
    this->flashlight = _arg;
    return *this;
  }
  Type & set__brush(
    const bool & _arg)
  {
    this->brush = _arg;
    return *this;
  }
  Type & set__water_pump(
    const bool & _arg)
  {
    this->water_pump = _arg;
    return *this;
  }
  Type & set__uv_camera(
    const bool & _arg)
  {
    this->uv_camera = _arg;
    return *this;
  }
  Type & set__pump_pos(
    const int16_t & _arg)
  {
    this->pump_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    push_button_interface::msg::PushButton_<ContainerAllocator> *;
  using ConstRawPtr =
    const push_button_interface::msg::PushButton_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<push_button_interface::msg::PushButton_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<push_button_interface::msg::PushButton_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      push_button_interface::msg::PushButton_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<push_button_interface::msg::PushButton_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      push_button_interface::msg::PushButton_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<push_button_interface::msg::PushButton_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<push_button_interface::msg::PushButton_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<push_button_interface::msg::PushButton_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__push_button_interface__msg__PushButton
    std::shared_ptr<push_button_interface::msg::PushButton_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__push_button_interface__msg__PushButton
    std::shared_ptr<push_button_interface::msg::PushButton_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PushButton_ & other) const
  {
    if (this->collect_sample != other.collect_sample) {
      return false;
    }
    if (this->platform_height != other.platform_height) {
      return false;
    }
    if (this->microscope != other.microscope) {
      return false;
    }
    if (this->flashlight != other.flashlight) {
      return false;
    }
    if (this->brush != other.brush) {
      return false;
    }
    if (this->water_pump != other.water_pump) {
      return false;
    }
    if (this->uv_camera != other.uv_camera) {
      return false;
    }
    if (this->pump_pos != other.pump_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const PushButton_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PushButton_

// alias to use template instance with default allocator
using PushButton =
  push_button_interface::msg::PushButton_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace push_button_interface

#endif  // PUSH_BUTTON_INTERFACE__MSG__DETAIL__PUSH_BUTTON__STRUCT_HPP_
