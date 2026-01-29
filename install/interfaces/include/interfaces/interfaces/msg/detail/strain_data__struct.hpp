// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/StrainData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/strain_data.hpp"


#ifndef INTERFACES__MSG__DETAIL__STRAIN_DATA__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__STRAIN_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__StrainData __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__StrainData __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StrainData_
{
  using Type = StrainData_<ContainerAllocator>;

  explicit StrainData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 36>::iterator, float>(this->strain.begin(), this->strain.end(), 0.0f);
    }
  }

  explicit StrainData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : strain(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 36>::iterator, float>(this->strain.begin(), this->strain.end(), 0.0f);
    }
  }

  // field types and members
  using _strain_type =
    std::array<float, 36>;
  _strain_type strain;

  // setters for named parameter idiom
  Type & set__strain(
    const std::array<float, 36> & _arg)
  {
    this->strain = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::StrainData_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::StrainData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::StrainData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::StrainData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::StrainData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::StrainData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::StrainData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::StrainData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::StrainData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::StrainData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__StrainData
    std::shared_ptr<interfaces::msg::StrainData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__StrainData
    std::shared_ptr<interfaces::msg::StrainData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StrainData_ & other) const
  {
    if (this->strain != other.strain) {
      return false;
    }
    return true;
  }
  bool operator!=(const StrainData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StrainData_

// alias to use template instance with default allocator
using StrainData =
  interfaces::msg::StrainData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__STRAIN_DATA__STRUCT_HPP_
