// generated from
// rosidl_typesupport_introspection_c/resource/rosidl_typesupport_introspection_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef SECOND_TURN_CAMERA_PROJECT__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
#define SECOND_TURN_CAMERA_PROJECT__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_turn_camera_project __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_second_turn_camera_project __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_turn_camera_project __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_second_turn_camera_project __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_INTROSPECTION_C_BUILDING_DLL_second_turn_camera_project
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_second_turn_camera_project ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_turn_camera_project
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_second_turn_camera_project ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_second_turn_camera_project
  #endif
#else
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_second_turn_camera_project __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_second_turn_camera_project
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_second_turn_camera_project __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_second_turn_camera_project
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // SECOND_TURN_CAMERA_PROJECT__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
