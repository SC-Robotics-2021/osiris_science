// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from push_button_interface:msg/PushButton.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "push_button_interface/msg/detail/push_button__struct.h"
#include "push_button_interface/msg/detail/push_button__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool push_button_interface__msg__push_button__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("push_button_interface.msg._push_button.PushButton", full_classname_dest, 49) == 0);
  }
  push_button_interface__msg__PushButton * ros_message = _ros_message;
  {  // collect_sample
    PyObject * field = PyObject_GetAttrString(_pymsg, "collect_sample");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->collect_sample = (Py_True == field);
    Py_DECREF(field);
  }
  {  // platform
    PyObject * field = PyObject_GetAttrString(_pymsg, "platform");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->platform = (Py_True == field);
    Py_DECREF(field);
  }
  {  // microscope
    PyObject * field = PyObject_GetAttrString(_pymsg, "microscope");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->microscope = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flashlight
    PyObject * field = PyObject_GetAttrString(_pymsg, "flashlight");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flashlight = (Py_True == field);
    Py_DECREF(field);
  }
  {  // uv_cam
    PyObject * field = PyObject_GetAttrString(_pymsg, "uv_cam");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->uv_cam = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * push_button_interface__msg__push_button__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PushButton */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("push_button_interface.msg._push_button");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PushButton");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  push_button_interface__msg__PushButton * ros_message = (push_button_interface__msg__PushButton *)raw_ros_message;
  {  // collect_sample
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->collect_sample ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collect_sample", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // platform
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->platform ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "platform", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // microscope
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->microscope ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "microscope", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flashlight
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flashlight ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flashlight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uv_cam
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->uv_cam ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uv_cam", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
