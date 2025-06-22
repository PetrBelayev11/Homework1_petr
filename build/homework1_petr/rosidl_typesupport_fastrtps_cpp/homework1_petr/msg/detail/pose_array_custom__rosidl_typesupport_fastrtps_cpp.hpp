// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from homework1_petr:msg/PoseArrayCustom.idl
// generated code does not contain a copyright notice

#ifndef HOMEWORK1_PETR__MSG__DETAIL__POSE_ARRAY_CUSTOM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define HOMEWORK1_PETR__MSG__DETAIL__POSE_ARRAY_CUSTOM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "homework1_petr/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "homework1_petr/msg/detail/pose_array_custom__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace homework1_petr
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_homework1_petr
cdr_serialize(
  const homework1_petr::msg::PoseArrayCustom & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_homework1_petr
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  homework1_petr::msg::PoseArrayCustom & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_homework1_petr
get_serialized_size(
  const homework1_petr::msg::PoseArrayCustom & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_homework1_petr
max_serialized_size_PoseArrayCustom(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace homework1_petr

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_homework1_petr
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, homework1_petr, msg, PoseArrayCustom)();

#ifdef __cplusplus
}
#endif

#endif  // HOMEWORK1_PETR__MSG__DETAIL__POSE_ARRAY_CUSTOM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
