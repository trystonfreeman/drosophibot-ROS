// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/StrainData.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/strain_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__StrainData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3d, 0x29, 0x41, 0x8f, 0x11, 0xc1, 0xf4, 0x18,
      0x9a, 0x34, 0xbf, 0x95, 0x46, 0xee, 0x1e, 0xbe,
      0xcb, 0xa3, 0xb6, 0xc5, 0xe6, 0x2d, 0xff, 0xe9,
      0x0f, 0xe5, 0x37, 0xa8, 0x15, 0x23, 0xbc, 0x83,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__StrainData__TYPE_NAME[] = "interfaces/msg/StrainData";

// Define type names, field names, and default values
static char interfaces__msg__StrainData__FIELD_NAME__strain[] = "strain";

static rosidl_runtime_c__type_description__Field interfaces__msg__StrainData__FIELDS[] = {
  {
    {interfaces__msg__StrainData__FIELD_NAME__strain, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      36,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__StrainData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__StrainData__TYPE_NAME, 25, 25},
      {interfaces__msg__StrainData__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[36] strain # unit?";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__StrainData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__StrainData__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 26, 26},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__StrainData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__StrainData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
