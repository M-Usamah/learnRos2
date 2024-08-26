// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from second_turn_camera_project:srv/SecndProjectTurnCamer.idl
// generated code does not contain a copyright notice

#ifndef SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "second_turn_camera_project/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "second_turn_camera_project/srv/detail/secnd_project_turn_camer__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace second_turn_camera_project
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
cdr_serialize(
  const second_turn_camera_project::srv::SecndProjectTurnCamer_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  second_turn_camera_project::srv::SecndProjectTurnCamer_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
get_serialized_size(
  const second_turn_camera_project::srv::SecndProjectTurnCamer_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
max_serialized_size_SecndProjectTurnCamer_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace second_turn_camera_project

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, second_turn_camera_project, srv, SecndProjectTurnCamer_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "second_turn_camera_project/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "second_turn_camera_project/srv/detail/secnd_project_turn_camer__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace second_turn_camera_project
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
cdr_serialize(
  const second_turn_camera_project::srv::SecndProjectTurnCamer_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  second_turn_camera_project::srv::SecndProjectTurnCamer_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
get_serialized_size(
  const second_turn_camera_project::srv::SecndProjectTurnCamer_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
max_serialized_size_SecndProjectTurnCamer_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace second_turn_camera_project

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, second_turn_camera_project, srv, SecndProjectTurnCamer_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "second_turn_camera_project/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, second_turn_camera_project, srv, SecndProjectTurnCamer)();

#ifdef __cplusplus
}
#endif

#endif  // SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
