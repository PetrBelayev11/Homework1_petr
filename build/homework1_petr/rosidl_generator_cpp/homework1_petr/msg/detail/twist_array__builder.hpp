// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from homework1_petr:msg/TwistArray.idl
// generated code does not contain a copyright notice

#ifndef HOMEWORK1_PETR__MSG__DETAIL__TWIST_ARRAY__BUILDER_HPP_
#define HOMEWORK1_PETR__MSG__DETAIL__TWIST_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "homework1_petr/msg/detail/twist_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace homework1_petr
{

namespace msg
{

namespace builder
{

class Init_TwistArray_t4
{
public:
  explicit Init_TwistArray_t4(::homework1_petr::msg::TwistArray & msg)
  : msg_(msg)
  {}
  ::homework1_petr::msg::TwistArray t4(::homework1_petr::msg::TwistArray::_t4_type arg)
  {
    msg_.t4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::homework1_petr::msg::TwistArray msg_;
};

class Init_TwistArray_t3
{
public:
  explicit Init_TwistArray_t3(::homework1_petr::msg::TwistArray & msg)
  : msg_(msg)
  {}
  Init_TwistArray_t4 t3(::homework1_petr::msg::TwistArray::_t3_type arg)
  {
    msg_.t3 = std::move(arg);
    return Init_TwistArray_t4(msg_);
  }

private:
  ::homework1_petr::msg::TwistArray msg_;
};

class Init_TwistArray_t2
{
public:
  explicit Init_TwistArray_t2(::homework1_petr::msg::TwistArray & msg)
  : msg_(msg)
  {}
  Init_TwistArray_t3 t2(::homework1_petr::msg::TwistArray::_t2_type arg)
  {
    msg_.t2 = std::move(arg);
    return Init_TwistArray_t3(msg_);
  }

private:
  ::homework1_petr::msg::TwistArray msg_;
};

class Init_TwistArray_t1
{
public:
  Init_TwistArray_t1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwistArray_t2 t1(::homework1_petr::msg::TwistArray::_t1_type arg)
  {
    msg_.t1 = std::move(arg);
    return Init_TwistArray_t2(msg_);
  }

private:
  ::homework1_petr::msg::TwistArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::homework1_petr::msg::TwistArray>()
{
  return homework1_petr::msg::builder::Init_TwistArray_t1();
}

}  // namespace homework1_petr

#endif  // HOMEWORK1_PETR__MSG__DETAIL__TWIST_ARRAY__BUILDER_HPP_
