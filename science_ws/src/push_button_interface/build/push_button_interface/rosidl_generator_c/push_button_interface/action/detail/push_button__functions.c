// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from push_button_interface:action/PushButton.idl
// generated code does not contain a copyright notice
#include "push_button_interface/action/detail/push_button__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
push_button_interface__action__PushButton_Goal__init(push_button_interface__action__PushButton_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // msg
  return true;
}

void
push_button_interface__action__PushButton_Goal__fini(push_button_interface__action__PushButton_Goal * msg)
{
  if (!msg) {
    return;
  }
  // msg
}

push_button_interface__action__PushButton_Goal *
push_button_interface__action__PushButton_Goal__create()
{
  push_button_interface__action__PushButton_Goal * msg = (push_button_interface__action__PushButton_Goal *)malloc(sizeof(push_button_interface__action__PushButton_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(push_button_interface__action__PushButton_Goal));
  bool success = push_button_interface__action__PushButton_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
push_button_interface__action__PushButton_Goal__destroy(push_button_interface__action__PushButton_Goal * msg)
{
  if (msg) {
    push_button_interface__action__PushButton_Goal__fini(msg);
  }
  free(msg);
}


bool
push_button_interface__action__PushButton_Goal__Sequence__init(push_button_interface__action__PushButton_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  push_button_interface__action__PushButton_Goal * data = NULL;
  if (size) {
    data = (push_button_interface__action__PushButton_Goal *)calloc(size, sizeof(push_button_interface__action__PushButton_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = push_button_interface__action__PushButton_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        push_button_interface__action__PushButton_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
push_button_interface__action__PushButton_Goal__Sequence__fini(push_button_interface__action__PushButton_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      push_button_interface__action__PushButton_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

push_button_interface__action__PushButton_Goal__Sequence *
push_button_interface__action__PushButton_Goal__Sequence__create(size_t size)
{
  push_button_interface__action__PushButton_Goal__Sequence * array = (push_button_interface__action__PushButton_Goal__Sequence *)malloc(sizeof(push_button_interface__action__PushButton_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = push_button_interface__action__PushButton_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
push_button_interface__action__PushButton_Goal__Sequence__destroy(push_button_interface__action__PushButton_Goal__Sequence * array)
{
  if (array) {
    push_button_interface__action__PushButton_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
push_button_interface__action__PushButton_Result__init(push_button_interface__action__PushButton_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
push_button_interface__action__PushButton_Result__fini(push_button_interface__action__PushButton_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
}

push_button_interface__action__PushButton_Result *
push_button_interface__action__PushButton_Result__create()
{
  push_button_interface__action__PushButton_Result * msg = (push_button_interface__action__PushButton_Result *)malloc(sizeof(push_button_interface__action__PushButton_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(push_button_interface__action__PushButton_Result));
  bool success = push_button_interface__action__PushButton_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
push_button_interface__action__PushButton_Result__destroy(push_button_interface__action__PushButton_Result * msg)
{
  if (msg) {
    push_button_interface__action__PushButton_Result__fini(msg);
  }
  free(msg);
}


bool
push_button_interface__action__PushButton_Result__Sequence__init(push_button_interface__action__PushButton_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  push_button_interface__action__PushButton_Result * data = NULL;
  if (size) {
    data = (push_button_interface__action__PushButton_Result *)calloc(size, sizeof(push_button_interface__action__PushButton_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = push_button_interface__action__PushButton_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        push_button_interface__action__PushButton_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
push_button_interface__action__PushButton_Result__Sequence__fini(push_button_interface__action__PushButton_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      push_button_interface__action__PushButton_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

push_button_interface__action__PushButton_Result__Sequence *
push_button_interface__action__PushButton_Result__Sequence__create(size_t size)
{
  push_button_interface__action__PushButton_Result__Sequence * array = (push_button_interface__action__PushButton_Result__Sequence *)malloc(sizeof(push_button_interface__action__PushButton_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = push_button_interface__action__PushButton_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
push_button_interface__action__PushButton_Result__Sequence__destroy(push_button_interface__action__PushButton_Result__Sequence * array)
{
  if (array) {
    push_button_interface__action__PushButton_Result__Sequence__fini(array);
  }
  free(array);
}


bool
push_button_interface__action__PushButton_Feedback__init(push_button_interface__action__PushButton_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  return true;
}

void
push_button_interface__action__PushButton_Feedback__fini(push_button_interface__action__PushButton_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
}

push_button_interface__action__PushButton_Feedback *
push_button_interface__action__PushButton_Feedback__create()
{
  push_button_interface__action__PushButton_Feedback * msg = (push_button_interface__action__PushButton_Feedback *)malloc(sizeof(push_button_interface__action__PushButton_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(push_button_interface__action__PushButton_Feedback));
  bool success = push_button_interface__action__PushButton_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
push_button_interface__action__PushButton_Feedback__destroy(push_button_interface__action__PushButton_Feedback * msg)
{
  if (msg) {
    push_button_interface__action__PushButton_Feedback__fini(msg);
  }
  free(msg);
}


bool
push_button_interface__action__PushButton_Feedback__Sequence__init(push_button_interface__action__PushButton_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  push_button_interface__action__PushButton_Feedback * data = NULL;
  if (size) {
    data = (push_button_interface__action__PushButton_Feedback *)calloc(size, sizeof(push_button_interface__action__PushButton_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = push_button_interface__action__PushButton_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        push_button_interface__action__PushButton_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
push_button_interface__action__PushButton_Feedback__Sequence__fini(push_button_interface__action__PushButton_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      push_button_interface__action__PushButton_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

push_button_interface__action__PushButton_Feedback__Sequence *
push_button_interface__action__PushButton_Feedback__Sequence__create(size_t size)
{
  push_button_interface__action__PushButton_Feedback__Sequence * array = (push_button_interface__action__PushButton_Feedback__Sequence *)malloc(sizeof(push_button_interface__action__PushButton_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = push_button_interface__action__PushButton_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
push_button_interface__action__PushButton_Feedback__Sequence__destroy(push_button_interface__action__PushButton_Feedback__Sequence * array)
{
  if (array) {
    push_button_interface__action__PushButton_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "push_button_interface/action/detail/push_button__functions.h"

bool
push_button_interface__action__PushButton_SendGoal_Request__init(push_button_interface__action__PushButton_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    push_button_interface__action__PushButton_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!push_button_interface__action__PushButton_Goal__init(&msg->goal)) {
    push_button_interface__action__PushButton_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
push_button_interface__action__PushButton_SendGoal_Request__fini(push_button_interface__action__PushButton_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  push_button_interface__action__PushButton_Goal__fini(&msg->goal);
}

push_button_interface__action__PushButton_SendGoal_Request *
push_button_interface__action__PushButton_SendGoal_Request__create()
{
  push_button_interface__action__PushButton_SendGoal_Request * msg = (push_button_interface__action__PushButton_SendGoal_Request *)malloc(sizeof(push_button_interface__action__PushButton_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(push_button_interface__action__PushButton_SendGoal_Request));
  bool success = push_button_interface__action__PushButton_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
push_button_interface__action__PushButton_SendGoal_Request__destroy(push_button_interface__action__PushButton_SendGoal_Request * msg)
{
  if (msg) {
    push_button_interface__action__PushButton_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
push_button_interface__action__PushButton_SendGoal_Request__Sequence__init(push_button_interface__action__PushButton_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  push_button_interface__action__PushButton_SendGoal_Request * data = NULL;
  if (size) {
    data = (push_button_interface__action__PushButton_SendGoal_Request *)calloc(size, sizeof(push_button_interface__action__PushButton_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = push_button_interface__action__PushButton_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        push_button_interface__action__PushButton_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
push_button_interface__action__PushButton_SendGoal_Request__Sequence__fini(push_button_interface__action__PushButton_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      push_button_interface__action__PushButton_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

push_button_interface__action__PushButton_SendGoal_Request__Sequence *
push_button_interface__action__PushButton_SendGoal_Request__Sequence__create(size_t size)
{
  push_button_interface__action__PushButton_SendGoal_Request__Sequence * array = (push_button_interface__action__PushButton_SendGoal_Request__Sequence *)malloc(sizeof(push_button_interface__action__PushButton_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = push_button_interface__action__PushButton_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
push_button_interface__action__PushButton_SendGoal_Request__Sequence__destroy(push_button_interface__action__PushButton_SendGoal_Request__Sequence * array)
{
  if (array) {
    push_button_interface__action__PushButton_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
push_button_interface__action__PushButton_SendGoal_Response__init(push_button_interface__action__PushButton_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    push_button_interface__action__PushButton_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
push_button_interface__action__PushButton_SendGoal_Response__fini(push_button_interface__action__PushButton_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

push_button_interface__action__PushButton_SendGoal_Response *
push_button_interface__action__PushButton_SendGoal_Response__create()
{
  push_button_interface__action__PushButton_SendGoal_Response * msg = (push_button_interface__action__PushButton_SendGoal_Response *)malloc(sizeof(push_button_interface__action__PushButton_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(push_button_interface__action__PushButton_SendGoal_Response));
  bool success = push_button_interface__action__PushButton_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
push_button_interface__action__PushButton_SendGoal_Response__destroy(push_button_interface__action__PushButton_SendGoal_Response * msg)
{
  if (msg) {
    push_button_interface__action__PushButton_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
push_button_interface__action__PushButton_SendGoal_Response__Sequence__init(push_button_interface__action__PushButton_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  push_button_interface__action__PushButton_SendGoal_Response * data = NULL;
  if (size) {
    data = (push_button_interface__action__PushButton_SendGoal_Response *)calloc(size, sizeof(push_button_interface__action__PushButton_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = push_button_interface__action__PushButton_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        push_button_interface__action__PushButton_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
push_button_interface__action__PushButton_SendGoal_Response__Sequence__fini(push_button_interface__action__PushButton_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      push_button_interface__action__PushButton_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

push_button_interface__action__PushButton_SendGoal_Response__Sequence *
push_button_interface__action__PushButton_SendGoal_Response__Sequence__create(size_t size)
{
  push_button_interface__action__PushButton_SendGoal_Response__Sequence * array = (push_button_interface__action__PushButton_SendGoal_Response__Sequence *)malloc(sizeof(push_button_interface__action__PushButton_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = push_button_interface__action__PushButton_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
push_button_interface__action__PushButton_SendGoal_Response__Sequence__destroy(push_button_interface__action__PushButton_SendGoal_Response__Sequence * array)
{
  if (array) {
    push_button_interface__action__PushButton_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
push_button_interface__action__PushButton_GetResult_Request__init(push_button_interface__action__PushButton_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    push_button_interface__action__PushButton_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
push_button_interface__action__PushButton_GetResult_Request__fini(push_button_interface__action__PushButton_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

push_button_interface__action__PushButton_GetResult_Request *
push_button_interface__action__PushButton_GetResult_Request__create()
{
  push_button_interface__action__PushButton_GetResult_Request * msg = (push_button_interface__action__PushButton_GetResult_Request *)malloc(sizeof(push_button_interface__action__PushButton_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(push_button_interface__action__PushButton_GetResult_Request));
  bool success = push_button_interface__action__PushButton_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
push_button_interface__action__PushButton_GetResult_Request__destroy(push_button_interface__action__PushButton_GetResult_Request * msg)
{
  if (msg) {
    push_button_interface__action__PushButton_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
push_button_interface__action__PushButton_GetResult_Request__Sequence__init(push_button_interface__action__PushButton_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  push_button_interface__action__PushButton_GetResult_Request * data = NULL;
  if (size) {
    data = (push_button_interface__action__PushButton_GetResult_Request *)calloc(size, sizeof(push_button_interface__action__PushButton_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = push_button_interface__action__PushButton_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        push_button_interface__action__PushButton_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
push_button_interface__action__PushButton_GetResult_Request__Sequence__fini(push_button_interface__action__PushButton_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      push_button_interface__action__PushButton_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

push_button_interface__action__PushButton_GetResult_Request__Sequence *
push_button_interface__action__PushButton_GetResult_Request__Sequence__create(size_t size)
{
  push_button_interface__action__PushButton_GetResult_Request__Sequence * array = (push_button_interface__action__PushButton_GetResult_Request__Sequence *)malloc(sizeof(push_button_interface__action__PushButton_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = push_button_interface__action__PushButton_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
push_button_interface__action__PushButton_GetResult_Request__Sequence__destroy(push_button_interface__action__PushButton_GetResult_Request__Sequence * array)
{
  if (array) {
    push_button_interface__action__PushButton_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "push_button_interface/action/detail/push_button__functions.h"

bool
push_button_interface__action__PushButton_GetResult_Response__init(push_button_interface__action__PushButton_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!push_button_interface__action__PushButton_Result__init(&msg->result)) {
    push_button_interface__action__PushButton_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
push_button_interface__action__PushButton_GetResult_Response__fini(push_button_interface__action__PushButton_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  push_button_interface__action__PushButton_Result__fini(&msg->result);
}

push_button_interface__action__PushButton_GetResult_Response *
push_button_interface__action__PushButton_GetResult_Response__create()
{
  push_button_interface__action__PushButton_GetResult_Response * msg = (push_button_interface__action__PushButton_GetResult_Response *)malloc(sizeof(push_button_interface__action__PushButton_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(push_button_interface__action__PushButton_GetResult_Response));
  bool success = push_button_interface__action__PushButton_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
push_button_interface__action__PushButton_GetResult_Response__destroy(push_button_interface__action__PushButton_GetResult_Response * msg)
{
  if (msg) {
    push_button_interface__action__PushButton_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
push_button_interface__action__PushButton_GetResult_Response__Sequence__init(push_button_interface__action__PushButton_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  push_button_interface__action__PushButton_GetResult_Response * data = NULL;
  if (size) {
    data = (push_button_interface__action__PushButton_GetResult_Response *)calloc(size, sizeof(push_button_interface__action__PushButton_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = push_button_interface__action__PushButton_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        push_button_interface__action__PushButton_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
push_button_interface__action__PushButton_GetResult_Response__Sequence__fini(push_button_interface__action__PushButton_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      push_button_interface__action__PushButton_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

push_button_interface__action__PushButton_GetResult_Response__Sequence *
push_button_interface__action__PushButton_GetResult_Response__Sequence__create(size_t size)
{
  push_button_interface__action__PushButton_GetResult_Response__Sequence * array = (push_button_interface__action__PushButton_GetResult_Response__Sequence *)malloc(sizeof(push_button_interface__action__PushButton_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = push_button_interface__action__PushButton_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
push_button_interface__action__PushButton_GetResult_Response__Sequence__destroy(push_button_interface__action__PushButton_GetResult_Response__Sequence * array)
{
  if (array) {
    push_button_interface__action__PushButton_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "push_button_interface/action/detail/push_button__functions.h"

bool
push_button_interface__action__PushButton_FeedbackMessage__init(push_button_interface__action__PushButton_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    push_button_interface__action__PushButton_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!push_button_interface__action__PushButton_Feedback__init(&msg->feedback)) {
    push_button_interface__action__PushButton_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
push_button_interface__action__PushButton_FeedbackMessage__fini(push_button_interface__action__PushButton_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  push_button_interface__action__PushButton_Feedback__fini(&msg->feedback);
}

push_button_interface__action__PushButton_FeedbackMessage *
push_button_interface__action__PushButton_FeedbackMessage__create()
{
  push_button_interface__action__PushButton_FeedbackMessage * msg = (push_button_interface__action__PushButton_FeedbackMessage *)malloc(sizeof(push_button_interface__action__PushButton_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(push_button_interface__action__PushButton_FeedbackMessage));
  bool success = push_button_interface__action__PushButton_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
push_button_interface__action__PushButton_FeedbackMessage__destroy(push_button_interface__action__PushButton_FeedbackMessage * msg)
{
  if (msg) {
    push_button_interface__action__PushButton_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
push_button_interface__action__PushButton_FeedbackMessage__Sequence__init(push_button_interface__action__PushButton_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  push_button_interface__action__PushButton_FeedbackMessage * data = NULL;
  if (size) {
    data = (push_button_interface__action__PushButton_FeedbackMessage *)calloc(size, sizeof(push_button_interface__action__PushButton_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = push_button_interface__action__PushButton_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        push_button_interface__action__PushButton_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
push_button_interface__action__PushButton_FeedbackMessage__Sequence__fini(push_button_interface__action__PushButton_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      push_button_interface__action__PushButton_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

push_button_interface__action__PushButton_FeedbackMessage__Sequence *
push_button_interface__action__PushButton_FeedbackMessage__Sequence__create(size_t size)
{
  push_button_interface__action__PushButton_FeedbackMessage__Sequence * array = (push_button_interface__action__PushButton_FeedbackMessage__Sequence *)malloc(sizeof(push_button_interface__action__PushButton_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = push_button_interface__action__PushButton_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
push_button_interface__action__PushButton_FeedbackMessage__Sequence__destroy(push_button_interface__action__PushButton_FeedbackMessage__Sequence * array)
{
  if (array) {
    push_button_interface__action__PushButton_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
