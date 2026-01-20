// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/motor_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__MotorCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0xf7, 0x49, 0xca, 0x29, 0xcd, 0xc0, 0x9c,
      0x12, 0xf7, 0x34, 0x43, 0x14, 0xda, 0x3b, 0x42,
      0x58, 0x06, 0xab, 0xca, 0x0c, 0x1c, 0xac, 0xcc,
      0x8e, 0xbf, 0x38, 0x52, 0x23, 0x91, 0xcb, 0x41,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__MotorCommand__TYPE_NAME[] = "interfaces/msg/MotorCommand";

// Define type names, field names, and default values
static char interfaces__msg__MotorCommand__FIELD_NAME__vel[] = "vel";
static char interfaces__msg__MotorCommand__FIELD_NAME__pos[] = "pos";

static rosidl_runtime_c__type_description__Field interfaces__msg__MotorCommand__FIELDS[] = {
  {
    {interfaces__msg__MotorCommand__FIELD_NAME__vel, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      22,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__MotorCommand__FIELD_NAME__pos, 3, 3},
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
interfaces__msg__MotorCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__MotorCommand__TYPE_NAME, 27, 27},
      {interfaces__msg__MotorCommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32[22] vel\n"
  "int32[22] pos";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__MotorCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__MotorCommand__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 28, 28},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__MotorCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__MotorCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
