// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from first_rpm_project:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice

#ifndef FIRST_RPM_PROJECT__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_
#define FIRST_RPM_PROJECT__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "first_rpm_project/srv/detail/odd_even_check__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace first_rpm_project
{

namespace srv
{

namespace builder
{

class Init_OddEvenCheck_Request_number
{
public:
  Init_OddEvenCheck_Request_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::first_rpm_project::srv::OddEvenCheck_Request number(::first_rpm_project::srv::OddEvenCheck_Request::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_rpm_project::srv::OddEvenCheck_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_rpm_project::srv::OddEvenCheck_Request>()
{
  return first_rpm_project::srv::builder::Init_OddEvenCheck_Request_number();
}

}  // namespace first_rpm_project


namespace first_rpm_project
{

namespace srv
{

namespace builder
{

class Init_OddEvenCheck_Response_decision
{
public:
  Init_OddEvenCheck_Response_decision()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::first_rpm_project::srv::OddEvenCheck_Response decision(::first_rpm_project::srv::OddEvenCheck_Response::_decision_type arg)
  {
    msg_.decision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_rpm_project::srv::OddEvenCheck_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_rpm_project::srv::OddEvenCheck_Response>()
{
  return first_rpm_project::srv::builder::Init_OddEvenCheck_Response_decision();
}

}  // namespace first_rpm_project

#endif  // FIRST_RPM_PROJECT__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_
