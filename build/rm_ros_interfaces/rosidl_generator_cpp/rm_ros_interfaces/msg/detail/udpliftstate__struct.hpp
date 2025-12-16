// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Udpliftstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__UDPLIFTSTATE__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__UDPLIFTSTATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Udpliftstate __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Udpliftstate __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Udpliftstate_
{
  using Type = Udpliftstate_<ContainerAllocator>;

  explicit Udpliftstate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0l;
      this->pos = 0.0f;
      this->current = 0;
      this->en_flag = false;
      this->err_flag = 0;
    }
  }

  explicit Udpliftstate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0l;
      this->pos = 0.0f;
      this->current = 0;
      this->en_flag = false;
      this->err_flag = 0;
    }
  }

  // field types and members
  using _height_type =
    int32_t;
  _height_type height;
  using _pos_type =
    float;
  _pos_type pos;
  using _current_type =
    int16_t;
  _current_type current;
  using _en_flag_type =
    bool;
  _en_flag_type en_flag;
  using _err_flag_type =
    uint16_t;
  _err_flag_type err_flag;

  // setters for named parameter idiom
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__pos(
    const float & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__current(
    const int16_t & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__en_flag(
    const bool & _arg)
  {
    this->en_flag = _arg;
    return *this;
  }
  Type & set__err_flag(
    const uint16_t & _arg)
  {
    this->err_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Udpliftstate_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Udpliftstate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Udpliftstate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Udpliftstate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Udpliftstate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Udpliftstate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Udpliftstate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Udpliftstate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Udpliftstate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Udpliftstate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Udpliftstate
    std::shared_ptr<rm_ros_interfaces::msg::Udpliftstate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Udpliftstate
    std::shared_ptr<rm_ros_interfaces::msg::Udpliftstate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Udpliftstate_ & other) const
  {
    if (this->height != other.height) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->en_flag != other.en_flag) {
      return false;
    }
    if (this->err_flag != other.err_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const Udpliftstate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Udpliftstate_

// alias to use template instance with default allocator
using Udpliftstate =
  rm_ros_interfaces::msg::Udpliftstate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__UDPLIFTSTATE__STRUCT_HPP_
