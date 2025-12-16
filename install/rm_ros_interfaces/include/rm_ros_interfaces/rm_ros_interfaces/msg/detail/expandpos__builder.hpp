// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Expandpos.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__EXPANDPOS__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__EXPANDPOS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/expandpos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Expandpos_block
{
public:
  explicit Init_Expandpos_block(::rm_ros_interfaces::msg::Expandpos & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Expandpos block(::rm_ros_interfaces::msg::Expandpos::_block_type arg)
  {
    msg_.block = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Expandpos msg_;
};

class Init_Expandpos_speed
{
public:
  explicit Init_Expandpos_speed(::rm_ros_interfaces::msg::Expandpos & msg)
  : msg_(msg)
  {}
  Init_Expandpos_block speed(::rm_ros_interfaces::msg::Expandpos::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Expandpos_block(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Expandpos msg_;
};

class Init_Expandpos_pos
{
public:
  Init_Expandpos_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Expandpos_speed pos(::rm_ros_interfaces::msg::Expandpos::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_Expandpos_speed(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Expandpos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Expandpos>()
{
  return rm_ros_interfaces::msg::builder::Init_Expandpos_pos();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__EXPANDPOS__BUILDER_HPP_
