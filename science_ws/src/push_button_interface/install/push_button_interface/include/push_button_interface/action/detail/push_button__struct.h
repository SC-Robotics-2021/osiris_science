// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from push_button_interface:action/PushButton.idl
// generated code does not contain a copyright notice

#ifndef PUSH_BUTTON_INTERFACE__ACTION__DETAIL__PUSH_BUTTON__STRUCT_H_
#define PUSH_BUTTON_INTERFACE__ACTION__DETAIL__PUSH_BUTTON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/PushButton in the package push_button_interface.
typedef struct push_button_interface__action__PushButton_Goal
{
  bool msg;
} push_button_interface__action__PushButton_Goal;

// Struct for a sequence of push_button_interface__action__PushButton_Goal.
typedef struct push_button_interface__action__PushButton_Goal__Sequence
{
  push_button_interface__action__PushButton_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} push_button_interface__action__PushButton_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/PushButton in the package push_button_interface.
typedef struct push_button_interface__action__PushButton_Result
{
  bool result;
} push_button_interface__action__PushButton_Result;

// Struct for a sequence of push_button_interface__action__PushButton_Result.
typedef struct push_button_interface__action__PushButton_Result__Sequence
{
  push_button_interface__action__PushButton_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} push_button_interface__action__PushButton_Result__Sequence;


// Constants defined in the message

// Struct defined in action/PushButton in the package push_button_interface.
typedef struct push_button_interface__action__PushButton_Feedback
{
  bool feedback;
} push_button_interface__action__PushButton_Feedback;

// Struct for a sequence of push_button_interface__action__PushButton_Feedback.
typedef struct push_button_interface__action__PushButton_Feedback__Sequence
{
  push_button_interface__action__PushButton_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} push_button_interface__action__PushButton_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "push_button_interface/action/detail/push_button__struct.h"

// Struct defined in action/PushButton in the package push_button_interface.
typedef struct push_button_interface__action__PushButton_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  push_button_interface__action__PushButton_Goal goal;
} push_button_interface__action__PushButton_SendGoal_Request;

// Struct for a sequence of push_button_interface__action__PushButton_SendGoal_Request.
typedef struct push_button_interface__action__PushButton_SendGoal_Request__Sequence
{
  push_button_interface__action__PushButton_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} push_button_interface__action__PushButton_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/PushButton in the package push_button_interface.
typedef struct push_button_interface__action__PushButton_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} push_button_interface__action__PushButton_SendGoal_Response;

// Struct for a sequence of push_button_interface__action__PushButton_SendGoal_Response.
typedef struct push_button_interface__action__PushButton_SendGoal_Response__Sequence
{
  push_button_interface__action__PushButton_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} push_button_interface__action__PushButton_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/PushButton in the package push_button_interface.
typedef struct push_button_interface__action__PushButton_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} push_button_interface__action__PushButton_GetResult_Request;

// Struct for a sequence of push_button_interface__action__PushButton_GetResult_Request.
typedef struct push_button_interface__action__PushButton_GetResult_Request__Sequence
{
  push_button_interface__action__PushButton_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} push_button_interface__action__PushButton_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "push_button_interface/action/detail/push_button__struct.h"

// Struct defined in action/PushButton in the package push_button_interface.
typedef struct push_button_interface__action__PushButton_GetResult_Response
{
  int8_t status;
  push_button_interface__action__PushButton_Result result;
} push_button_interface__action__PushButton_GetResult_Response;

// Struct for a sequence of push_button_interface__action__PushButton_GetResult_Response.
typedef struct push_button_interface__action__PushButton_GetResult_Response__Sequence
{
  push_button_interface__action__PushButton_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} push_button_interface__action__PushButton_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "push_button_interface/action/detail/push_button__struct.h"

// Struct defined in action/PushButton in the package push_button_interface.
typedef struct push_button_interface__action__PushButton_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  push_button_interface__action__PushButton_Feedback feedback;
} push_button_interface__action__PushButton_FeedbackMessage;

// Struct for a sequence of push_button_interface__action__PushButton_FeedbackMessage.
typedef struct push_button_interface__action__PushButton_FeedbackMessage__Sequence
{
  push_button_interface__action__PushButton_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} push_button_interface__action__PushButton_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PUSH_BUTTON_INTERFACE__ACTION__DETAIL__PUSH_BUTTON__STRUCT_H_
