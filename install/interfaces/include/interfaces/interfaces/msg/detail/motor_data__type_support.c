// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:msg/MotorData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/msg/detail/motor_data__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/msg/detail/motor_data__functions.h"
#include "interfaces/msg/detail/motor_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void interfaces__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__msg__MotorData__init(message_memory);
}

void interfaces__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_fini_function(void * message_memory)
{
  interfaces__msg__MotorData__fini(message_memory);
}

size_t interfaces__msg__MotorData__rosidl_typesupport_introspection_c__size_function__MotorData__pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 22;
}

const void * interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_const_function__MotorData__pos(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_function__MotorData__pos(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void interfaces__msg__MotorData__rosidl_typesupport_introspection_c__fetch_function__MotorData__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_const_function__MotorData__pos(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void interfaces__msg__MotorData__rosidl_typesupport_introspection_c__assign_function__MotorData__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_function__MotorData__pos(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

size_t interfaces__msg__MotorData__rosidl_typesupport_introspection_c__size_function__MotorData__vel(
  const void * untyped_member)
{
  (void)untyped_member;
  return 22;
}

const void * interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_const_function__MotorData__vel(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_function__MotorData__vel(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void interfaces__msg__MotorData__rosidl_typesupport_introspection_c__fetch_function__MotorData__vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_const_function__MotorData__vel(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void interfaces__msg__MotorData__rosidl_typesupport_introspection_c__assign_function__MotorData__vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_function__MotorData__vel(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

size_t interfaces__msg__MotorData__rosidl_typesupport_introspection_c__size_function__MotorData__torque(
  const void * untyped_member)
{
  (void)untyped_member;
  return 22;
}

const void * interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_const_function__MotorData__torque(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_function__MotorData__torque(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void interfaces__msg__MotorData__rosidl_typesupport_introspection_c__fetch_function__MotorData__torque(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_const_function__MotorData__torque(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void interfaces__msg__MotorData__rosidl_typesupport_introspection_c__assign_function__MotorData__torque(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_function__MotorData__torque(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember interfaces__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_member_array[3] = {
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    22,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__MotorData, pos),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__size_function__MotorData__pos,  // size() function pointer
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_const_function__MotorData__pos,  // get_const(index) function pointer
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_function__MotorData__pos,  // get(index) function pointer
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__fetch_function__MotorData__pos,  // fetch(index, &value) function pointer
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__assign_function__MotorData__pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    22,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__MotorData, vel),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__size_function__MotorData__vel,  // size() function pointer
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_const_function__MotorData__vel,  // get_const(index) function pointer
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_function__MotorData__vel,  // get(index) function pointer
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__fetch_function__MotorData__vel,  // fetch(index, &value) function pointer
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__assign_function__MotorData__vel,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    22,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__MotorData, torque),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__size_function__MotorData__torque,  // size() function pointer
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_const_function__MotorData__torque,  // get_const(index) function pointer
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__get_function__MotorData__torque,  // get(index) function pointer
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__fetch_function__MotorData__torque,  // fetch(index, &value) function pointer
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__assign_function__MotorData__torque,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_members = {
  "interfaces__msg",  // message namespace
  "MotorData",  // message name
  3,  // number of fields
  sizeof(interfaces__msg__MotorData),
  false,  // has_any_key_member_
  interfaces__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_member_array,  // message members
  interfaces__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_type_support_handle = {
  0,
  &interfaces__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_members,
  get_message_typesupport_handle_function,
  &interfaces__msg__MotorData__get_type_hash,
  &interfaces__msg__MotorData__get_type_description,
  &interfaces__msg__MotorData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, msg, MotorData)() {
  if (!interfaces__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_type_support_handle.typesupport_identifier) {
    interfaces__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces__msg__MotorData__rosidl_typesupport_introspection_c__MotorData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
