// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from homework1_petr:srv/StartStop.idl
// generated code does not contain a copyright notice

#ifndef HOMEWORK1_PETR__SRV__DETAIL__START_STOP__STRUCT_H_
#define HOMEWORK1_PETR__SRV__DETAIL__START_STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/StartStop in the package homework1_petr.
typedef struct homework1_petr__srv__StartStop_Request
{
  int32_t f;
} homework1_petr__srv__StartStop_Request;

// Struct for a sequence of homework1_petr__srv__StartStop_Request.
typedef struct homework1_petr__srv__StartStop_Request__Sequence
{
  homework1_petr__srv__StartStop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} homework1_petr__srv__StartStop_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/StartStop in the package homework1_petr.
typedef struct homework1_petr__srv__StartStop_Response
{
  int32_t n;
} homework1_petr__srv__StartStop_Response;

// Struct for a sequence of homework1_petr__srv__StartStop_Response.
typedef struct homework1_petr__srv__StartStop_Response__Sequence
{
  homework1_petr__srv__StartStop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} homework1_petr__srv__StartStop_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOMEWORK1_PETR__SRV__DETAIL__START_STOP__STRUCT_H_
