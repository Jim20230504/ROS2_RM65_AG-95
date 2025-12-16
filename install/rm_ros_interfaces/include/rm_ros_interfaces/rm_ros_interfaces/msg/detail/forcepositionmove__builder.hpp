// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Forcepositionmove.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__FORCEPOSITIONMOVE__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__FORCEPOSITIONMOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/forcepositionmove__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Forcepositionmove_radio
{
public:
  explicit Init_Forcepositionmove_radio(::rm_ros_interfaces::msg::Forcepositionmove & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Forcepositionmove radio(::rm_ros_interfaces::msg::Forcepositionmove::_radio_type arg)
  {
    msg_.radio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Forcepositionmove msg_;
};

class Init_Forcepositionmove_trajectory_mode
{
public:
  explicit Init_Forcepositionmove_trajectory_mode(::rm_ros_interfaces::msg::Forcepositionmove & msg)
  : msg_(msg)
  {}
  Init_Forcepositionmove_radio trajectory_mode(::rm_ros_interfaces::msg::Forcepositionmove::_trajectory_mode_type arg)
  {
    msg_.trajectory_mode = std::move(arg);
    return Init_Forcepositionmove_radio(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Forcepositionmove msg_;
};

class Init_Forcepositionmove_limit_vel
{
public:
  explicit Init_Forcepositionmove_limit_vel(::rm_ros_interfaces::msg::Forcepositionmove & msg)
  : msg_(msg)
  {}
  Init_Forcepositionmove_trajectory_mode limit_vel(::rm_ros_interfaces::msg::Forcepositionmove::_limit_vel_type arg)
  {
    msg_.limit_vel = std::move(arg);
    return Init_Forcepositionmove_trajectory_mode(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Forcepositionmove msg_;
};

class Init_Forcepositionmove_desired_force
{
public:
  explicit Init_Forcepositionmove_desired_force(::rm_ros_interfaces::msg::Forcepositionmove & msg)
  : msg_(msg)
  {}
  Init_Forcepositionmove_limit_vel desired_force(::rm_ros_interfaces::msg::Forcepositionmove::_desired_force_type arg)
  {
    msg_.desired_force = std::move(arg);
    return Init_Forcepositionmove_limit_vel(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Forcepositionmove msg_;
};

class Init_Forcepositionmove_follow
{
public:
  explicit Init_Forcepositionmove_follow(::rm_ros_interfaces::msg::Forcepositionmove & msg)
  : msg_(msg)
  {}
  Init_Forcepositionmove_desired_force follow(::rm_ros_interfaces::msg::Forcepositionmove::_follow_type arg)
  {
    msg_.follow = std::move(arg);
    return Init_Forcepositionmove_desired_force(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Forcepositionmove msg_;
};

class Init_Forcepositionmove_control_mode
{
public:
  explicit Init_Forcepositionmove_control_mode(::rm_ros_interfaces::msg::Forcepositionmove & msg)
  : msg_(msg)
  {}
  Init_Forcepositionmove_follow control_mode(::rm_ros_interfaces::msg::Forcepositionmove::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_Forcepositionmove_follow(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Forcepositionmove msg_;
};

class Init_Forcepositionmove_mode
{
public:
  explicit Init_Forcepositionmove_mode(::rm_ros_interfaces::msg::Forcepositionmove & msg)
  : msg_(msg)
  {}
  Init_Forcepositionmove_control_mode mode(::rm_ros_interfaces::msg::Forcepositionmove::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Forcepositionmove_control_mode(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Forcepositionmove msg_;
};

class Init_Forcepositionmove_sensor
{
public:
  explicit Init_Forcepositionmove_sensor(::rm_ros_interfaces::msg::Forcepositionmove & msg)
  : msg_(msg)
  {}
  Init_Forcepositionmove_mode sensor(::rm_ros_interfaces::msg::Forcepositionmove::_sensor_type arg)
  {
    msg_.sensor = std::move(arg);
    return Init_Forcepositionmove_mode(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Forcepositionmove msg_;
};

class Init_Forcepositionmove_flag
{
public:
  explicit Init_Forcepositionmove_flag(::rm_ros_interfaces::msg::Forcepositionmove & msg)
  : msg_(msg)
  {}
  Init_Forcepositionmove_sensor flag(::rm_ros_interfaces::msg::Forcepositionmove::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return Init_Forcepositionmove_sensor(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Forcepositionmove msg_;
};

class Init_Forcepositionmove_joint
{
public:
  explicit Init_Forcepositionmove_joint(::rm_ros_interfaces::msg::Forcepositionmove & msg)
  : msg_(msg)
  {}
  Init_Forcepositionmove_flag joint(::rm_ros_interfaces::msg::Forcepositionmove::_joint_type arg)
  {
    msg_.joint = std::move(arg);
    return Init_Forcepositionmove_flag(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Forcepositionmove msg_;
};

class Init_Forcepositionmove_pose
{
public:
  Init_Forcepositionmove_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Forcepositionmove_joint pose(::rm_ros_interfaces::msg::Forcepositionmove::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Forcepositionmove_joint(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Forcepositionmove msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Forcepositionmove>()
{
  return rm_ros_interfaces::msg::builder::Init_Forcepositionmove_pose();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__FORCEPOSITIONMOVE__BUILDER_HPP_
