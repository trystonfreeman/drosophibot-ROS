// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/MotorData.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/motor_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__MotorData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9e, 0x41, 0x39, 0x6d, 0xbb, 0xea, 0x84, 0xdd,
      0x57, 0x43, 0x76, 0xbf, 0x9d, 0xc7, 0x0b, 0x2d,
      0xc2, 0x6c, 0x44, 0x4b, 0x5a, 0xea, 0xb3, 0xe5,
      0x5a, 0xdc, 0x3e, 0x30, 0xf9, 0xe2, 0x76, 0xe7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__MotorData__TYPE_NAME[] = "interfaces/msg/MotorData";

// Define type names, field names, and default values
static char interfaces__msg__MotorData__FIELD_NAME__pos[] = "pos";
static char interfaces__msg__MotorData__FIELD_NAME__vel[] = "vel";
static char interfaces__msg__MotorData__FIELD_NAME__torque[] = "torque";

static rosidl_runtime_c__type_description__Field interfaces__msg__MotorData__FIELDS[] = {
  {
    {interfaces__msg__MotorData__FIELD_NAME__pos, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      22,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__MotorData__FIELD_NAME__vel, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      22,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__MotorData__FIELD_NAME__torque, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      22,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__MotorData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__MotorData__TYPE_NAME, 24, 24},
      {interfaces__msg__MotorData__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32[22] pos\n"
  "int32[22] vel\n"
  "int32[22] torque";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__MotorData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__MotorData__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__MotorData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__MotorData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
