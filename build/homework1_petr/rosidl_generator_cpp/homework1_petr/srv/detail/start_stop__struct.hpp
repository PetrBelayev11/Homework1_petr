// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from homework1_petr:srv/StartStop.idl
// generated code does not contain a copyright notice

#ifndef HOMEWORK1_PETR__SRV__DETAIL__START_STOP__STRUCT_HPP_
#define HOMEWORK1_PETR__SRV__DETAIL__START_STOP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__homework1_petr__srv__StartStop_Request __attribute__((deprecated))
#else
# define DEPRECATED__homework1_petr__srv__StartStop_Request __declspec(deprecated)
#endif

namespace homework1_petr
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartStop_Request_
{
  using Type = StartStop_Request_<ContainerAllocator>;

  explicit StartStop_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f = 0l;
    }
  }

  explicit StartStop_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f = 0l;
    }
  }

  // field types and members
  using _f_type =
    int32_t;
  _f_type f;

  // setters for named parameter idiom
  Type & set__f(
    const int32_t & _arg)
  {
    this->f = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    homework1_petr::srv::StartStop_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const homework1_petr::srv::StartStop_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<homework1_petr::srv::StartStop_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<homework1_petr::srv::StartStop_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      homework1_petr::srv::StartStop_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<homework1_petr::srv::StartStop_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      homework1_petr::srv::StartStop_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<homework1_petr::srv::StartStop_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<homework1_petr::srv::StartStop_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<homework1_petr::srv::StartStop_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__homework1_petr__srv__StartStop_Request
    std::shared_ptr<homework1_petr::srv::StartStop_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__homework1_petr__srv__StartStop_Request
    std::shared_ptr<homework1_petr::srv::StartStop_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartStop_Request_ & other) const
  {
    if (this->f != other.f) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartStop_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartStop_Request_

// alias to use template instance with default allocator
using StartStop_Request =
  homework1_petr::srv::StartStop_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace homework1_petr


#ifndef _WIN32
# define DEPRECATED__homework1_petr__srv__StartStop_Response __attribute__((deprecated))
#else
# define DEPRECATED__homework1_petr__srv__StartStop_Response __declspec(deprecated)
#endif

namespace homework1_petr
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartStop_Response_
{
  using Type = StartStop_Response_<ContainerAllocator>;

  explicit StartStop_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0l;
    }
  }

  explicit StartStop_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0l;
    }
  }

  // field types and members
  using _n_type =
    int32_t;
  _n_type n;

  // setters for named parameter idiom
  Type & set__n(
    const int32_t & _arg)
  {
    this->n = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    homework1_petr::srv::StartStop_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const homework1_petr::srv::StartStop_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<homework1_petr::srv::StartStop_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<homework1_petr::srv::StartStop_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      homework1_petr::srv::StartStop_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<homework1_petr::srv::StartStop_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      homework1_petr::srv::StartStop_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<homework1_petr::srv::StartStop_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<homework1_petr::srv::StartStop_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<homework1_petr::srv::StartStop_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__homework1_petr__srv__StartStop_Response
    std::shared_ptr<homework1_petr::srv::StartStop_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__homework1_petr__srv__StartStop_Response
    std::shared_ptr<homework1_petr::srv::StartStop_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartStop_Response_ & other) const
  {
    if (this->n != other.n) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartStop_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartStop_Response_

// alias to use template instance with default allocator
using StartStop_Response =
  homework1_petr::srv::StartStop_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace homework1_petr

namespace homework1_petr
{

namespace srv
{

struct StartStop
{
  using Request = homework1_petr::srv::StartStop_Request;
  using Response = homework1_petr::srv::StartStop_Response;
};

}  // namespace srv

}  // namespace homework1_petr

#endif  // HOMEWORK1_PETR__SRV__DETAIL__START_STOP__STRUCT_HPP_
