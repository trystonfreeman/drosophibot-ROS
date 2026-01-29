// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/StrainData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/strain_data.hpp"


#ifndef INTERFACES__MSG__DETAIL__STRAIN_DATA__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__STRAIN_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/strain_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_StrainData_strain
{
public:
  Init_StrainData_strain()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::msg::StrainData strain(::interfaces::msg::StrainData::_strain_type arg)
  {
    msg_.strain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::StrainData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::StrainData>()
{
  return interfaces::msg::builder::Init_StrainData_strain();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__STRAIN_DATA__BUILDER_HPP_
