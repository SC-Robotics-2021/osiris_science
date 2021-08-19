// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from push_button_interface:action/PushButton.idl
// generated code does not contain a copyright notice

#ifndef PUSH_BUTTON_INTERFACE__ACTION__DETAIL__PUSH_BUTTON__BUILDER_HPP_
#define PUSH_BUTTON_INTERFACE__ACTION__DETAIL__PUSH_BUTTON__BUILDER_HPP_

#include "push_button_interface/action/detail/push_button__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace push_button_interface
{

namespace action
{

namespace builder
{

class Init_PushButton_Goal_msg
{
public:
  Init_PushButton_Goal_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::push_button_interface::action::PushButton_Goal msg(::push_button_interface::action::PushButton_Goal::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::push_button_interface::action::PushButton_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::push_button_interface::action::PushButton_Goal>()
{
  return push_button_interface::action::builder::Init_PushButton_Goal_msg();
}

}  // namespace push_button_interface


namespace push_button_interface
{

namespace action
{

namespace builder
{

class Init_PushButton_Result_result
{
public:
  Init_PushButton_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::push_button_interface::action::PushButton_Result result(::push_button_interface::action::PushButton_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::push_button_interface::action::PushButton_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::push_button_interface::action::PushButton_Result>()
{
  return push_button_interface::action::builder::Init_PushButton_Result_result();
}

}  // namespace push_button_interface


namespace push_button_interface
{

namespace action
{

namespace builder
{

class Init_PushButton_Feedback_feedback
{
public:
  Init_PushButton_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::push_button_interface::action::PushButton_Feedback feedback(::push_button_interface::action::PushButton_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::push_button_interface::action::PushButton_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::push_button_interface::action::PushButton_Feedback>()
{
  return push_button_interface::action::builder::Init_PushButton_Feedback_feedback();
}

}  // namespace push_button_interface


namespace push_button_interface
{

namespace action
{

namespace builder
{

class Init_PushButton_SendGoal_Request_goal
{
public:
  explicit Init_PushButton_SendGoal_Request_goal(::push_button_interface::action::PushButton_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::push_button_interface::action::PushButton_SendGoal_Request goal(::push_button_interface::action::PushButton_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::push_button_interface::action::PushButton_SendGoal_Request msg_;
};

class Init_PushButton_SendGoal_Request_goal_id
{
public:
  Init_PushButton_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PushButton_SendGoal_Request_goal goal_id(::push_button_interface::action::PushButton_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PushButton_SendGoal_Request_goal(msg_);
  }

private:
  ::push_button_interface::action::PushButton_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::push_button_interface::action::PushButton_SendGoal_Request>()
{
  return push_button_interface::action::builder::Init_PushButton_SendGoal_Request_goal_id();
}

}  // namespace push_button_interface


namespace push_button_interface
{

namespace action
{

namespace builder
{

class Init_PushButton_SendGoal_Response_stamp
{
public:
  explicit Init_PushButton_SendGoal_Response_stamp(::push_button_interface::action::PushButton_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::push_button_interface::action::PushButton_SendGoal_Response stamp(::push_button_interface::action::PushButton_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::push_button_interface::action::PushButton_SendGoal_Response msg_;
};

class Init_PushButton_SendGoal_Response_accepted
{
public:
  Init_PushButton_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PushButton_SendGoal_Response_stamp accepted(::push_button_interface::action::PushButton_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PushButton_SendGoal_Response_stamp(msg_);
  }

private:
  ::push_button_interface::action::PushButton_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::push_button_interface::action::PushButton_SendGoal_Response>()
{
  return push_button_interface::action::builder::Init_PushButton_SendGoal_Response_accepted();
}

}  // namespace push_button_interface


namespace push_button_interface
{

namespace action
{

namespace builder
{

class Init_PushButton_GetResult_Request_goal_id
{
public:
  Init_PushButton_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::push_button_interface::action::PushButton_GetResult_Request goal_id(::push_button_interface::action::PushButton_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::push_button_interface::action::PushButton_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::push_button_interface::action::PushButton_GetResult_Request>()
{
  return push_button_interface::action::builder::Init_PushButton_GetResult_Request_goal_id();
}

}  // namespace push_button_interface


namespace push_button_interface
{

namespace action
{

namespace builder
{

class Init_PushButton_GetResult_Response_result
{
public:
  explicit Init_PushButton_GetResult_Response_result(::push_button_interface::action::PushButton_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::push_button_interface::action::PushButton_GetResult_Response result(::push_button_interface::action::PushButton_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::push_button_interface::action::PushButton_GetResult_Response msg_;
};

class Init_PushButton_GetResult_Response_status
{
public:
  Init_PushButton_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PushButton_GetResult_Response_result status(::push_button_interface::action::PushButton_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PushButton_GetResult_Response_result(msg_);
  }

private:
  ::push_button_interface::action::PushButton_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::push_button_interface::action::PushButton_GetResult_Response>()
{
  return push_button_interface::action::builder::Init_PushButton_GetResult_Response_status();
}

}  // namespace push_button_interface


namespace push_button_interface
{

namespace action
{

namespace builder
{

class Init_PushButton_FeedbackMessage_feedback
{
public:
  explicit Init_PushButton_FeedbackMessage_feedback(::push_button_interface::action::PushButton_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::push_button_interface::action::PushButton_FeedbackMessage feedback(::push_button_interface::action::PushButton_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::push_button_interface::action::PushButton_FeedbackMessage msg_;
};

class Init_PushButton_FeedbackMessage_goal_id
{
public:
  Init_PushButton_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PushButton_FeedbackMessage_feedback goal_id(::push_button_interface::action::PushButton_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PushButton_FeedbackMessage_feedback(msg_);
  }

private:
  ::push_button_interface::action::PushButton_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::push_button_interface::action::PushButton_FeedbackMessage>()
{
  return push_button_interface::action::builder::Init_PushButton_FeedbackMessage_goal_id();
}

}  // namespace push_button_interface

#endif  // PUSH_BUTTON_INTERFACE__ACTION__DETAIL__PUSH_BUTTON__BUILDER_HPP_
