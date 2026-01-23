// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/LimbCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/limb_command.hpp"


#ifndef INTERFACES__MSG__DETAIL__LIMB_COMMAND__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__LIMB_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/limb_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_LimbCommand_vel
{
public:
  explicit Init_LimbCommand_vel(::interfaces::msg::LimbCommand & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::LimbCommand vel(::interfaces::msg::LimbCommand::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::LimbCommand msg_;
};

class Init_LimbCommand_pos
{
public:
  Init_LimbCommand_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimbCommand_vel pos(::interfaces::msg::LimbCommand::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_LimbCommand_vel(msg_);
  }

private:
  ::interfaces::msg::LimbCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::LimbCommand>()
{
  return interfaces::msg::builder::Init_LimbCommand_pos();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__LIMB_COMMAND__BUILDER_HPP_
