// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/DescendingCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/descending_command.hpp"


#ifndef INTERFACES__MSG__DETAIL__DESCENDING_COMMAND__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__DESCENDING_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/descending_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DescendingCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DescendingCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DescendingCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::DescendingCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::DescendingCommand & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::DescendingCommand>()
{
  return "interfaces::msg::DescendingCommand";
}

template<>
inline const char * name<interfaces::msg::DescendingCommand>()
{
  return "interfaces/msg/DescendingCommand";
}

template<>
struct has_fixed_size<interfaces::msg::DescendingCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::msg::DescendingCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::msg::DescendingCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__DESCENDING_COMMAND__TRAITS_HPP_
