// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Udpexpandstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__UDPEXPANDSTATE__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__UDPEXPANDSTATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/udpexpandstate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Udpexpandstate_mode
{
public:
  explicit Init_Udpexpandstate_mode(::rm_ros_interfaces::msg::Udpexpandstate & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Udpexpandstate mode(::rm_ros_interfaces::msg::Udpexpandstate::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Udpexpandstate msg_;
};

class Init_Udpexpandstate_joint_id
{
public:
  explicit Init_Udpexpandstate_joint_id(::rm_ros_interfaces::msg::Udpexpandstate & msg)
  : msg_(msg)
  {}
  Init_Udpexpandstate_mode joint_id(::rm_ros_interfaces::msg::Udpexpandstate::_joint_id_type arg)
  {
    msg_.joint_id = std::move(arg);
    return Init_Udpexpandstate_mode(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Udpexpandstate msg_;
};

class Init_Udpexpandstate_en_flag
{
public:
  explicit Init_Udpexpandstate_en_flag(::rm_ros_interfaces::msg::Udpexpandstate & msg)
  : msg_(msg)
  {}
  Init_Udpexpandstate_joint_id en_flag(::rm_ros_interfaces::msg::Udpexpandstate::_en_flag_type arg)
  {
    msg_.en_flag = std::move(arg);
    return Init_Udpexpandstate_joint_id(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Udpexpandstate msg_;
};

class Init_Udpexpandstate_err_flag
{
public:
  explicit Init_Udpexpandstate_err_flag(::rm_ros_interfaces::msg::Udpexpandstate & msg)
  : msg_(msg)
  {}
  Init_Udpexpandstate_en_flag err_flag(::rm_ros_interfaces::msg::Udpexpandstate::_err_flag_type arg)
  {
    msg_.err_flag = std::move(arg);
    return Init_Udpexpandstate_en_flag(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Udpexpandstate msg_;
};

class Init_Udpexpandstate_current
{
public:
  explicit Init_Udpexpandstate_current(::rm_ros_interfaces::msg::Udpexpandstate & msg)
  : msg_(msg)
  {}
  Init_Udpexpandstate_err_flag current(::rm_ros_interfaces::msg::Udpexpandstate::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_Udpexpandstate_err_flag(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Udpexpandstate msg_;
};

class Init_Udpexpandstate_pos
{
public:
  Init_Udpexpandstate_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Udpexpandstate_current pos(::rm_ros_interfaces::msg::Udpexpandstate::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_Udpexpandstate_current(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Udpexpandstate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Udpexpandstate>()
{
  return rm_ros_interfaces::msg::builder::Init_Udpexpandstate_pos();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__UDPEXPANDSTATE__BUILDER_HPP_
