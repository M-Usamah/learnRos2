// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from second_turn_camera_project:srv/SecndProjectTurnCamer.idl
// generated code does not contain a copyright notice

#ifndef SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__BUILDER_HPP_
#define SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "second_turn_camera_project/srv/detail/secnd_project_turn_camer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace second_turn_camera_project
{

namespace srv
{

namespace builder
{

class Init_SecndProjectTurnCamer_Request_degree_turn
{
public:
  Init_SecndProjectTurnCamer_Request_degree_turn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::second_turn_camera_project::srv::SecndProjectTurnCamer_Request degree_turn(::second_turn_camera_project::srv::SecndProjectTurnCamer_Request::_degree_turn_type arg)
  {
    msg_.degree_turn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::second_turn_camera_project::srv::SecndProjectTurnCamer_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::second_turn_camera_project::srv::SecndProjectTurnCamer_Request>()
{
  return second_turn_camera_project::srv::builder::Init_SecndProjectTurnCamer_Request_degree_turn();
}

}  // namespace second_turn_camera_project


namespace second_turn_camera_project
{

namespace srv
{

namespace builder
{

class Init_SecndProjectTurnCamer_Response_image
{
public:
  Init_SecndProjectTurnCamer_Response_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::second_turn_camera_project::srv::SecndProjectTurnCamer_Response image(::second_turn_camera_project::srv::SecndProjectTurnCamer_Response::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::second_turn_camera_project::srv::SecndProjectTurnCamer_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::second_turn_camera_project::srv::SecndProjectTurnCamer_Response>()
{
  return second_turn_camera_project::srv::builder::Init_SecndProjectTurnCamer_Response_image();
}

}  // namespace second_turn_camera_project

#endif  // SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__BUILDER_HPP_
