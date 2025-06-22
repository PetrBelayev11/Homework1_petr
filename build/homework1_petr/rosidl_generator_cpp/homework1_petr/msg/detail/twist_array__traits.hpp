// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from homework1_petr:msg/TwistArray.idl
// generated code does not contain a copyright notice

#ifndef HOMEWORK1_PETR__MSG__DETAIL__TWIST_ARRAY__TRAITS_HPP_
#define HOMEWORK1_PETR__MSG__DETAIL__TWIST_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "homework1_petr/msg/detail/twist_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 't1'
// Member 't2'
// Member 't3'
// Member 't4'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace homework1_petr
{

namespace msg
{

inline void to_flow_style_yaml(
  const TwistArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: t1
  {
    out << "t1: ";
    to_flow_style_yaml(msg.t1, out);
    out << ", ";
  }

  // member: t2
  {
    out << "t2: ";
    to_flow_style_yaml(msg.t2, out);
    out << ", ";
  }

  // member: t3
  {
    out << "t3: ";
    to_flow_style_yaml(msg.t3, out);
    out << ", ";
  }

  // member: t4
  {
    out << "t4: ";
    to_flow_style_yaml(msg.t4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TwistArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: t1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t1:\n";
    to_block_style_yaml(msg.t1, out, indentation + 2);
  }

  // member: t2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t2:\n";
    to_block_style_yaml(msg.t2, out, indentation + 2);
  }

  // member: t3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t3:\n";
    to_block_style_yaml(msg.t3, out, indentation + 2);
  }

  // member: t4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t4:\n";
    to_block_style_yaml(msg.t4, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TwistArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace homework1_petr

namespace rosidl_generator_traits
{

[[deprecated("use homework1_petr::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const homework1_petr::msg::TwistArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  homework1_petr::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use homework1_petr::msg::to_yaml() instead")]]
inline std::string to_yaml(const homework1_petr::msg::TwistArray & msg)
{
  return homework1_petr::msg::to_yaml(msg);
}

template<>
inline const char * data_type<homework1_petr::msg::TwistArray>()
{
  return "homework1_petr::msg::TwistArray";
}

template<>
inline const char * name<homework1_petr::msg::TwistArray>()
{
  return "homework1_petr/msg/TwistArray";
}

template<>
struct has_fixed_size<homework1_petr::msg::TwistArray>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<homework1_petr::msg::TwistArray>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<homework1_petr::msg::TwistArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HOMEWORK1_PETR__MSG__DETAIL__TWIST_ARRAY__TRAITS_HPP_
