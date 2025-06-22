// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from homework1_petr:srv/StartStop.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "homework1_petr/srv/detail/start_stop__rosidl_typesupport_introspection_c.h"
#include "homework1_petr/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "homework1_petr/srv/detail/start_stop__functions.h"
#include "homework1_petr/srv/detail/start_stop__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void homework1_petr__srv__StartStop_Request__rosidl_typesupport_introspection_c__StartStop_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  homework1_petr__srv__StartStop_Request__init(message_memory);
}

void homework1_petr__srv__StartStop_Request__rosidl_typesupport_introspection_c__StartStop_Request_fini_function(void * message_memory)
{
  homework1_petr__srv__StartStop_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember homework1_petr__srv__StartStop_Request__rosidl_typesupport_introspection_c__StartStop_Request_message_member_array[1] = {
  {
    "f",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homework1_petr__srv__StartStop_Request, f),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers homework1_petr__srv__StartStop_Request__rosidl_typesupport_introspection_c__StartStop_Request_message_members = {
  "homework1_petr__srv",  // message namespace
  "StartStop_Request",  // message name
  1,  // number of fields
  sizeof(homework1_petr__srv__StartStop_Request),
  homework1_petr__srv__StartStop_Request__rosidl_typesupport_introspection_c__StartStop_Request_message_member_array,  // message members
  homework1_petr__srv__StartStop_Request__rosidl_typesupport_introspection_c__StartStop_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  homework1_petr__srv__StartStop_Request__rosidl_typesupport_introspection_c__StartStop_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t homework1_petr__srv__StartStop_Request__rosidl_typesupport_introspection_c__StartStop_Request_message_type_support_handle = {
  0,
  &homework1_petr__srv__StartStop_Request__rosidl_typesupport_introspection_c__StartStop_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_homework1_petr
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homework1_petr, srv, StartStop_Request)() {
  if (!homework1_petr__srv__StartStop_Request__rosidl_typesupport_introspection_c__StartStop_Request_message_type_support_handle.typesupport_identifier) {
    homework1_petr__srv__StartStop_Request__rosidl_typesupport_introspection_c__StartStop_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &homework1_petr__srv__StartStop_Request__rosidl_typesupport_introspection_c__StartStop_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "homework1_petr/srv/detail/start_stop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "homework1_petr/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "homework1_petr/srv/detail/start_stop__functions.h"
// already included above
// #include "homework1_petr/srv/detail/start_stop__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void homework1_petr__srv__StartStop_Response__rosidl_typesupport_introspection_c__StartStop_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  homework1_petr__srv__StartStop_Response__init(message_memory);
}

void homework1_petr__srv__StartStop_Response__rosidl_typesupport_introspection_c__StartStop_Response_fini_function(void * message_memory)
{
  homework1_petr__srv__StartStop_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember homework1_petr__srv__StartStop_Response__rosidl_typesupport_introspection_c__StartStop_Response_message_member_array[1] = {
  {
    "n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(homework1_petr__srv__StartStop_Response, n),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers homework1_petr__srv__StartStop_Response__rosidl_typesupport_introspection_c__StartStop_Response_message_members = {
  "homework1_petr__srv",  // message namespace
  "StartStop_Response",  // message name
  1,  // number of fields
  sizeof(homework1_petr__srv__StartStop_Response),
  homework1_petr__srv__StartStop_Response__rosidl_typesupport_introspection_c__StartStop_Response_message_member_array,  // message members
  homework1_petr__srv__StartStop_Response__rosidl_typesupport_introspection_c__StartStop_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  homework1_petr__srv__StartStop_Response__rosidl_typesupport_introspection_c__StartStop_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t homework1_petr__srv__StartStop_Response__rosidl_typesupport_introspection_c__StartStop_Response_message_type_support_handle = {
  0,
  &homework1_petr__srv__StartStop_Response__rosidl_typesupport_introspection_c__StartStop_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_homework1_petr
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homework1_petr, srv, StartStop_Response)() {
  if (!homework1_petr__srv__StartStop_Response__rosidl_typesupport_introspection_c__StartStop_Response_message_type_support_handle.typesupport_identifier) {
    homework1_petr__srv__StartStop_Response__rosidl_typesupport_introspection_c__StartStop_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &homework1_petr__srv__StartStop_Response__rosidl_typesupport_introspection_c__StartStop_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "homework1_petr/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "homework1_petr/srv/detail/start_stop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers homework1_petr__srv__detail__start_stop__rosidl_typesupport_introspection_c__StartStop_service_members = {
  "homework1_petr__srv",  // service namespace
  "StartStop",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // homework1_petr__srv__detail__start_stop__rosidl_typesupport_introspection_c__StartStop_Request_message_type_support_handle,
  NULL  // response message
  // homework1_petr__srv__detail__start_stop__rosidl_typesupport_introspection_c__StartStop_Response_message_type_support_handle
};

static rosidl_service_type_support_t homework1_petr__srv__detail__start_stop__rosidl_typesupport_introspection_c__StartStop_service_type_support_handle = {
  0,
  &homework1_petr__srv__detail__start_stop__rosidl_typesupport_introspection_c__StartStop_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homework1_petr, srv, StartStop_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homework1_petr, srv, StartStop_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_homework1_petr
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homework1_petr, srv, StartStop)() {
  if (!homework1_petr__srv__detail__start_stop__rosidl_typesupport_introspection_c__StartStop_service_type_support_handle.typesupport_identifier) {
    homework1_petr__srv__detail__start_stop__rosidl_typesupport_introspection_c__StartStop_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)homework1_petr__srv__detail__start_stop__rosidl_typesupport_introspection_c__StartStop_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homework1_petr, srv, StartStop_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, homework1_petr, srv, StartStop_Response)()->data;
  }

  return &homework1_petr__srv__detail__start_stop__rosidl_typesupport_introspection_c__StartStop_service_type_support_handle;
}
