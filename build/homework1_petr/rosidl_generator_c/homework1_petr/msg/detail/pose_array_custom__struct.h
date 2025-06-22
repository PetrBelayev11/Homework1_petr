// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from homework1_petr:msg/PoseArrayCustom.idl
// generated code does not contain a copyright notice

#ifndef HOMEWORK1_PETR__MSG__DETAIL__POSE_ARRAY_CUSTOM__STRUCT_H_
#define HOMEWORK1_PETR__MSG__DETAIL__POSE_ARRAY_CUSTOM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 't1'
// Member 't2'
// Member 't3'
// Member 't4'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/PoseArrayCustom in the package homework1_petr.
typedef struct homework1_petr__msg__PoseArrayCustom
{
  geometry_msgs__msg__Pose t1;
  geometry_msgs__msg__Pose t2;
  geometry_msgs__msg__Pose t3;
  geometry_msgs__msg__Pose t4;
} homework1_petr__msg__PoseArrayCustom;

// Struct for a sequence of homework1_petr__msg__PoseArrayCustom.
typedef struct homework1_petr__msg__PoseArrayCustom__Sequence
{
  homework1_petr__msg__PoseArrayCustom * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} homework1_petr__msg__PoseArrayCustom__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOMEWORK1_PETR__MSG__DETAIL__POSE_ARRAY_CUSTOM__STRUCT_H_
