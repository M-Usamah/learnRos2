// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from second_turn_camera_project:srv/SecndProjectTurnCamer.idl
// generated code does not contain a copyright notice
#include "second_turn_camera_project/srv/detail/secnd_project_turn_camer__rosidl_typesupport_fastrtps_cpp.hpp"
#include "second_turn_camera_project/srv/detail/secnd_project_turn_camer__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: degree_turn
  cdr << ros_message.degree_turn;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  second_turn_camera_project::srv::SecndProjectTurnCamer_Request & ros_message)
{
  // Member: degree_turn
  cdr >> ros_message.degree_turn;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
get_serialized_size(
  const second_turn_camera_project::srv::SecndProjectTurnCamer_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: degree_turn
  {
    size_t item_size = sizeof(ros_message.degree_turn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
max_serialized_size_SecndProjectTurnCamer_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: degree_turn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = second_turn_camera_project::srv::SecndProjectTurnCamer_Request;
    is_plain =
      (
      offsetof(DataType, degree_turn) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SecndProjectTurnCamer_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const second_turn_camera_project::srv::SecndProjectTurnCamer_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SecndProjectTurnCamer_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<second_turn_camera_project::srv::SecndProjectTurnCamer_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SecndProjectTurnCamer_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const second_turn_camera_project::srv::SecndProjectTurnCamer_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SecndProjectTurnCamer_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SecndProjectTurnCamer_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SecndProjectTurnCamer_Request__callbacks = {
  "second_turn_camera_project::srv",
  "SecndProjectTurnCamer_Request",
  _SecndProjectTurnCamer_Request__cdr_serialize,
  _SecndProjectTurnCamer_Request__cdr_deserialize,
  _SecndProjectTurnCamer_Request__get_serialized_size,
  _SecndProjectTurnCamer_Request__max_serialized_size
};

static rosidl_message_type_support_t _SecndProjectTurnCamer_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SecndProjectTurnCamer_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace second_turn_camera_project

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_second_turn_camera_project
const rosidl_message_type_support_t *
get_message_type_support_handle<second_turn_camera_project::srv::SecndProjectTurnCamer_Request>()
{
  return &second_turn_camera_project::srv::typesupport_fastrtps_cpp::_SecndProjectTurnCamer_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, second_turn_camera_project, srv, SecndProjectTurnCamer_Request)() {
  return &second_turn_camera_project::srv::typesupport_fastrtps_cpp::_SecndProjectTurnCamer_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::Image &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::Image &);
size_t get_serialized_size(
  const sensor_msgs::msg::Image &,
  size_t current_alignment);
size_t
max_serialized_size_Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: image
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.image,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  second_turn_camera_project::srv::SecndProjectTurnCamer_Response & ros_message)
{
  // Member: image
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.image);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
get_serialized_size(
  const second_turn_camera_project::srv::SecndProjectTurnCamer_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: image

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.image, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_second_turn_camera_project
max_serialized_size_SecndProjectTurnCamer_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: image
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = second_turn_camera_project::srv::SecndProjectTurnCamer_Response;
    is_plain =
      (
      offsetof(DataType, image) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SecndProjectTurnCamer_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const second_turn_camera_project::srv::SecndProjectTurnCamer_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SecndProjectTurnCamer_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<second_turn_camera_project::srv::SecndProjectTurnCamer_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SecndProjectTurnCamer_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const second_turn_camera_project::srv::SecndProjectTurnCamer_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SecndProjectTurnCamer_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SecndProjectTurnCamer_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SecndProjectTurnCamer_Response__callbacks = {
  "second_turn_camera_project::srv",
  "SecndProjectTurnCamer_Response",
  _SecndProjectTurnCamer_Response__cdr_serialize,
  _SecndProjectTurnCamer_Response__cdr_deserialize,
  _SecndProjectTurnCamer_Response__get_serialized_size,
  _SecndProjectTurnCamer_Response__max_serialized_size
};

static rosidl_message_type_support_t _SecndProjectTurnCamer_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SecndProjectTurnCamer_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace second_turn_camera_project

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_second_turn_camera_project
const rosidl_message_type_support_t *
get_message_type_support_handle<second_turn_camera_project::srv::SecndProjectTurnCamer_Response>()
{
  return &second_turn_camera_project::srv::typesupport_fastrtps_cpp::_SecndProjectTurnCamer_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, second_turn_camera_project, srv, SecndProjectTurnCamer_Response)() {
  return &second_turn_camera_project::srv::typesupport_fastrtps_cpp::_SecndProjectTurnCamer_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace second_turn_camera_project
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SecndProjectTurnCamer__callbacks = {
  "second_turn_camera_project::srv",
  "SecndProjectTurnCamer",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, second_turn_camera_project, srv, SecndProjectTurnCamer_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, second_turn_camera_project, srv, SecndProjectTurnCamer_Response)(),
};

static rosidl_service_type_support_t _SecndProjectTurnCamer__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SecndProjectTurnCamer__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace second_turn_camera_project

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_second_turn_camera_project
const rosidl_service_type_support_t *
get_service_type_support_handle<second_turn_camera_project::srv::SecndProjectTurnCamer>()
{
  return &second_turn_camera_project::srv::typesupport_fastrtps_cpp::_SecndProjectTurnCamer__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, second_turn_camera_project, srv, SecndProjectTurnCamer)() {
  return &second_turn_camera_project::srv::typesupport_fastrtps_cpp::_SecndProjectTurnCamer__handle;
}

#ifdef __cplusplus
}
#endif
