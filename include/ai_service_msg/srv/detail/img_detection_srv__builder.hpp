// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ai_service_msg:srv/IMGDetectionSrv.idl
// generated code does not contain a copyright notice

#ifndef AI_SERVICE_MSG__SRV__DETAIL__IMG_DETECTION_SRV__BUILDER_HPP_
#define AI_SERVICE_MSG__SRV__DETAIL__IMG_DETECTION_SRV__BUILDER_HPP_

#include "ai_service_msg/srv/detail/img_detection_srv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ai_service_msg
{

namespace srv
{

namespace builder
{

class Init_IMGDetectionSrv_Request_img
{
public:
  Init_IMGDetectionSrv_Request_img()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ai_service_msg::srv::IMGDetectionSrv_Request img(::ai_service_msg::srv::IMGDetectionSrv_Request::_img_type arg)
  {
    msg_.img = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ai_service_msg::srv::IMGDetectionSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ai_service_msg::srv::IMGDetectionSrv_Request>()
{
  return ai_service_msg::srv::builder::Init_IMGDetectionSrv_Request_img();
}

}  // namespace ai_service_msg


namespace ai_service_msg
{

namespace srv
{

namespace builder
{

class Init_IMGDetectionSrv_Response_goals
{
public:
  Init_IMGDetectionSrv_Response_goals()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ai_service_msg::srv::IMGDetectionSrv_Response goals(::ai_service_msg::srv::IMGDetectionSrv_Response::_goals_type arg)
  {
    msg_.goals = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ai_service_msg::srv::IMGDetectionSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ai_service_msg::srv::IMGDetectionSrv_Response>()
{
  return ai_service_msg::srv::builder::Init_IMGDetectionSrv_Response_goals();
}

}  // namespace ai_service_msg

#endif  // AI_SERVICE_MSG__SRV__DETAIL__IMG_DETECTION_SRV__BUILDER_HPP_
