// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Udpexpandstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__UDPEXPANDSTATE__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__UDPEXPANDSTATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Udpexpandstate __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Udpexpandstate __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Udpexpandstate_
{
  using Type = Udpexpandstate_<ContainerAllocator>;

  explicit Udpexpandstate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos = 0l;
      this->current = 0l;
      this->err_flag = 0;
      this->en_flag = false;
      this->joint_id = 0;
      this->mode = 0;
    }
  }

  explicit Udpexpandstate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos = 0l;
      this->current = 0l;
      this->err_flag = 0;
      this->en_flag = false;
      this->joint_id = 0;
      this->mode = 0;
    }
  }

  // field types and members
  using _pos_type =
    int32_t;
  _pos_type pos;
  using _current_type =
    int32_t;
  _current_type current;
  using _err_flag_type =
    uint16_t;
  _err_flag_type err_flag;
  using _en_flag_type =
    bool;
  _en_flag_type en_flag;
  using _joint_id_type =
    uint8_t;
  _joint_id_type joint_id;
  using _mode_type =
    int16_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__pos(
    const int32_t & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__current(
    const int32_t & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__err_flag(
    const uint16_t & _arg)
  {
    this->err_flag = _arg;
    return *this;
  }
  Type & set__en_flag(
    const bool & _arg)
  {
    this->en_flag = _arg;
    return *this;
  }
  Type & set__joint_id(
    const uint8_t & _arg)
  {
    this->joint_id = _arg;
    return *this;
  }
  Type & set__mode(
    const int16_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Udpexpandstate_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Udpexpandstate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Udpexpandstate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Udpexpandstate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Udpexpandstate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Udpexpandstate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Udpexpandstate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Udpexpandstate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Udpexpandstate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Udpexpandstate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Udpexpandstate
    std::shared_ptr<rm_ros_interfaces::msg::Udpexpandstate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Udpexpandstate
    std::shared_ptr<rm_ros_interfaces::msg::Udpexpandstate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Udpexpandstate_ & other) const
  {
    if (this->pos != other.pos) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->err_flag != other.err_flag) {
      return false;
    }
    if (this->en_flag != other.en_flag) {
      return false;
    }
    if (this->joint_id != other.joint_id) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const Udpexpandstate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Udpexpandstate_

// alias to use template instance with default allocator
using Udpexpandstate =
  rm_ros_interfaces::msg::Udpexpandstate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__UDPEXPANDSTATE__STRUCT_HPP_
