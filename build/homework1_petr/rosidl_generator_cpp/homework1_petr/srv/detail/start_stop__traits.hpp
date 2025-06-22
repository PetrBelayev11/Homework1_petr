// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from homework1_petr:srv/StartStop.idl
// generated code does not contain a copyright notice

#ifndef HOMEWORK1_PETR__SRV__DETAIL__START_STOP__TRAITS_HPP_
#define HOMEWORK1_PETR__SRV__DETAIL__START_STOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "homework1_petr/srv/detail/start_stop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace homework1_petr
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartStop_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: f
  {
    out << "f: ";
    rosidl_generator_traits::value_to_yaml(msg.f, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f: ";
    rosidl_generator_traits::value_to_yaml(msg.f, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartStop_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace homework1_petr

namespace rosidl_generator_traits
{

[[deprecated("use homework1_petr::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const homework1_petr::srv::StartStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  homework1_petr::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use homework1_petr::srv::to_yaml() instead")]]
inline std::string to_yaml(const homework1_petr::srv::StartStop_Request & msg)
{
  return homework1_petr::srv::to_yaml(msg);
}

template<>
inline const char * data_type<homework1_petr::srv::StartStop_Request>()
{
  return "homework1_petr::srv::StartStop_Request";
}

template<>
inline const char * name<homework1_petr::srv::StartStop_Request>()
{
  return "homework1_petr/srv/StartStop_Request";
}

template<>
struct has_fixed_size<homework1_petr::srv::StartStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<homework1_petr::srv::StartStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<homework1_petr::srv::StartStop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace homework1_petr
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartStop_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: n
  {
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartStop_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace homework1_petr

namespace rosidl_generator_traits
{

[[deprecated("use homework1_petr::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const homework1_petr::srv::StartStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  homework1_petr::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use homework1_petr::srv::to_yaml() instead")]]
inline std::string to_yaml(const homework1_petr::srv::StartStop_Response & msg)
{
  return homework1_petr::srv::to_yaml(msg);
}

template<>
inline const char * data_type<homework1_petr::srv::StartStop_Response>()
{
  return "homework1_petr::srv::StartStop_Response";
}

template<>
inline const char * name<homework1_petr::srv::StartStop_Response>()
{
  return "homework1_petr/srv/StartStop_Response";
}

template<>
struct has_fixed_size<homework1_petr::srv::StartStop_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<homework1_petr::srv::StartStop_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<homework1_petr::srv::StartStop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<homework1_petr::srv::StartStop>()
{
  return "homework1_petr::srv::StartStop";
}

template<>
inline const char * name<homework1_petr::srv::StartStop>()
{
  return "homework1_petr/srv/StartStop";
}

template<>
struct has_fixed_size<homework1_petr::srv::StartStop>
  : std::integral_constant<
    bool,
    has_fixed_size<homework1_petr::srv::StartStop_Request>::value &&
    has_fixed_size<homework1_petr::srv::StartStop_Response>::value
  >
{
};

template<>
struct has_bounded_size<homework1_petr::srv::StartStop>
  : std::integral_constant<
    bool,
    has_bounded_size<homework1_petr::srv::StartStop_Request>::value &&
    has_bounded_size<homework1_petr::srv::StartStop_Response>::value
  >
{
};

template<>
struct is_service<homework1_petr::srv::StartStop>
  : std::true_type
{
};

template<>
struct is_service_request<homework1_petr::srv::StartStop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<homework1_petr::srv::StartStop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HOMEWORK1_PETR__SRV__DETAIL__START_STOP__TRAITS_HPP_
