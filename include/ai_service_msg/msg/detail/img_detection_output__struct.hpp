// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ai_service_msg:msg/IMGDetectionOutput.idl
// generated code does not contain a copyright notice

#ifndef AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__STRUCT_HPP_
#define AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ai_service_msg__msg__IMGDetectionOutput __attribute__((deprecated))
#else
# define DEPRECATED__ai_service_msg__msg__IMGDetectionOutput __declspec(deprecated)
#endif

namespace ai_service_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IMGDetectionOutput_
{
  using Type = IMGDetectionOutput_<ContainerAllocator>;

  explicit IMGDetectionOutput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->name = "";
      this->conf = 0.0f;
      this->position_x = 0.0f;
      this->position_x_offset = 0.0f;
      this->position_y = 0.0f;
      this->position_y_offset = 0.0f;
      this->position_z = 0.0f;
      this->position_z_offset = 0.0f;
    }
  }

  explicit IMGDetectionOutput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->name = "";
      this->conf = 0.0f;
      this->position_x = 0.0f;
      this->position_x_offset = 0.0f;
      this->position_y = 0.0f;
      this->position_y_offset = 0.0f;
      this->position_z = 0.0f;
      this->position_z_offset = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int8_t;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _conf_type =
    float;
  _conf_type conf;
  using _position_x_type =
    float;
  _position_x_type position_x;
  using _position_x_offset_type =
    float;
  _position_x_offset_type position_x_offset;
  using _position_y_type =
    float;
  _position_y_type position_y;
  using _position_y_offset_type =
    float;
  _position_y_offset_type position_y_offset;
  using _position_z_type =
    float;
  _position_z_type position_z;
  using _position_z_offset_type =
    float;
  _position_z_offset_type position_z_offset;

  // setters for named parameter idiom
  Type & set__id(
    const int8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__conf(
    const float & _arg)
  {
    this->conf = _arg;
    return *this;
  }
  Type & set__position_x(
    const float & _arg)
  {
    this->position_x = _arg;
    return *this;
  }
  Type & set__position_x_offset(
    const float & _arg)
  {
    this->position_x_offset = _arg;
    return *this;
  }
  Type & set__position_y(
    const float & _arg)
  {
    this->position_y = _arg;
    return *this;
  }
  Type & set__position_y_offset(
    const float & _arg)
  {
    this->position_y_offset = _arg;
    return *this;
  }
  Type & set__position_z(
    const float & _arg)
  {
    this->position_z = _arg;
    return *this;
  }
  Type & set__position_z_offset(
    const float & _arg)
  {
    this->position_z_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator> *;
  using ConstRawPtr =
    const ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ai_service_msg__msg__IMGDetectionOutput
    std::shared_ptr<ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ai_service_msg__msg__IMGDetectionOutput
    std::shared_ptr<ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMGDetectionOutput_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->conf != other.conf) {
      return false;
    }
    if (this->position_x != other.position_x) {
      return false;
    }
    if (this->position_x_offset != other.position_x_offset) {
      return false;
    }
    if (this->position_y != other.position_y) {
      return false;
    }
    if (this->position_y_offset != other.position_y_offset) {
      return false;
    }
    if (this->position_z != other.position_z) {
      return false;
    }
    if (this->position_z_offset != other.position_z_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMGDetectionOutput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMGDetectionOutput_

// alias to use template instance with default allocator
using IMGDetectionOutput =
  ai_service_msg::msg::IMGDetectionOutput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ai_service_msg

#endif  // AI_SERVICE_MSG__MSG__DETAIL__IMG_DETECTION_OUTPUT__STRUCT_HPP_
