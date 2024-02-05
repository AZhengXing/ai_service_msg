// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ai_service_msg:srv/IMGDetectionSrv.idl
// generated code does not contain a copyright notice

#ifndef AI_SERVICE_MSG__SRV__DETAIL__IMG_DETECTION_SRV__STRUCT_H_
#define AI_SERVICE_MSG__SRV__DETAIL__IMG_DETECTION_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in srv/IMGDetectionSrv in the package ai_service_msg.
typedef struct ai_service_msg__srv__IMGDetectionSrv_Request
{
  sensor_msgs__msg__Image img;
} ai_service_msg__srv__IMGDetectionSrv_Request;

// Struct for a sequence of ai_service_msg__srv__IMGDetectionSrv_Request.
typedef struct ai_service_msg__srv__IMGDetectionSrv_Request__Sequence
{
  ai_service_msg__srv__IMGDetectionSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ai_service_msg__srv__IMGDetectionSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goals'
#include "ai_service_msg/msg/detail/img_detection_output__struct.h"

// Struct defined in srv/IMGDetectionSrv in the package ai_service_msg.
typedef struct ai_service_msg__srv__IMGDetectionSrv_Response
{
  ai_service_msg__msg__IMGDetectionOutput__Sequence goals;
} ai_service_msg__srv__IMGDetectionSrv_Response;

// Struct for a sequence of ai_service_msg__srv__IMGDetectionSrv_Response.
typedef struct ai_service_msg__srv__IMGDetectionSrv_Response__Sequence
{
  ai_service_msg__srv__IMGDetectionSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ai_service_msg__srv__IMGDetectionSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AI_SERVICE_MSG__SRV__DETAIL__IMG_DETECTION_SRV__STRUCT_H_
