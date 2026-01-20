// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/motor_command.h"


#ifndef INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
#define INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorCommand in the package interfaces.
typedef struct interfaces__msg__MotorCommand
{
  int32_t vel[22];
  int32_t pos[22];
} interfaces__msg__MotorCommand;

// Struct for a sequence of interfaces__msg__MotorCommand.
typedef struct interfaces__msg__MotorCommand__Sequence
{
  interfaces__msg__MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
