// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/DescendingCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/descending_command.hpp"


#ifndef INTERFACES__MSG__DETAIL__DESCENDING_COMMAND__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__DESCENDING_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__DescendingCommand __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__DescendingCommand __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DescendingCommand_
{
  using Type = DescendingCommand_<ContainerAllocator>;

  explicit DescendingCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0f;
    }
  }

  explicit DescendingCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0f;
    }
  }

  // field types and members
  using _heading_type =
    float;
  _heading_type heading;

  // setters for named parameter idiom
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::DescendingCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::DescendingCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::DescendingCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::DescendingCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::DescendingCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::DescendingCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::DescendingCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::DescendingCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::DescendingCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::DescendingCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__DescendingCommand
    std::shared_ptr<interfaces::msg::DescendingCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__DescendingCommand
    std::shared_ptr<interfaces::msg::DescendingCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DescendingCommand_ & other) const
  {
    if (this->heading != other.heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const DescendingCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DescendingCommand_

// alias to use template instance with default allocator
using DescendingCommand =
  interfaces::msg::DescendingCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__DESCENDING_COMMAND__STRUCT_HPP_
