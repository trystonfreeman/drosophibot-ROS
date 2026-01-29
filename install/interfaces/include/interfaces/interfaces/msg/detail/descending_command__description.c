// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/DescendingCommand.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/descending_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__DescendingCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x16, 0x23, 0x0d, 0xe6, 0xc3, 0x92, 0x5b, 0x9c,
      0xc7, 0x6e, 0x5c, 0xaa, 0x12, 0xae, 0x14, 0x3d,
      0x3f, 0x2e, 0xa9, 0x5c, 0xe7, 0x12, 0xf5, 0xc0,
      0x2c, 0x1b, 0x30, 0x2e, 0x3a, 0xe7, 0x5c, 0xce,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__DescendingCommand__TYPE_NAME[] = "interfaces/msg/DescendingCommand";

// Define type names, field names, and default values
static char interfaces__msg__DescendingCommand__FIELD_NAME__heading[] = "heading";

static rosidl_runtime_c__type_description__Field interfaces__msg__DescendingCommand__FIELDS[] = {
  {
    {interfaces__msg__DescendingCommand__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__DescendingCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__DescendingCommand__TYPE_NAME, 32, 32},
      {interfaces__msg__DescendingCommand__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 heading # radians from straight forward";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__DescendingCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__DescendingCommand__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 47, 47},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__DescendingCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__DescendingCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
