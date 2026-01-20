// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/motor_command.hpp"


#ifndef INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_pos
{
public:
  explicit Init_MotorCommand_pos(::interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::MotorCommand pos(::interfaces::msg::MotorCommand::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_vel
{
public:
  Init_MotorCommand_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_pos vel(::interfaces::msg::MotorCommand::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_MotorCommand_pos(msg_);
  }

private:
  ::interfaces::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::MotorCommand>()
{
  return interfaces::msg::builder::Init_MotorCommand_vel();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
