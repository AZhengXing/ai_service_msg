// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ai_service_msg:srv/IMGDetectionSrv.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ai_service_msg/srv/detail/img_detection_srv__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ai_service_msg
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void IMGDetectionSrv_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ai_service_msg::srv::IMGDetectionSrv_Request(_init);
}

void IMGDetectionSrv_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ai_service_msg::srv::IMGDetectionSrv_Request *>(message_memory);
  typed_message->~IMGDetectionSrv_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IMGDetectionSrv_Request_message_member_array[1] = {
  {
    "img",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_service_msg::srv::IMGDetectionSrv_Request, img),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IMGDetectionSrv_Request_message_members = {
  "ai_service_msg::srv",  // message namespace
  "IMGDetectionSrv_Request",  // message name
  1,  // number of fields
  sizeof(ai_service_msg::srv::IMGDetectionSrv_Request),
  IMGDetectionSrv_Request_message_member_array,  // message members
  IMGDetectionSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  IMGDetectionSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IMGDetectionSrv_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IMGDetectionSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ai_service_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ai_service_msg::srv::IMGDetectionSrv_Request>()
{
  return &::ai_service_msg::srv::rosidl_typesupport_introspection_cpp::IMGDetectionSrv_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ai_service_msg, srv, IMGDetectionSrv_Request)() {
  return &::ai_service_msg::srv::rosidl_typesupport_introspection_cpp::IMGDetectionSrv_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ai_service_msg/srv/detail/img_detection_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ai_service_msg
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void IMGDetectionSrv_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ai_service_msg::srv::IMGDetectionSrv_Response(_init);
}

void IMGDetectionSrv_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ai_service_msg::srv::IMGDetectionSrv_Response *>(message_memory);
  typed_message->~IMGDetectionSrv_Response();
}

size_t size_function__IMGDetectionSrv_Response__goals(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ai_service_msg::msg::IMGDetectionOutput> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IMGDetectionSrv_Response__goals(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ai_service_msg::msg::IMGDetectionOutput> *>(untyped_member);
  return &member[index];
}

void * get_function__IMGDetectionSrv_Response__goals(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ai_service_msg::msg::IMGDetectionOutput> *>(untyped_member);
  return &member[index];
}

void resize_function__IMGDetectionSrv_Response__goals(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ai_service_msg::msg::IMGDetectionOutput> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IMGDetectionSrv_Response_message_member_array[1] = {
  {
    "goals",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ai_service_msg::msg::IMGDetectionOutput>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_service_msg::srv::IMGDetectionSrv_Response, goals),  // bytes offset in struct
    nullptr,  // default value
    size_function__IMGDetectionSrv_Response__goals,  // size() function pointer
    get_const_function__IMGDetectionSrv_Response__goals,  // get_const(index) function pointer
    get_function__IMGDetectionSrv_Response__goals,  // get(index) function pointer
    resize_function__IMGDetectionSrv_Response__goals  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IMGDetectionSrv_Response_message_members = {
  "ai_service_msg::srv",  // message namespace
  "IMGDetectionSrv_Response",  // message name
  1,  // number of fields
  sizeof(ai_service_msg::srv::IMGDetectionSrv_Response),
  IMGDetectionSrv_Response_message_member_array,  // message members
  IMGDetectionSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  IMGDetectionSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IMGDetectionSrv_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IMGDetectionSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ai_service_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ai_service_msg::srv::IMGDetectionSrv_Response>()
{
  return &::ai_service_msg::srv::rosidl_typesupport_introspection_cpp::IMGDetectionSrv_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ai_service_msg, srv, IMGDetectionSrv_Response)() {
  return &::ai_service_msg::srv::rosidl_typesupport_introspection_cpp::IMGDetectionSrv_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "ai_service_msg/srv/detail/img_detection_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ai_service_msg
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers IMGDetectionSrv_service_members = {
  "ai_service_msg::srv",  // service namespace
  "IMGDetectionSrv",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ai_service_msg::srv::IMGDetectionSrv>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t IMGDetectionSrv_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IMGDetectionSrv_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ai_service_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ai_service_msg::srv::IMGDetectionSrv>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ai_service_msg::srv::rosidl_typesupport_introspection_cpp::IMGDetectionSrv_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ai_service_msg::srv::IMGDetectionSrv_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ai_service_msg::srv::IMGDetectionSrv_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ai_service_msg, srv, IMGDetectionSrv)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ai_service_msg::srv::IMGDetectionSrv>();
}

#ifdef __cplusplus
}
#endif
