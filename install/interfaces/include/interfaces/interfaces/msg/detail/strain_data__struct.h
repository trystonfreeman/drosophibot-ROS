// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/StrainData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/strain_data.h"


#ifndef INTERFACES__MSG__DETAIL__STRAIN_DATA__STRUCT_H_
#define INTERFACES__MSG__DETAIL__STRAIN_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/StrainData in the package interfaces.
typedef struct interfaces__msg__StrainData
{
  /// unit?
  float strain[36];
} interfaces__msg__StrainData;

// Struct for a sequence of interfaces__msg__StrainData.
typedef struct interfaces__msg__StrainData__Sequence
{
  interfaces__msg__StrainData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__StrainData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__STRAIN_DATA__STRUCT_H_
