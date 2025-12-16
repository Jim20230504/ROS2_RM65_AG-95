// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Udpliftstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__UDPLIFTSTATE__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__UDPLIFTSTATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/udpliftstate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Udpliftstate_err_flag
{
public:
  explicit Init_Udpliftstate_err_flag(::rm_ros_interfaces::msg::Udpliftstate & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Udpliftstate err_flag(::rm_ros_interfaces::msg::Udpliftstate::_err_flag_type arg)
  {
    msg_.err_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Udpliftstate msg_;
};

class Init_Udpliftstate_en_flag
{
public:
  explicit Init_Udpliftstate_en_flag(::rm_ros_interfaces::msg::Udpliftstate & msg)
  : msg_(msg)
  {}
  Init_Udpliftstate_err_flag en_flag(::rm_ros_interfaces::msg::Udpliftstate::_en_flag_type arg)
  {
    msg_.en_flag = std::move(arg);
    return Init_Udpliftstate_err_flag(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Udpliftstate msg_;
};

class Init_Udpliftstate_current
{
public:
  explicit Init_Udpliftstate_current(::rm_ros_interfaces::msg::Udpliftstate & msg)
  : msg_(msg)
  {}
  Init_Udpliftstate_en_flag current(::rm_ros_interfaces::msg::Udpliftstate::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_Udpliftstate_en_flag(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Udpliftstate msg_;
};

class Init_Udpliftstate_pos
{
public:
  explicit Init_Udpliftstate_pos(::rm_ros_interfaces::msg::Udpliftstate & msg)
  : msg_(msg)
  {}
  Init_Udpliftstate_current pos(::rm_ros_interfaces::msg::Udpliftstate::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_Udpliftstate_current(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Udpliftstate msg_;
};

class Init_Udpliftstate_height
{
public:
  Init_Udpliftstate_height()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Udpliftstate_pos height(::rm_ros_interfaces::msg::Udpliftstate::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Udpliftstate_pos(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Udpliftstate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Udpliftstate>()
{
  return rm_ros_interfaces::msg::builder::Init_Udpliftstate_height();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__UDPLIFTSTATE__BUILDER_HPP_
