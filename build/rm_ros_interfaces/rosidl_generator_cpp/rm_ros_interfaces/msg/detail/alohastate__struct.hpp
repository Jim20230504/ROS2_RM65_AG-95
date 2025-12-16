// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Alohastate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ALOHASTATE__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__ALOHASTATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Alohastate __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Alohastate __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Alohastate_
{
  using Type = Alohastate_<ContainerAllocator>;

  explicit Alohastate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->io1_state = 0;
      this->io2_state = 0;
    }
  }

  explicit Alohastate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->io1_state = 0;
      this->io2_state = 0;
    }
  }

  // field types and members
  using _io1_state_type =
    int16_t;
  _io1_state_type io1_state;
  using _io2_state_type =
    int16_t;
  _io2_state_type io2_state;

  // setters for named parameter idiom
  Type & set__io1_state(
    const int16_t & _arg)
  {
    this->io1_state = _arg;
    return *this;
  }
  Type & set__io2_state(
    const int16_t & _arg)
  {
    this->io2_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Alohastate_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Alohastate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Alohastate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Alohastate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Alohastate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Alohastate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Alohastate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Alohastate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Alohastate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Alohastate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Alohastate
    std::shared_ptr<rm_ros_interfaces::msg::Alohastate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Alohastate
    std::shared_ptr<rm_ros_interfaces::msg::Alohastate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Alohastate_ & other) const
  {
    if (this->io1_state != other.io1_state) {
      return false;
    }
    if (this->io2_state != other.io2_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Alohastate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Alohastate_

// alias to use template instance with default allocator
using Alohastate =
  rm_ros_interfaces::msg::Alohastate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ALOHASTATE__STRUCT_HPP_
