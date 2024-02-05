// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ai_service_msg:srv/IMGDetectionSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ai_service_msg/srv/detail/img_detection_srv__rosidl_typesupport_introspection_c.h"
#include "ai_service_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ai_service_msg/srv/detail/img_detection_srv__functions.h"
#include "ai_service_msg/srv/detail/img_detection_srv__struct.h"


// Include directives for member types
// Member `img`
#include "sensor_msgs/msg/image.h"
// Member `img`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IMGDetectionSrv_Request__rosidl_typesupport_introspection_c__IMGDetectionSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ai_service_msg__srv__IMGDetectionSrv_Request__init(message_memory);
}

void IMGDetectionSrv_Request__rosidl_typesupport_introspection_c__IMGDetectionSrv_Request_fini_function(void * message_memory)
{
  ai_service_msg__srv__IMGDetectionSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IMGDetectionSrv_Request__rosidl_typesupport_introspection_c__IMGDetectionSrv_Request_message_member_array[1] = {
  {
    "img",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_service_msg__srv__IMGDetectionSrv_Request, img),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IMGDetectionSrv_Request__rosidl_typesupport_introspection_c__IMGDetectionSrv_Request_message_members = {
  "ai_service_msg__srv",  // message namespace
  "IMGDetectionSrv_Request",  // message name
  1,  // number of fields
  sizeof(ai_service_msg__srv__IMGDetectionSrv_Request),
  IMGDetectionSrv_Request__rosidl_typesupport_introspection_c__IMGDetectionSrv_Request_message_member_array,  // message members
  IMGDetectionSrv_Request__rosidl_typesupport_introspection_c__IMGDetectionSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  IMGDetectionSrv_Request__rosidl_typesupport_introspection_c__IMGDetectionSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IMGDetectionSrv_Request__rosidl_typesupport_introspection_c__IMGDetectionSrv_Request_message_type_support_handle = {
  0,
  &IMGDetectionSrv_Request__rosidl_typesupport_introspection_c__IMGDetectionSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ai_service_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_service_msg, srv, IMGDetectionSrv_Request)() {
  IMGDetectionSrv_Request__rosidl_typesupport_introspection_c__IMGDetectionSrv_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!IMGDetectionSrv_Request__rosidl_typesupport_introspection_c__IMGDetectionSrv_Request_message_type_support_handle.typesupport_identifier) {
    IMGDetectionSrv_Request__rosidl_typesupport_introspection_c__IMGDetectionSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IMGDetectionSrv_Request__rosidl_typesupport_introspection_c__IMGDetectionSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ai_service_msg/srv/detail/img_detection_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ai_service_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ai_service_msg/srv/detail/img_detection_srv__functions.h"
// already included above
// #include "ai_service_msg/srv/detail/img_detection_srv__struct.h"


// Include directives for member types
// Member `goals`
#include "ai_service_msg/msg/img_detection_output.h"
// Member `goals`
#include "ai_service_msg/msg/detail/img_detection_output__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__IMGDetectionSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ai_service_msg__srv__IMGDetectionSrv_Response__init(message_memory);
}

void IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__IMGDetectionSrv_Response_fini_function(void * message_memory)
{
  ai_service_msg__srv__IMGDetectionSrv_Response__fini(message_memory);
}

size_t IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__size_function__IMGDetectionOutput__goals(
  const void * untyped_member)
{
  const ai_service_msg__msg__IMGDetectionOutput__Sequence * member =
    (const ai_service_msg__msg__IMGDetectionOutput__Sequence *)(untyped_member);
  return member->size;
}

const void * IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__get_const_function__IMGDetectionOutput__goals(
  const void * untyped_member, size_t index)
{
  const ai_service_msg__msg__IMGDetectionOutput__Sequence * member =
    (const ai_service_msg__msg__IMGDetectionOutput__Sequence *)(untyped_member);
  return &member->data[index];
}

void * IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__get_function__IMGDetectionOutput__goals(
  void * untyped_member, size_t index)
{
  ai_service_msg__msg__IMGDetectionOutput__Sequence * member =
    (ai_service_msg__msg__IMGDetectionOutput__Sequence *)(untyped_member);
  return &member->data[index];
}

bool IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__resize_function__IMGDetectionOutput__goals(
  void * untyped_member, size_t size)
{
  ai_service_msg__msg__IMGDetectionOutput__Sequence * member =
    (ai_service_msg__msg__IMGDetectionOutput__Sequence *)(untyped_member);
  ai_service_msg__msg__IMGDetectionOutput__Sequence__fini(member);
  return ai_service_msg__msg__IMGDetectionOutput__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__IMGDetectionSrv_Response_message_member_array[1] = {
  {
    "goals",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ai_service_msg__srv__IMGDetectionSrv_Response, goals),  // bytes offset in struct
    NULL,  // default value
    IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__size_function__IMGDetectionOutput__goals,  // size() function pointer
    IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__get_const_function__IMGDetectionOutput__goals,  // get_const(index) function pointer
    IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__get_function__IMGDetectionOutput__goals,  // get(index) function pointer
    IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__resize_function__IMGDetectionOutput__goals  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__IMGDetectionSrv_Response_message_members = {
  "ai_service_msg__srv",  // message namespace
  "IMGDetectionSrv_Response",  // message name
  1,  // number of fields
  sizeof(ai_service_msg__srv__IMGDetectionSrv_Response),
  IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__IMGDetectionSrv_Response_message_member_array,  // message members
  IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__IMGDetectionSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__IMGDetectionSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__IMGDetectionSrv_Response_message_type_support_handle = {
  0,
  &IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__IMGDetectionSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ai_service_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_service_msg, srv, IMGDetectionSrv_Response)() {
  IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__IMGDetectionSrv_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_service_msg, msg, IMGDetectionOutput)();
  if (!IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__IMGDetectionSrv_Response_message_type_support_handle.typesupport_identifier) {
    IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__IMGDetectionSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IMGDetectionSrv_Response__rosidl_typesupport_introspection_c__IMGDetectionSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ai_service_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ai_service_msg/srv/detail/img_detection_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ai_service_msg__srv__detail__img_detection_srv__rosidl_typesupport_introspection_c__IMGDetectionSrv_service_members = {
  "ai_service_msg__srv",  // service namespace
  "IMGDetectionSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ai_service_msg__srv__detail__img_detection_srv__rosidl_typesupport_introspection_c__IMGDetectionSrv_Request_message_type_support_handle,
  NULL  // response message
  // ai_service_msg__srv__detail__img_detection_srv__rosidl_typesupport_introspection_c__IMGDetectionSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t ai_service_msg__srv__detail__img_detection_srv__rosidl_typesupport_introspection_c__IMGDetectionSrv_service_type_support_handle = {
  0,
  &ai_service_msg__srv__detail__img_detection_srv__rosidl_typesupport_introspection_c__IMGDetectionSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_service_msg, srv, IMGDetectionSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_service_msg, srv, IMGDetectionSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ai_service_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_service_msg, srv, IMGDetectionSrv)() {
  if (!ai_service_msg__srv__detail__img_detection_srv__rosidl_typesupport_introspection_c__IMGDetectionSrv_service_type_support_handle.typesupport_identifier) {
    ai_service_msg__srv__detail__img_detection_srv__rosidl_typesupport_introspection_c__IMGDetectionSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ai_service_msg__srv__detail__img_detection_srv__rosidl_typesupport_introspection_c__IMGDetectionSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_service_msg, srv, IMGDetectionSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ai_service_msg, srv, IMGDetectionSrv_Response)()->data;
  }

  return &ai_service_msg__srv__detail__img_detection_srv__rosidl_typesupport_introspection_c__IMGDetectionSrv_service_type_support_handle;
}
