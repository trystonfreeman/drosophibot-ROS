// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/MotorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/motor_data.hpp"


#ifndef INTERFACES__MSG__DETAIL__MOTOR_DATA__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__MOTOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__MotorData __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__MotorData __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorData_
{
  using Type = MotorData_<ContainerAllocator>;

  explicit MotorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 22>::iterator, int32_t>(this->pos.begin(), this->pos.end(), 0l);
      std::fill<typename std::array<int32_t, 22>::iterator, int32_t>(this->vel.begin(), this->vel.end(), 0l);
      std::fill<typename std::array<int32_t, 22>::iterator, int32_t>(this->torque.begin(), this->torque.end(), 0l);
    }
  }

  explicit MotorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_alloc),
    vel(_alloc),
    torque(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 22>::iterator, int32_t>(this->pos.begin(), this->pos.end(), 0l);
      std::fill<typename std::array<int32_t, 22>::iterator, int32_t>(this->vel.begin(), this->vel.end(), 0l);
      std::fill<typename std::array<int32_t, 22>::iterator, int32_t>(this->torque.begin(), this->torque.end(), 0l);
    }
  }

  // field types and members
  using _pos_type =
    std::array<int32_t, 22>;
  _pos_type pos;
  using _vel_type =
    std::array<int32_t, 22>;
  _vel_type vel;
  using _torque_type =
    std::array<int32_t, 22>;
  _torque_type torque;

  // setters for named parameter idiom
  Type & set__pos(
    const std::array<int32_t, 22> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__vel(
    const std::array<int32_t, 22> & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__torque(
    const std::array<int32_t, 22> & _arg)
  {
    this->torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::MotorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::MotorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::MotorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::MotorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::MotorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::MotorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::MotorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::MotorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::MotorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::MotorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__MotorData
    std::shared_ptr<interfaces::msg::MotorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__MotorData
    std::shared_ptr<interfaces::msg::MotorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorData_ & other) const
  {
    if (this->pos != other.pos) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorData_

// alias to use template instance with default allocator
using MotorData =
  interfaces::msg::MotorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__MOTOR_DATA__STRUCT_HPP_
