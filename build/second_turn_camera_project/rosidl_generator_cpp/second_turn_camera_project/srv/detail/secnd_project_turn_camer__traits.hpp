// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from second_turn_camera_project:srv/SecndProjectTurnCamer.idl
// generated code does not contain a copyright notice

#ifndef SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__TRAITS_HPP_
#define SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "second_turn_camera_project/srv/detail/secnd_project_turn_camer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace second_turn_camera_project
{

namespace srv
{

inline void to_flow_style_yaml(
  const SecndProjectTurnCamer_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: degree_turn
  {
    out << "degree_turn: ";
    rosidl_generator_traits::value_to_yaml(msg.degree_turn, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SecndProjectTurnCamer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: degree_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "degree_turn: ";
    rosidl_generator_traits::value_to_yaml(msg.degree_turn, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SecndProjectTurnCamer_Request & msg, bool use_flow_style = false)
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

}  // namespace second_turn_camera_project

namespace rosidl_generator_traits
{

[[deprecated("use second_turn_camera_project::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const second_turn_camera_project::srv::SecndProjectTurnCamer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  second_turn_camera_project::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use second_turn_camera_project::srv::to_yaml() instead")]]
inline std::string to_yaml(const second_turn_camera_project::srv::SecndProjectTurnCamer_Request & msg)
{
  return second_turn_camera_project::srv::to_yaml(msg);
}

template<>
inline const char * data_type<second_turn_camera_project::srv::SecndProjectTurnCamer_Request>()
{
  return "second_turn_camera_project::srv::SecndProjectTurnCamer_Request";
}

template<>
inline const char * name<second_turn_camera_project::srv::SecndProjectTurnCamer_Request>()
{
  return "second_turn_camera_project/srv/SecndProjectTurnCamer_Request";
}

template<>
struct has_fixed_size<second_turn_camera_project::srv::SecndProjectTurnCamer_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<second_turn_camera_project::srv::SecndProjectTurnCamer_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<second_turn_camera_project::srv::SecndProjectTurnCamer_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace second_turn_camera_project
{

namespace srv
{

inline void to_flow_style_yaml(
  const SecndProjectTurnCamer_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SecndProjectTurnCamer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SecndProjectTurnCamer_Response & msg, bool use_flow_style = false)
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

}  // namespace second_turn_camera_project

namespace rosidl_generator_traits
{

[[deprecated("use second_turn_camera_project::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const second_turn_camera_project::srv::SecndProjectTurnCamer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  second_turn_camera_project::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use second_turn_camera_project::srv::to_yaml() instead")]]
inline std::string to_yaml(const second_turn_camera_project::srv::SecndProjectTurnCamer_Response & msg)
{
  return second_turn_camera_project::srv::to_yaml(msg);
}

template<>
inline const char * data_type<second_turn_camera_project::srv::SecndProjectTurnCamer_Response>()
{
  return "second_turn_camera_project::srv::SecndProjectTurnCamer_Response";
}

template<>
inline const char * name<second_turn_camera_project::srv::SecndProjectTurnCamer_Response>()
{
  return "second_turn_camera_project/srv/SecndProjectTurnCamer_Response";
}

template<>
struct has_fixed_size<second_turn_camera_project::srv::SecndProjectTurnCamer_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<second_turn_camera_project::srv::SecndProjectTurnCamer_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<second_turn_camera_project::srv::SecndProjectTurnCamer_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<second_turn_camera_project::srv::SecndProjectTurnCamer>()
{
  return "second_turn_camera_project::srv::SecndProjectTurnCamer";
}

template<>
inline const char * name<second_turn_camera_project::srv::SecndProjectTurnCamer>()
{
  return "second_turn_camera_project/srv/SecndProjectTurnCamer";
}

template<>
struct has_fixed_size<second_turn_camera_project::srv::SecndProjectTurnCamer>
  : std::integral_constant<
    bool,
    has_fixed_size<second_turn_camera_project::srv::SecndProjectTurnCamer_Request>::value &&
    has_fixed_size<second_turn_camera_project::srv::SecndProjectTurnCamer_Response>::value
  >
{
};

template<>
struct has_bounded_size<second_turn_camera_project::srv::SecndProjectTurnCamer>
  : std::integral_constant<
    bool,
    has_bounded_size<second_turn_camera_project::srv::SecndProjectTurnCamer_Request>::value &&
    has_bounded_size<second_turn_camera_project::srv::SecndProjectTurnCamer_Response>::value
  >
{
};

template<>
struct is_service<second_turn_camera_project::srv::SecndProjectTurnCamer>
  : std::true_type
{
};

template<>
struct is_service_request<second_turn_camera_project::srv::SecndProjectTurnCamer_Request>
  : std::true_type
{
};

template<>
struct is_service_response<second_turn_camera_project::srv::SecndProjectTurnCamer_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__TRAITS_HPP_
