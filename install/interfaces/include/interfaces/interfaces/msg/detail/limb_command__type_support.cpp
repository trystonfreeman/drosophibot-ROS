// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/LimbCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces/msg/detail/limb_command__functions.h"
#include "interfaces/msg/detail/limb_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LimbCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::msg::LimbCommand(_init);
}

void LimbCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::msg::LimbCommand *>(message_memory);
  typed_message->~LimbCommand();
}

size_t size_function__LimbCommand__pos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LimbCommand__pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LimbCommand__pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__LimbCommand__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__LimbCommand__pos(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__LimbCommand__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__LimbCommand__pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__LimbCommand__pos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LimbCommand__vel(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LimbCommand__vel(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LimbCommand__vel(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__LimbCommand__vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__LimbCommand__vel(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__LimbCommand__vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__LimbCommand__vel(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__LimbCommand__vel(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LimbCommand_message_member_array[2] = {
  {
    "pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    true,  // is upper bound
    offsetof(interfaces::msg::LimbCommand, pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__LimbCommand__pos,  // size() function pointer
    get_const_function__LimbCommand__pos,  // get_const(index) function pointer
    get_function__LimbCommand__pos,  // get(index) function pointer
    fetch_function__LimbCommand__pos,  // fetch(index, &value) function pointer
    assign_function__LimbCommand__pos,  // assign(index, value) function pointer
    resize_function__LimbCommand__pos  // resize(index) function pointer
  },
  {
    "vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    true,  // is upper bound
    offsetof(interfaces::msg::LimbCommand, vel),  // bytes offset in struct
    nullptr,  // default value
    size_function__LimbCommand__vel,  // size() function pointer
    get_const_function__LimbCommand__vel,  // get_const(index) function pointer
    get_function__LimbCommand__vel,  // get(index) function pointer
    fetch_function__LimbCommand__vel,  // fetch(index, &value) function pointer
    assign_function__LimbCommand__vel,  // assign(index, value) function pointer
    resize_function__LimbCommand__vel  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LimbCommand_message_members = {
  "interfaces::msg",  // message namespace
  "LimbCommand",  // message name
  2,  // number of fields
  sizeof(interfaces::msg::LimbCommand),
  false,  // has_any_key_member_
  LimbCommand_message_member_array,  // message members
  LimbCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  LimbCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LimbCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LimbCommand_message_members,
  get_message_typesupport_handle_function,
  &interfaces__msg__LimbCommand__get_type_hash,
  &interfaces__msg__LimbCommand__get_type_description,
  &interfaces__msg__LimbCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::msg::LimbCommand>()
{
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::LimbCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, msg, LimbCommand)() {
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::LimbCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
