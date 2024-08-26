// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from first_rpm_project:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice

#ifndef FIRST_RPM_PROJECT__SRV__DETAIL__ODD_EVEN_CHECK__TRAITS_HPP_
#define FIRST_RPM_PROJECT__SRV__DETAIL__ODD_EVEN_CHECK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "first_rpm_project/srv/detail/odd_even_check__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace first_rpm_project
{

namespace srv
{

inline void to_flow_style_yaml(
  const OddEvenCheck_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OddEvenCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OddEvenCheck_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace first_rpm_project

namespace rosidl_generator_traits
{

[[deprecated("use first_rpm_project::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const first_rpm_project::srv::OddEvenCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  first_rpm_project::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use first_rpm_project::srv::to_yaml() instead")]]
inline std::string to_yaml(const first_rpm_project::srv::OddEvenCheck_Request & msg)
{
  return first_rpm_project::srv::to_yaml(msg);
}

template<>
inline const char * data_type<first_rpm_project::srv::OddEvenCheck_Request>()
{
  return "first_rpm_project::srv::OddEvenCheck_Request";
}

template<>
inline const char * name<first_rpm_project::srv::OddEvenCheck_Request>()
{
  return "first_rpm_project/srv/OddEvenCheck_Request";
}

template<>
struct has_fixed_size<first_rpm_project::srv::OddEvenCheck_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<first_rpm_project::srv::OddEvenCheck_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<first_rpm_project::srv::OddEvenCheck_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace first_rpm_project
{

namespace srv
{

inline void to_flow_style_yaml(
  const OddEvenCheck_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: decision
  {
    out << "decision: ";
    rosidl_generator_traits::value_to_yaml(msg.decision, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OddEvenCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: decision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decision: ";
    rosidl_generator_traits::value_to_yaml(msg.decision, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OddEvenCheck_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace first_rpm_project

namespace rosidl_generator_traits
{

[[deprecated("use first_rpm_project::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const first_rpm_project::srv::OddEvenCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  first_rpm_project::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use first_rpm_project::srv::to_yaml() instead")]]
inline std::string to_yaml(const first_rpm_project::srv::OddEvenCheck_Response & msg)
{
  return first_rpm_project::srv::to_yaml(msg);
}

template<>
inline const char * data_type<first_rpm_project::srv::OddEvenCheck_Response>()
{
  return "first_rpm_project::srv::OddEvenCheck_Response";
}

template<>
inline const char * name<first_rpm_project::srv::OddEvenCheck_Response>()
{
  return "first_rpm_project/srv/OddEvenCheck_Response";
}

template<>
struct has_fixed_size<first_rpm_project::srv::OddEvenCheck_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<first_rpm_project::srv::OddEvenCheck_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<first_rpm_project::srv::OddEvenCheck_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<first_rpm_project::srv::OddEvenCheck>()
{
  return "first_rpm_project::srv::OddEvenCheck";
}

template<>
inline const char * name<first_rpm_project::srv::OddEvenCheck>()
{
  return "first_rpm_project/srv/OddEvenCheck";
}

template<>
struct has_fixed_size<first_rpm_project::srv::OddEvenCheck>
  : std::integral_constant<
    bool,
    has_fixed_size<first_rpm_project::srv::OddEvenCheck_Request>::value &&
    has_fixed_size<first_rpm_project::srv::OddEvenCheck_Response>::value
  >
{
};

template<>
struct has_bounded_size<first_rpm_project::srv::OddEvenCheck>
  : std::integral_constant<
    bool,
    has_bounded_size<first_rpm_project::srv::OddEvenCheck_Request>::value &&
    has_bounded_size<first_rpm_project::srv::OddEvenCheck_Response>::value
  >
{
};

template<>
struct is_service<first_rpm_project::srv::OddEvenCheck>
  : std::true_type
{
};

template<>
struct is_service_request<first_rpm_project::srv::OddEvenCheck_Request>
  : std::true_type
{
};

template<>
struct is_service_response<first_rpm_project::srv::OddEvenCheck_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FIRST_RPM_PROJECT__SRV__DETAIL__ODD_EVEN_CHECK__TRAITS_HPP_
