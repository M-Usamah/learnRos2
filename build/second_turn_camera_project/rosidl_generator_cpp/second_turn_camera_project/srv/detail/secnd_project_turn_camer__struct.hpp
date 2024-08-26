// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from second_turn_camera_project:srv/SecndProjectTurnCamer.idl
// generated code does not contain a copyright notice

#ifndef SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__STRUCT_HPP_
#define SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__second_turn_camera_project__srv__SecndProjectTurnCamer_Request __attribute__((deprecated))
#else
# define DEPRECATED__second_turn_camera_project__srv__SecndProjectTurnCamer_Request __declspec(deprecated)
#endif

namespace second_turn_camera_project
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SecndProjectTurnCamer_Request_
{
  using Type = SecndProjectTurnCamer_Request_<ContainerAllocator>;

  explicit SecndProjectTurnCamer_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->degree_turn = 0.0f;
    }
  }

  explicit SecndProjectTurnCamer_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->degree_turn = 0.0f;
    }
  }

  // field types and members
  using _degree_turn_type =
    float;
  _degree_turn_type degree_turn;

  // setters for named parameter idiom
  Type & set__degree_turn(
    const float & _arg)
  {
    this->degree_turn = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    second_turn_camera_project::srv::SecndProjectTurnCamer_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const second_turn_camera_project::srv::SecndProjectTurnCamer_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      second_turn_camera_project::srv::SecndProjectTurnCamer_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      second_turn_camera_project::srv::SecndProjectTurnCamer_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__second_turn_camera_project__srv__SecndProjectTurnCamer_Request
    std::shared_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__second_turn_camera_project__srv__SecndProjectTurnCamer_Request
    std::shared_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SecndProjectTurnCamer_Request_ & other) const
  {
    if (this->degree_turn != other.degree_turn) {
      return false;
    }
    return true;
  }
  bool operator!=(const SecndProjectTurnCamer_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SecndProjectTurnCamer_Request_

// alias to use template instance with default allocator
using SecndProjectTurnCamer_Request =
  second_turn_camera_project::srv::SecndProjectTurnCamer_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace second_turn_camera_project


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__second_turn_camera_project__srv__SecndProjectTurnCamer_Response __attribute__((deprecated))
#else
# define DEPRECATED__second_turn_camera_project__srv__SecndProjectTurnCamer_Response __declspec(deprecated)
#endif

namespace second_turn_camera_project
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SecndProjectTurnCamer_Response_
{
  using Type = SecndProjectTurnCamer_Response_<ContainerAllocator>;

  explicit SecndProjectTurnCamer_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit SecndProjectTurnCamer_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    second_turn_camera_project::srv::SecndProjectTurnCamer_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const second_turn_camera_project::srv::SecndProjectTurnCamer_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      second_turn_camera_project::srv::SecndProjectTurnCamer_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      second_turn_camera_project::srv::SecndProjectTurnCamer_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__second_turn_camera_project__srv__SecndProjectTurnCamer_Response
    std::shared_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__second_turn_camera_project__srv__SecndProjectTurnCamer_Response
    std::shared_ptr<second_turn_camera_project::srv::SecndProjectTurnCamer_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SecndProjectTurnCamer_Response_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const SecndProjectTurnCamer_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SecndProjectTurnCamer_Response_

// alias to use template instance with default allocator
using SecndProjectTurnCamer_Response =
  second_turn_camera_project::srv::SecndProjectTurnCamer_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace second_turn_camera_project

namespace second_turn_camera_project
{

namespace srv
{

struct SecndProjectTurnCamer
{
  using Request = second_turn_camera_project::srv::SecndProjectTurnCamer_Request;
  using Response = second_turn_camera_project::srv::SecndProjectTurnCamer_Response;
};

}  // namespace srv

}  // namespace second_turn_camera_project

#endif  // SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__STRUCT_HPP_
