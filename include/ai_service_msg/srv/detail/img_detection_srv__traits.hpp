// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ai_service_msg:srv/IMGDetectionSrv.idl
// generated code does not contain a copyright notice

#ifndef AI_SERVICE_MSG__SRV__DETAIL__IMG_DETECTION_SRV__TRAITS_HPP_
#define AI_SERVICE_MSG__SRV__DETAIL__IMG_DETECTION_SRV__TRAITS_HPP_

#include "ai_service_msg/srv/detail/img_detection_srv__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ai_service_msg::srv::IMGDetectionSrv_Request>()
{
  return "ai_service_msg::srv::IMGDetectionSrv_Request";
}

template<>
inline const char * name<ai_service_msg::srv::IMGDetectionSrv_Request>()
{
  return "ai_service_msg/srv/IMGDetectionSrv_Request";
}

template<>
struct has_fixed_size<ai_service_msg::srv::IMGDetectionSrv_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<ai_service_msg::srv::IMGDetectionSrv_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<ai_service_msg::srv::IMGDetectionSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ai_service_msg::srv::IMGDetectionSrv_Response>()
{
  return "ai_service_msg::srv::IMGDetectionSrv_Response";
}

template<>
inline const char * name<ai_service_msg::srv::IMGDetectionSrv_Response>()
{
  return "ai_service_msg/srv/IMGDetectionSrv_Response";
}

template<>
struct has_fixed_size<ai_service_msg::srv::IMGDetectionSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ai_service_msg::srv::IMGDetectionSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ai_service_msg::srv::IMGDetectionSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ai_service_msg::srv::IMGDetectionSrv>()
{
  return "ai_service_msg::srv::IMGDetectionSrv";
}

template<>
inline const char * name<ai_service_msg::srv::IMGDetectionSrv>()
{
  return "ai_service_msg/srv/IMGDetectionSrv";
}

template<>
struct has_fixed_size<ai_service_msg::srv::IMGDetectionSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<ai_service_msg::srv::IMGDetectionSrv_Request>::value &&
    has_fixed_size<ai_service_msg::srv::IMGDetectionSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<ai_service_msg::srv::IMGDetectionSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<ai_service_msg::srv::IMGDetectionSrv_Request>::value &&
    has_bounded_size<ai_service_msg::srv::IMGDetectionSrv_Response>::value
  >
{
};

template<>
struct is_service<ai_service_msg::srv::IMGDetectionSrv>
  : std::true_type
{
};

template<>
struct is_service_request<ai_service_msg::srv::IMGDetectionSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ai_service_msg::srv::IMGDetectionSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AI_SERVICE_MSG__SRV__DETAIL__IMG_DETECTION_SRV__TRAITS_HPP_
