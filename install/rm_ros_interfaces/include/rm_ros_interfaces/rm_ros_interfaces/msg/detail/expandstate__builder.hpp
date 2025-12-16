// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Expandstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__EXPANDSTATE__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__EXPANDSTATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/expandstate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Expandstate_mode
{
public:
  explicit Init_Expandstate_mode(::rm_ros_interfaces::msg::Expandstate & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Expandstate mode(::rm_ros_interfaces::msg::Expandstate::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Expandstate msg_;
};

class Init_Expandstate_err_flag
{
public:
  explicit Init_Expandstate_err_flag(::rm_ros_interfaces::msg::Expandstate & msg)
  : msg_(msg)
  {}
  Init_Expandstate_mode err_flag(::rm_ros_interfaces::msg::Expandstate::_err_flag_type arg)
  {
    msg_.err_flag = std::move(arg);
    return Init_Expandstate_mode(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Expandstate msg_;
};

class Init_Expandstate_current
{
public:
  explicit Init_Expandstate_current(::rm_ros_interfaces::msg::Expandstate & msg)
  : msg_(msg)
  {}
  Init_Expandstate_err_flag current(::rm_ros_interfaces::msg::Expandstate::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_Expandstate_err_flag(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Expandstate msg_;
};

class Init_Expandstate_pos
{
public:
  Init_Expandstate_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Expandstate_current pos(::rm_ros_interfaces::msg::Expandstate::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_Expandstate_current(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Expandstate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Expandstate>()
{
  return rm_ros_interfaces::msg::builder::Init_Expandstate_pos();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__EXPANDSTATE__BUILDER_HPP_
