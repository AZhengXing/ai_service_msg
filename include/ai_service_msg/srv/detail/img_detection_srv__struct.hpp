// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ai_service_msg:srv/IMGDetectionSrv.idl
// generated code does not contain a copyright notice

#ifndef AI_SERVICE_MSG__SRV__DETAIL__IMG_DETECTION_SRV__STRUCT_HPP_
#define AI_SERVICE_MSG__SRV__DETAIL__IMG_DETECTION_SRV__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ai_service_msg__srv__IMGDetectionSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__ai_service_msg__srv__IMGDetectionSrv_Request __declspec(deprecated)
#endif

namespace ai_service_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IMGDetectionSrv_Request_
{
  using Type = IMGDetectionSrv_Request_<ContainerAllocator>;

  explicit IMGDetectionSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_init)
  {
    (void)_init;
  }

  explicit IMGDetectionSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _img_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _img_type img;

  // setters for named parameter idiom
  Type & set__img(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->img = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ai_service_msg::srv::IMGDetectionSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ai_service_msg::srv::IMGDetectionSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ai_service_msg::srv::IMGDetectionSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ai_service_msg::srv::IMGDetectionSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ai_service_msg::srv::IMGDetectionSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ai_service_msg::srv::IMGDetectionSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ai_service_msg::srv::IMGDetectionSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ai_service_msg::srv::IMGDetectionSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ai_service_msg::srv::IMGDetectionSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ai_service_msg::srv::IMGDetectionSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ai_service_msg__srv__IMGDetectionSrv_Request
    std::shared_ptr<ai_service_msg::srv::IMGDetectionSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ai_service_msg__srv__IMGDetectionSrv_Request
    std::shared_ptr<ai_service_msg::srv::IMGDetectionSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMGDetectionSrv_Request_ & other) const
  {
    if (this->img != other.img) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMGDetectionSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMGDetectionSrv_Request_

// alias to use template instance with default allocator
using IMGDetectionSrv_Request =
  ai_service_msg::srv::IMGDetectionSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ai_service_msg


// Include directives for member types
// Member 'goals'
#include "ai_service_msg/msg/detail/img_detection_output__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ai_service_msg__srv__IMGDetectionSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__ai_service_msg__srv__IMGDetectionSrv_Response __declspec(deprecated)
#endif

namespace ai_service_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IMGDetectionSrv_Response_
{
  using Type = IMGDetectionSrv_Response_<ContainerAllocator>;

  explicit IMGDetectionSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit IMGDetectionSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _goals_type =
    std::vector<ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator>, typename ContainerAllocator::template rebind<ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator>>::other>;
  _goals_type goals;

  // setters for named parameter idiom
  Type & set__goals(
    const std::vector<ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator>, typename ContainerAllocator::template rebind<ai_service_msg::msg::IMGDetectionOutput_<ContainerAllocator>>::other> & _arg)
  {
    this->goals = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ai_service_msg::srv::IMGDetectionSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ai_service_msg::srv::IMGDetectionSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ai_service_msg::srv::IMGDetectionSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ai_service_msg::srv::IMGDetectionSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ai_service_msg::srv::IMGDetectionSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ai_service_msg::srv::IMGDetectionSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ai_service_msg::srv::IMGDetectionSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ai_service_msg::srv::IMGDetectionSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ai_service_msg::srv::IMGDetectionSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ai_service_msg::srv::IMGDetectionSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ai_service_msg__srv__IMGDetectionSrv_Response
    std::shared_ptr<ai_service_msg::srv::IMGDetectionSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ai_service_msg__srv__IMGDetectionSrv_Response
    std::shared_ptr<ai_service_msg::srv::IMGDetectionSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMGDetectionSrv_Response_ & other) const
  {
    if (this->goals != other.goals) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMGDetectionSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMGDetectionSrv_Response_

// alias to use template instance with default allocator
using IMGDetectionSrv_Response =
  ai_service_msg::srv::IMGDetectionSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ai_service_msg

namespace ai_service_msg
{

namespace srv
{

struct IMGDetectionSrv
{
  using Request = ai_service_msg::srv::IMGDetectionSrv_Request;
  using Response = ai_service_msg::srv::IMGDetectionSrv_Response;
};

}  // namespace srv

}  // namespace ai_service_msg

#endif  // AI_SERVICE_MSG__SRV__DETAIL__IMG_DETECTION_SRV__STRUCT_HPP_
