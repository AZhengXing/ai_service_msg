// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ai_service_msg:msg/IMGDetectionOutput.idl
// generated code does not contain a copyright notice

#ifndef AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__STRUCT_H_
#define AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/IMGDetectionOutput in the package ai_service_msg.
typedef struct ai_service_msg__msg__IMGDetectionOutput
{
  int8_t id;
  rosidl_runtime_c__String name;
  float conf;
  float position_x;
  float position_x_offset;
  float position_y;
  float position_y_offset;
  float position_z;
  float position_z_offset;
} ai_service_msg__msg__IMGDetectionOutput;

// Struct for a sequence of ai_service_msg__msg__IMGDetectionOutput.
typedef struct ai_service_msg__msg__IMGDetectionOutput__Sequence
{
  ai_service_msg__msg__IMGDetectionOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ai_service_msg__msg__IMGDetectionOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__STRUCT_H_
