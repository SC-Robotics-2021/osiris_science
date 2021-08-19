// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from push_button_interface:msg/PushButton.idl
// generated code does not contain a copyright notice
#include "push_button_interface/msg/detail/push_button__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
push_button_interface__msg__PushButton__init(push_button_interface__msg__PushButton * msg)
{
  if (!msg) {
    return false;
  }
  // collect_sample
  // platform
  // microscope
  // flashlight
  // uv_cam
  return true;
}

void
push_button_interface__msg__PushButton__fini(push_button_interface__msg__PushButton * msg)
{
  if (!msg) {
    return;
  }
  // collect_sample
  // platform
  // microscope
  // flashlight
  // uv_cam
}

push_button_interface__msg__PushButton *
push_button_interface__msg__PushButton__create()
{
  push_button_interface__msg__PushButton * msg = (push_button_interface__msg__PushButton *)malloc(sizeof(push_button_interface__msg__PushButton));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(push_button_interface__msg__PushButton));
  bool success = push_button_interface__msg__PushButton__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
push_button_interface__msg__PushButton__destroy(push_button_interface__msg__PushButton * msg)
{
  if (msg) {
    push_button_interface__msg__PushButton__fini(msg);
  }
  free(msg);
}


bool
push_button_interface__msg__PushButton__Sequence__init(push_button_interface__msg__PushButton__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  push_button_interface__msg__PushButton * data = NULL;
  if (size) {
    data = (push_button_interface__msg__PushButton *)calloc(size, sizeof(push_button_interface__msg__PushButton));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = push_button_interface__msg__PushButton__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        push_button_interface__msg__PushButton__fini(&data[i - 1]);
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
push_button_interface__msg__PushButton__Sequence__fini(push_button_interface__msg__PushButton__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      push_button_interface__msg__PushButton__fini(&array->data[i]);
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

push_button_interface__msg__PushButton__Sequence *
push_button_interface__msg__PushButton__Sequence__create(size_t size)
{
  push_button_interface__msg__PushButton__Sequence * array = (push_button_interface__msg__PushButton__Sequence *)malloc(sizeof(push_button_interface__msg__PushButton__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = push_button_interface__msg__PushButton__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
push_button_interface__msg__PushButton__Sequence__destroy(push_button_interface__msg__PushButton__Sequence * array)
{
  if (array) {
    push_button_interface__msg__PushButton__Sequence__fini(array);
  }
  free(array);
}
