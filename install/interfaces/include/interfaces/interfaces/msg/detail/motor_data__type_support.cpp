// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/MotorData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces/msg/detail/motor_data__functions.h"
#include "interfaces/msg/detail/motor_data__struct.hpp"
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

void MotorData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::msg::MotorData(_init);
}

void MotorData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::msg::MotorData *>(message_memory);
  typed_message->~MotorData();
}

size_t size_function__MotorData__pos(const void * untyped_member)
{
  (void)untyped_member;
  return 22;
}

const void * get_const_function__MotorData__pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 22> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorData__pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 22> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorData__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__MotorData__pos(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__MotorData__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__MotorData__pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__MotorData__vel(const void * untyped_member)
{
  (void)untyped_member;
  return 22;
}

const void * get_const_function__MotorData__vel(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 22> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorData__vel(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 22> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorData__vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__MotorData__vel(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__MotorData__vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__MotorData__vel(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__MotorData__torque(const void * untyped_member)
{
  (void)untyped_member;
  return 22;
}

const void * get_const_function__MotorData__torque(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 22> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorData__torque(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 22> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorData__torque(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__MotorData__torque(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__MotorData__torque(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__MotorData__torque(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorData_message_member_array[3] = {
  {
    "pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    22,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::MotorData, pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorData__pos,  // size() function pointer
    get_const_function__MotorData__pos,  // get_const(index) function pointer
    get_function__MotorData__pos,  // get(index) function pointer
    fetch_function__MotorData__pos,  // fetch(index, &value) function pointer
    assign_function__MotorData__pos,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    22,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::MotorData, vel),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorData__vel,  // size() function pointer
    get_const_function__MotorData__vel,  // get_const(index) function pointer
    get_function__MotorData__vel,  // get(index) function pointer
    fetch_function__MotorData__vel,  // fetch(index, &value) function pointer
    assign_function__MotorData__vel,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "torque",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    22,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::MotorData, torque),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorData__torque,  // size() function pointer
    get_const_function__MotorData__torque,  // get_const(index) function pointer
    get_function__MotorData__torque,  // get(index) function pointer
    fetch_function__MotorData__torque,  // fetch(index, &value) function pointer
    assign_function__MotorData__torque,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorData_message_members = {
  "interfaces::msg",  // message namespace
  "MotorData",  // message name
  3,  // number of fields
  sizeof(interfaces::msg::MotorData),
  false,  // has_any_key_member_
  MotorData_message_member_array,  // message members
  MotorData_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorData_message_members,
  get_message_typesupport_handle_function,
  &interfaces__msg__MotorData__get_type_hash,
  &interfaces__msg__MotorData__get_type_description,
  &interfaces__msg__MotorData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::msg::MotorData>()
{
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::MotorData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, msg, MotorData)() {
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::MotorData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
