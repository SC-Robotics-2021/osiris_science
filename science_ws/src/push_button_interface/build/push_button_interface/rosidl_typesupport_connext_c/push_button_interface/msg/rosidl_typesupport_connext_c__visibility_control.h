// generated from
// rosidl_typesupport_connext_c/resource/rosidl_typesupport_connext_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef PUSH_BUTTON_INTERFACE__MSG__ROSIDL_TYPESUPPORT_CONNEXT_C__VISIBILITY_CONTROL_H_
#define PUSH_BUTTON_INTERFACE__MSG__ROSIDL_TYPESUPPORT_CONNEXT_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_EXPORT_push_button_interface __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_push_button_interface __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_EXPORT_push_button_interface __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_push_button_interface __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_CONNEXT_C_BUILDING_DLL_push_button_interface
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_PUBLIC_push_button_interface ROSIDL_TYPESUPPORT_CONNEXT_C_EXPORT_push_button_interface
  #else
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_PUBLIC_push_button_interface ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_push_button_interface
  #endif
#else
  #define ROSIDL_TYPESUPPORT_CONNEXT_C_EXPORT_push_button_interface __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_push_button_interface
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_PUBLIC_push_button_interface __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_CONNEXT_C_PUBLIC_push_button_interface
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // PUSH_BUTTON_INTERFACE__MSG__ROSIDL_TYPESUPPORT_CONNEXT_C__VISIBILITY_CONTROL_H_
