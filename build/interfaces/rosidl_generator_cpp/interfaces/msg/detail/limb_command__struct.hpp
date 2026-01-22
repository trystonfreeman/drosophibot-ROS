// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/LimbCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/limb_command.hpp"


#ifndef INTERFACES__MSG__DETAIL__LIMB_COMMAND__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__LIMB_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__LimbCommand __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__LimbCommand __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LimbCommand_
{
  using Type = LimbCommand_<ContainerAllocator>;

  explicit LimbCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LimbCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _pos_type =
    rosidl_runtime_cpp::BoundedVector<float, 4, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _pos_type pos;
  using _vel_type =
    rosidl_runtime_cpp::BoundedVector<float, 4, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _vel_type vel;

  // setters for named parameter idiom
  Type & set__pos(
    const rosidl_runtime_cpp::BoundedVector<float, 4, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__vel(
    const rosidl_runtime_cpp::BoundedVector<float, 4, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::LimbCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::LimbCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::LimbCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::LimbCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::LimbCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::LimbCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::LimbCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::LimbCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::LimbCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::LimbCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__LimbCommand
    std::shared_ptr<interfaces::msg::LimbCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__LimbCommand
    std::shared_ptr<interfaces::msg::LimbCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LimbCommand_ & other) const
  {
    if (this->pos != other.pos) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const LimbCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LimbCommand_

// alias to use template instance with default allocator
using LimbCommand =
  interfaces::msg::LimbCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__LIMB_COMMAND__STRUCT_HPP_
