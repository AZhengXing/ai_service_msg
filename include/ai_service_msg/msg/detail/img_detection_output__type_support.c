// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ai_service_msg:msg/IMGDetectionOutput.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ai_service_msg/msg/detail/img_detection_output__rosidl_typesupport_introspection_c.h"
#include "ai_service_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ai_service_msg/msg/detail/img_detection_output__functions.h"
#include "ai_service_msg/msg/detail/img_detection_output__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IMGDetectionOutput__rosidl_typesupport_introspection_c__IMGDetectionOutput_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ai_service_msg__msg__IMGDetectionOutput__init(message_memory);
}

void IMGDetectionOutput__rosidl_typesupport_introspection_c__IMGDetectionOutput_fini_function(void * message_memory)
{
  ai_service_msg__msg__IMGDetectionOutput__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IMGDetectionOutput__rosidl_typesupport_introspection_c__IMGDetectionOutput_message_member_array[9] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_service_msg__msg__IMGDetectionOutput, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_service_msg__msg__IMGDetectionOutput, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "conf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_service_msg__msg__IMGDetectionOutput, conf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_service_msg__msg__IMGDetectionOutput, position_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_x_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_service_msg__msg__IMGDetectionOutput, position_x_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_service_msg__msg__IMGDetectionOutput, position_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_y_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_service_msg__msg__IMGDetectionOutput, position_y_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_service_msg__msg__IMGDetectionOutput, position_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_z_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_service_msg__msg__IMGDetectionOutput, position_z_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IMGDetectionOutput__rosidl_typesupport_introspection_c__IMGDetectionOutput_message_members = {
  "ai_service_msg__msg",  // message namespace
  "IMGDetectionOutput",  // message name
  9,  // number of fields
  sizeof(ai_service_msg__msg__IMGDetectionOutput),
  IMGDetectionOutput__rosidl_typesupport_introspection_c__IMGDetectionOutput_message_member_array,  // message members
  IMGDetectionOutput__rosidl_typesupport_introspection_c__IMGDetectionOutput_init_function,  // function to initialize message memory (memory has to be allocated)
  IMGDetectionOutput__rosidl_typesupport_introspection_c__IMGDetectionOutput_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IMGDetectionOutput__rosidl_typesupport_introspection_c__IMGDetectionOutput_message_type_support_handle = {
  0,
  &IMGDetectionOutput__rosidl_typesupport_introspection_c__IMGDetectionOutput_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ai_service_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_service_msg, msg, IMGDetectionOutput)() {
  if (!IMGDetectionOutput__rosidl_typesupport_introspection_c__IMGDetectionOutput_message_type_support_handle.typesupport_identifier) {
    IMGDetectionOutput__rosidl_typesupport_introspection_c__IMGDetectionOutput_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IMGDetectionOutput__rosidl_typesupport_introspection_c__IMGDetectionOutput_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
