// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from homework1_petr:msg/TwistArray.idl
// generated code does not contain a copyright notice

#ifndef HOMEWORK1_PETR__MSG__DETAIL__TWIST_ARRAY__STRUCT_HPP_
#define HOMEWORK1_PETR__MSG__DETAIL__TWIST_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 't1'
// Member 't2'
// Member 't3'
// Member 't4'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__homework1_petr__msg__TwistArray __attribute__((deprecated))
#else
# define DEPRECATED__homework1_petr__msg__TwistArray __declspec(deprecated)
#endif

namespace homework1_petr
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TwistArray_
{
  using Type = TwistArray_<ContainerAllocator>;

  explicit TwistArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t1(_init),
    t2(_init),
    t3(_init),
    t4(_init)
  {
    (void)_init;
  }

  explicit TwistArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t1(_alloc, _init),
    t2(_alloc, _init),
    t3(_alloc, _init),
    t4(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _t1_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _t1_type t1;
  using _t2_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _t2_type t2;
  using _t3_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _t3_type t3;
  using _t4_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _t4_type t4;

  // setters for named parameter idiom
  Type & set__t1(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->t1 = _arg;
    return *this;
  }
  Type & set__t2(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->t2 = _arg;
    return *this;
  }
  Type & set__t3(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->t3 = _arg;
    return *this;
  }
  Type & set__t4(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->t4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    homework1_petr::msg::TwistArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const homework1_petr::msg::TwistArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<homework1_petr::msg::TwistArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<homework1_petr::msg::TwistArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      homework1_petr::msg::TwistArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<homework1_petr::msg::TwistArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      homework1_petr::msg::TwistArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<homework1_petr::msg::TwistArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<homework1_petr::msg::TwistArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<homework1_petr::msg::TwistArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__homework1_petr__msg__TwistArray
    std::shared_ptr<homework1_petr::msg::TwistArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__homework1_petr__msg__TwistArray
    std::shared_ptr<homework1_petr::msg::TwistArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TwistArray_ & other) const
  {
    if (this->t1 != other.t1) {
      return false;
    }
    if (this->t2 != other.t2) {
      return false;
    }
    if (this->t3 != other.t3) {
      return false;
    }
    if (this->t4 != other.t4) {
      return false;
    }
    return true;
  }
  bool operator!=(const TwistArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TwistArray_

// alias to use template instance with default allocator
using TwistArray =
  homework1_petr::msg::TwistArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace homework1_petr

#endif  // HOMEWORK1_PETR__MSG__DETAIL__TWIST_ARRAY__STRUCT_HPP_
