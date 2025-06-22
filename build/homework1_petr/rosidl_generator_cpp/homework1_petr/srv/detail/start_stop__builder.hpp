// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from homework1_petr:srv/StartStop.idl
// generated code does not contain a copyright notice

#ifndef HOMEWORK1_PETR__SRV__DETAIL__START_STOP__BUILDER_HPP_
#define HOMEWORK1_PETR__SRV__DETAIL__START_STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "homework1_petr/srv/detail/start_stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace homework1_petr
{

namespace srv
{

namespace builder
{

class Init_StartStop_Request_f
{
public:
  Init_StartStop_Request_f()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::homework1_petr::srv::StartStop_Request f(::homework1_petr::srv::StartStop_Request::_f_type arg)
  {
    msg_.f = std::move(arg);
    return std::move(msg_);
  }

private:
  ::homework1_petr::srv::StartStop_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::homework1_petr::srv::StartStop_Request>()
{
  return homework1_petr::srv::builder::Init_StartStop_Request_f();
}

}  // namespace homework1_petr


namespace homework1_petr
{

namespace srv
{

namespace builder
{

class Init_StartStop_Response_n
{
public:
  Init_StartStop_Response_n()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::homework1_petr::srv::StartStop_Response n(::homework1_petr::srv::StartStop_Response::_n_type arg)
  {
    msg_.n = std::move(arg);
    return std::move(msg_);
  }

private:
  ::homework1_petr::srv::StartStop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::homework1_petr::srv::StartStop_Response>()
{
  return homework1_petr::srv::builder::Init_StartStop_Response_n();
}

}  // namespace homework1_petr

#endif  // HOMEWORK1_PETR__SRV__DETAIL__START_STOP__BUILDER_HPP_
