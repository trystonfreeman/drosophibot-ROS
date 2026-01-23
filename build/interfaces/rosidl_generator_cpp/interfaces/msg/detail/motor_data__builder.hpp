// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/MotorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/motor_data.hpp"


#ifndef INTERFACES__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/motor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorData_torque
{
public:
  explicit Init_MotorData_torque(::interfaces::msg::MotorData & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::MotorData torque(::interfaces::msg::MotorData::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::MotorData msg_;
};

class Init_MotorData_vel
{
public:
  explicit Init_MotorData_vel(::interfaces::msg::MotorData & msg)
  : msg_(msg)
  {}
  Init_MotorData_torque vel(::interfaces::msg::MotorData::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_MotorData_torque(msg_);
  }

private:
  ::interfaces::msg::MotorData msg_;
};

class Init_MotorData_pos
{
public:
  Init_MotorData_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorData_vel pos(::interfaces::msg::MotorData::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_MotorData_vel(msg_);
  }

private:
  ::interfaces::msg::MotorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::MotorData>()
{
  return interfaces::msg::builder::Init_MotorData_pos();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__MOTOR_DATA__BUILDER_HPP_
