// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ai_service_msg:msg/IMGDetectionOutput.idl
// generated code does not contain a copyright notice

#ifndef AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ai_service_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ai_service_msg/msg/detail/img_detection_output__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ai_service_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ai_service_msg
cdr_serialize(
  const ai_service_msg::msg::IMGDetectionOutput & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ai_service_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ai_service_msg::msg::IMGDetectionOutput & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ai_service_msg
get_serialized_size(
  const ai_service_msg::msg::IMGDetectionOutput & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ai_service_msg
max_serialized_size_IMGDetectionOutput(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ai_service_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ai_service_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ai_service_msg, msg, IMGDetectionOutput)();

#ifdef __cplusplus
}
#endif

#endif  // AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
