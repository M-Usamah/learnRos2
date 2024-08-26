// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from first_rpm_project:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice

#ifndef FIRST_RPM_PROJECT__SRV__DETAIL__ODD_EVEN_CHECK__STRUCT_H_
#define FIRST_RPM_PROJECT__SRV__DETAIL__ODD_EVEN_CHECK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/OddEvenCheck in the package first_rpm_project.
typedef struct first_rpm_project__srv__OddEvenCheck_Request
{
  int64_t number;
} first_rpm_project__srv__OddEvenCheck_Request;

// Struct for a sequence of first_rpm_project__srv__OddEvenCheck_Request.
typedef struct first_rpm_project__srv__OddEvenCheck_Request__Sequence
{
  first_rpm_project__srv__OddEvenCheck_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_rpm_project__srv__OddEvenCheck_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'decision'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/OddEvenCheck in the package first_rpm_project.
typedef struct first_rpm_project__srv__OddEvenCheck_Response
{
  rosidl_runtime_c__String decision;
} first_rpm_project__srv__OddEvenCheck_Response;

// Struct for a sequence of first_rpm_project__srv__OddEvenCheck_Response.
typedef struct first_rpm_project__srv__OddEvenCheck_Response__Sequence
{
  first_rpm_project__srv__OddEvenCheck_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_rpm_project__srv__OddEvenCheck_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRST_RPM_PROJECT__SRV__DETAIL__ODD_EVEN_CHECK__STRUCT_H_
