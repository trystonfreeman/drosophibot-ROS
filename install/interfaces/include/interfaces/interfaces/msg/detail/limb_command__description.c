// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/LimbCommand.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/limb_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__LimbCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x38, 0x83, 0xd4, 0xbd, 0x7a, 0x14, 0x53, 0x3a,
      0x25, 0x04, 0x68, 0x00, 0x0f, 0xfa, 0xbd, 0xe7,
      0xf5, 0x5b, 0x22, 0x9b, 0x33, 0xc2, 0xab, 0x9a,
      0x6d, 0x69, 0x20, 0xc4, 0xda, 0x37, 0xe1, 0xae,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__LimbCommand__TYPE_NAME[] = "interfaces/msg/LimbCommand";

// Define type names, field names, and default values
static char interfaces__msg__LimbCommand__FIELD_NAME__pos[] = "pos";
static char interfaces__msg__LimbCommand__FIELD_NAME__vel[] = "vel";

static rosidl_runtime_c__type_description__Field interfaces__msg__LimbCommand__FIELDS[] = {
  {
    {interfaces__msg__LimbCommand__FIELD_NAME__pos, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_BOUNDED_SEQUENCE,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__LimbCommand__FIELD_NAME__vel, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_BOUNDED_SEQUENCE,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__LimbCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__LimbCommand__TYPE_NAME, 26, 26},
      {interfaces__msg__LimbCommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[<=4] pos # degrees\n"
  "float32[<=4] vel # degrees/s";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__LimbCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__LimbCommand__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 55, 55},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__LimbCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__LimbCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
