// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ai_service_msg:msg/IMGDetectionOutput.idl
// generated code does not contain a copyright notice

#ifndef AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__TRAITS_HPP_
#define AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__TRAITS_HPP_

#include "ai_service_msg/msg/detail/img_detection_output__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ai_service_msg::msg::IMGDetectionOutput>()
{
  return "ai_service_msg::msg::IMGDetectionOutput";
}

template<>
inline const char * name<ai_service_msg::msg::IMGDetectionOutput>()
{
  return "ai_service_msg/msg/IMGDetectionOutput";
}

template<>
struct has_fixed_size<ai_service_msg::msg::IMGDetectionOutput>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ai_service_msg::msg::IMGDetectionOutput>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ai_service_msg::msg::IMGDetectionOutput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__TRAITS_HPP_
