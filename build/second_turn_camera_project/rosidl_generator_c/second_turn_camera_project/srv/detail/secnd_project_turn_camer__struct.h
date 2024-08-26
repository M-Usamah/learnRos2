// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from second_turn_camera_project:srv/SecndProjectTurnCamer.idl
// generated code does not contain a copyright notice

#ifndef SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__STRUCT_H_
#define SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SecndProjectTurnCamer in the package second_turn_camera_project.
typedef struct second_turn_camera_project__srv__SecndProjectTurnCamer_Request
{
  float degree_turn;
} second_turn_camera_project__srv__SecndProjectTurnCamer_Request;

// Struct for a sequence of second_turn_camera_project__srv__SecndProjectTurnCamer_Request.
typedef struct second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence
{
  second_turn_camera_project__srv__SecndProjectTurnCamer_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/SecndProjectTurnCamer in the package second_turn_camera_project.
typedef struct second_turn_camera_project__srv__SecndProjectTurnCamer_Response
{
  sensor_msgs__msg__Image image;
} second_turn_camera_project__srv__SecndProjectTurnCamer_Response;

// Struct for a sequence of second_turn_camera_project__srv__SecndProjectTurnCamer_Response.
typedef struct second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence
{
  second_turn_camera_project__srv__SecndProjectTurnCamer_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__STRUCT_H_
