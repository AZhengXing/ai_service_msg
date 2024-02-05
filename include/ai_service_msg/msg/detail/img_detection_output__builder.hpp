// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ai_service_msg:msg/IMGDetectionOutput.idl
// generated code does not contain a copyright notice

#ifndef AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__BUILDER_HPP_
#define AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__BUILDER_HPP_

#include "ai_service_msg/msg/detail/img_detection_output__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ai_service_msg
{

namespace msg
{

namespace builder
{

class Init_IMGDetectionOutput_position_z_offset
{
public:
  explicit Init_IMGDetectionOutput_position_z_offset(::ai_service_msg::msg::IMGDetectionOutput & msg)
  : msg_(msg)
  {}
  ::ai_service_msg::msg::IMGDetectionOutput position_z_offset(::ai_service_msg::msg::IMGDetectionOutput::_position_z_offset_type arg)
  {
    msg_.position_z_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ai_service_msg::msg::IMGDetectionOutput msg_;
};

class Init_IMGDetectionOutput_position_z
{
public:
  explicit Init_IMGDetectionOutput_position_z(::ai_service_msg::msg::IMGDetectionOutput & msg)
  : msg_(msg)
  {}
  Init_IMGDetectionOutput_position_z_offset position_z(::ai_service_msg::msg::IMGDetectionOutput::_position_z_type arg)
  {
    msg_.position_z = std::move(arg);
    return Init_IMGDetectionOutput_position_z_offset(msg_);
  }

private:
  ::ai_service_msg::msg::IMGDetectionOutput msg_;
};

class Init_IMGDetectionOutput_position_y_offset
{
public:
  explicit Init_IMGDetectionOutput_position_y_offset(::ai_service_msg::msg::IMGDetectionOutput & msg)
  : msg_(msg)
  {}
  Init_IMGDetectionOutput_position_z position_y_offset(::ai_service_msg::msg::IMGDetectionOutput::_position_y_offset_type arg)
  {
    msg_.position_y_offset = std::move(arg);
    return Init_IMGDetectionOutput_position_z(msg_);
  }

private:
  ::ai_service_msg::msg::IMGDetectionOutput msg_;
};

class Init_IMGDetectionOutput_position_y
{
public:
  explicit Init_IMGDetectionOutput_position_y(::ai_service_msg::msg::IMGDetectionOutput & msg)
  : msg_(msg)
  {}
  Init_IMGDetectionOutput_position_y_offset position_y(::ai_service_msg::msg::IMGDetectionOutput::_position_y_type arg)
  {
    msg_.position_y = std::move(arg);
    return Init_IMGDetectionOutput_position_y_offset(msg_);
  }

private:
  ::ai_service_msg::msg::IMGDetectionOutput msg_;
};

class Init_IMGDetectionOutput_position_x_offset
{
public:
  explicit Init_IMGDetectionOutput_position_x_offset(::ai_service_msg::msg::IMGDetectionOutput & msg)
  : msg_(msg)
  {}
  Init_IMGDetectionOutput_position_y position_x_offset(::ai_service_msg::msg::IMGDetectionOutput::_position_x_offset_type arg)
  {
    msg_.position_x_offset = std::move(arg);
    return Init_IMGDetectionOutput_position_y(msg_);
  }

private:
  ::ai_service_msg::msg::IMGDetectionOutput msg_;
};

class Init_IMGDetectionOutput_position_x
{
public:
  explicit Init_IMGDetectionOutput_position_x(::ai_service_msg::msg::IMGDetectionOutput & msg)
  : msg_(msg)
  {}
  Init_IMGDetectionOutput_position_x_offset position_x(::ai_service_msg::msg::IMGDetectionOutput::_position_x_type arg)
  {
    msg_.position_x = std::move(arg);
    return Init_IMGDetectionOutput_position_x_offset(msg_);
  }

private:
  ::ai_service_msg::msg::IMGDetectionOutput msg_;
};

class Init_IMGDetectionOutput_conf
{
public:
  explicit Init_IMGDetectionOutput_conf(::ai_service_msg::msg::IMGDetectionOutput & msg)
  : msg_(msg)
  {}
  Init_IMGDetectionOutput_position_x conf(::ai_service_msg::msg::IMGDetectionOutput::_conf_type arg)
  {
    msg_.conf = std::move(arg);
    return Init_IMGDetectionOutput_position_x(msg_);
  }

private:
  ::ai_service_msg::msg::IMGDetectionOutput msg_;
};

class Init_IMGDetectionOutput_name
{
public:
  explicit Init_IMGDetectionOutput_name(::ai_service_msg::msg::IMGDetectionOutput & msg)
  : msg_(msg)
  {}
  Init_IMGDetectionOutput_conf name(::ai_service_msg::msg::IMGDetectionOutput::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_IMGDetectionOutput_conf(msg_);
  }

private:
  ::ai_service_msg::msg::IMGDetectionOutput msg_;
};

class Init_IMGDetectionOutput_id
{
public:
  Init_IMGDetectionOutput_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMGDetectionOutput_name id(::ai_service_msg::msg::IMGDetectionOutput::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_IMGDetectionOutput_name(msg_);
  }

private:
  ::ai_service_msg::msg::IMGDetectionOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ai_service_msg::msg::IMGDetectionOutput>()
{
  return ai_service_msg::msg::builder::Init_IMGDetectionOutput_id();
}

}  // namespace ai_service_msg

#endif  // AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__BUILDER_HPP_
