// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_ros_interfaces:msg/Forcepositionmove.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__FORCEPOSITIONMOVE__STRUCT_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__FORCEPOSITIONMOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_ros_interfaces__msg__Forcepositionmove __attribute__((deprecated))
#else
# define DEPRECATED__rm_ros_interfaces__msg__Forcepositionmove __declspec(deprecated)
#endif

namespace rm_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Forcepositionmove_
{
  using Type = Forcepositionmove_<ContainerAllocator>;

  explicit Forcepositionmove_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = 0;
      this->sensor = 0;
      this->mode = 0;
      std::fill<typename std::array<uint8_t, 6>::iterator, uint8_t>(this->control_mode.begin(), this->control_mode.end(), 0);
      this->follow = false;
      std::fill<typename std::array<float, 6>::iterator, float>(this->desired_force.begin(), this->desired_force.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->limit_vel.begin(), this->limit_vel.end(), 0.0f);
      this->trajectory_mode = 0;
      this->radio = 0;
    }
  }

  explicit Forcepositionmove_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    control_mode(_alloc),
    desired_force(_alloc),
    limit_vel(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = 0;
      this->sensor = 0;
      this->mode = 0;
      std::fill<typename std::array<uint8_t, 6>::iterator, uint8_t>(this->control_mode.begin(), this->control_mode.end(), 0);
      this->follow = false;
      std::fill<typename std::array<float, 6>::iterator, float>(this->desired_force.begin(), this->desired_force.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->limit_vel.begin(), this->limit_vel.end(), 0.0f);
      this->trajectory_mode = 0;
      this->radio = 0;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _joint_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _joint_type joint;
  using _flag_type =
    uint8_t;
  _flag_type flag;
  using _sensor_type =
    uint8_t;
  _sensor_type sensor;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _control_mode_type =
    std::array<uint8_t, 6>;
  _control_mode_type control_mode;
  using _follow_type =
    bool;
  _follow_type follow;
  using _desired_force_type =
    std::array<float, 6>;
  _desired_force_type desired_force;
  using _limit_vel_type =
    std::array<float, 6>;
  _limit_vel_type limit_vel;
  using _trajectory_mode_type =
    uint8_t;
  _trajectory_mode_type trajectory_mode;
  using _radio_type =
    uint16_t;
  _radio_type radio;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__joint(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->joint = _arg;
    return *this;
  }
  Type & set__flag(
    const uint8_t & _arg)
  {
    this->flag = _arg;
    return *this;
  }
  Type & set__sensor(
    const uint8_t & _arg)
  {
    this->sensor = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__control_mode(
    const std::array<uint8_t, 6> & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__follow(
    const bool & _arg)
  {
    this->follow = _arg;
    return *this;
  }
  Type & set__desired_force(
    const std::array<float, 6> & _arg)
  {
    this->desired_force = _arg;
    return *this;
  }
  Type & set__limit_vel(
    const std::array<float, 6> & _arg)
  {
    this->limit_vel = _arg;
    return *this;
  }
  Type & set__trajectory_mode(
    const uint8_t & _arg)
  {
    this->trajectory_mode = _arg;
    return *this;
  }
  Type & set__radio(
    const uint16_t & _arg)
  {
    this->radio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_ros_interfaces::msg::Forcepositionmove_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_ros_interfaces::msg::Forcepositionmove_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Forcepositionmove_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_ros_interfaces::msg::Forcepositionmove_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Forcepositionmove_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Forcepositionmove_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_ros_interfaces::msg::Forcepositionmove_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_ros_interfaces::msg::Forcepositionmove_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Forcepositionmove_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_ros_interfaces::msg::Forcepositionmove_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_ros_interfaces__msg__Forcepositionmove
    std::shared_ptr<rm_ros_interfaces::msg::Forcepositionmove_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_ros_interfaces__msg__Forcepositionmove
    std::shared_ptr<rm_ros_interfaces::msg::Forcepositionmove_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Forcepositionmove_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->joint != other.joint) {
      return false;
    }
    if (this->flag != other.flag) {
      return false;
    }
    if (this->sensor != other.sensor) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->follow != other.follow) {
      return false;
    }
    if (this->desired_force != other.desired_force) {
      return false;
    }
    if (this->limit_vel != other.limit_vel) {
      return false;
    }
    if (this->trajectory_mode != other.trajectory_mode) {
      return false;
    }
    if (this->radio != other.radio) {
      return false;
    }
    return true;
  }
  bool operator!=(const Forcepositionmove_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Forcepositionmove_

// alias to use template instance with default allocator
using Forcepositionmove =
  rm_ros_interfaces::msg::Forcepositionmove_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__FORCEPOSITIONMOVE__STRUCT_HPP_
