// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/DescendingCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/descending_command.hpp"


#ifndef INTERFACES__MSG__DETAIL__DESCENDING_COMMAND__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__DESCENDING_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/descending_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_DescendingCommand_heading
{
public:
  Init_DescendingCommand_heading()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::msg::DescendingCommand heading(::interfaces::msg::DescendingCommand::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::DescendingCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::DescendingCommand>()
{
  return interfaces::msg::builder::Init_DescendingCommand_heading();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__DESCENDING_COMMAND__BUILDER_HPP_
