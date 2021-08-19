// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from push_button_interface:action/PushButton.idl
// generated code does not contain a copyright notice

#ifndef PUSH_BUTTON_INTERFACE__ACTION__DETAIL__PUSH_BUTTON__TRAITS_HPP_
#define PUSH_BUTTON_INTERFACE__ACTION__DETAIL__PUSH_BUTTON__TRAITS_HPP_

#include "push_button_interface/action/detail/push_button__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<push_button_interface::action::PushButton_Goal>()
{
  return "push_button_interface::action::PushButton_Goal";
}

template<>
inline const char * name<push_button_interface::action::PushButton_Goal>()
{
  return "push_button_interface/action/PushButton_Goal";
}

template<>
struct has_fixed_size<push_button_interface::action::PushButton_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<push_button_interface::action::PushButton_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<push_button_interface::action::PushButton_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<push_button_interface::action::PushButton_Result>()
{
  return "push_button_interface::action::PushButton_Result";
}

template<>
inline const char * name<push_button_interface::action::PushButton_Result>()
{
  return "push_button_interface/action/PushButton_Result";
}

template<>
struct has_fixed_size<push_button_interface::action::PushButton_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<push_button_interface::action::PushButton_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<push_button_interface::action::PushButton_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<push_button_interface::action::PushButton_Feedback>()
{
  return "push_button_interface::action::PushButton_Feedback";
}

template<>
inline const char * name<push_button_interface::action::PushButton_Feedback>()
{
  return "push_button_interface/action/PushButton_Feedback";
}

template<>
struct has_fixed_size<push_button_interface::action::PushButton_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<push_button_interface::action::PushButton_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<push_button_interface::action::PushButton_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "push_button_interface/action/detail/push_button__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<push_button_interface::action::PushButton_SendGoal_Request>()
{
  return "push_button_interface::action::PushButton_SendGoal_Request";
}

template<>
inline const char * name<push_button_interface::action::PushButton_SendGoal_Request>()
{
  return "push_button_interface/action/PushButton_SendGoal_Request";
}

template<>
struct has_fixed_size<push_button_interface::action::PushButton_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<push_button_interface::action::PushButton_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<push_button_interface::action::PushButton_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<push_button_interface::action::PushButton_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<push_button_interface::action::PushButton_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<push_button_interface::action::PushButton_SendGoal_Response>()
{
  return "push_button_interface::action::PushButton_SendGoal_Response";
}

template<>
inline const char * name<push_button_interface::action::PushButton_SendGoal_Response>()
{
  return "push_button_interface/action/PushButton_SendGoal_Response";
}

template<>
struct has_fixed_size<push_button_interface::action::PushButton_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<push_button_interface::action::PushButton_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<push_button_interface::action::PushButton_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<push_button_interface::action::PushButton_SendGoal>()
{
  return "push_button_interface::action::PushButton_SendGoal";
}

template<>
inline const char * name<push_button_interface::action::PushButton_SendGoal>()
{
  return "push_button_interface/action/PushButton_SendGoal";
}

template<>
struct has_fixed_size<push_button_interface::action::PushButton_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<push_button_interface::action::PushButton_SendGoal_Request>::value &&
    has_fixed_size<push_button_interface::action::PushButton_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<push_button_interface::action::PushButton_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<push_button_interface::action::PushButton_SendGoal_Request>::value &&
    has_bounded_size<push_button_interface::action::PushButton_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<push_button_interface::action::PushButton_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<push_button_interface::action::PushButton_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<push_button_interface::action::PushButton_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<push_button_interface::action::PushButton_GetResult_Request>()
{
  return "push_button_interface::action::PushButton_GetResult_Request";
}

template<>
inline const char * name<push_button_interface::action::PushButton_GetResult_Request>()
{
  return "push_button_interface/action/PushButton_GetResult_Request";
}

template<>
struct has_fixed_size<push_button_interface::action::PushButton_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<push_button_interface::action::PushButton_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<push_button_interface::action::PushButton_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "push_button_interface/action/detail/push_button__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<push_button_interface::action::PushButton_GetResult_Response>()
{
  return "push_button_interface::action::PushButton_GetResult_Response";
}

template<>
inline const char * name<push_button_interface::action::PushButton_GetResult_Response>()
{
  return "push_button_interface/action/PushButton_GetResult_Response";
}

template<>
struct has_fixed_size<push_button_interface::action::PushButton_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<push_button_interface::action::PushButton_Result>::value> {};

template<>
struct has_bounded_size<push_button_interface::action::PushButton_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<push_button_interface::action::PushButton_Result>::value> {};

template<>
struct is_message<push_button_interface::action::PushButton_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<push_button_interface::action::PushButton_GetResult>()
{
  return "push_button_interface::action::PushButton_GetResult";
}

template<>
inline const char * name<push_button_interface::action::PushButton_GetResult>()
{
  return "push_button_interface/action/PushButton_GetResult";
}

template<>
struct has_fixed_size<push_button_interface::action::PushButton_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<push_button_interface::action::PushButton_GetResult_Request>::value &&
    has_fixed_size<push_button_interface::action::PushButton_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<push_button_interface::action::PushButton_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<push_button_interface::action::PushButton_GetResult_Request>::value &&
    has_bounded_size<push_button_interface::action::PushButton_GetResult_Response>::value
  >
{
};

template<>
struct is_service<push_button_interface::action::PushButton_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<push_button_interface::action::PushButton_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<push_button_interface::action::PushButton_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "push_button_interface/action/detail/push_button__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<push_button_interface::action::PushButton_FeedbackMessage>()
{
  return "push_button_interface::action::PushButton_FeedbackMessage";
}

template<>
inline const char * name<push_button_interface::action::PushButton_FeedbackMessage>()
{
  return "push_button_interface/action/PushButton_FeedbackMessage";
}

template<>
struct has_fixed_size<push_button_interface::action::PushButton_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<push_button_interface::action::PushButton_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<push_button_interface::action::PushButton_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<push_button_interface::action::PushButton_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<push_button_interface::action::PushButton_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<push_button_interface::action::PushButton>
  : std::true_type
{
};

template<>
struct is_action_goal<push_button_interface::action::PushButton_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<push_button_interface::action::PushButton_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<push_button_interface::action::PushButton_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PUSH_BUTTON_INTERFACE__ACTION__DETAIL__PUSH_BUTTON__TRAITS_HPP_
