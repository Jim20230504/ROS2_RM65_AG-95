// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_ros_interfaces:msg/Alohastate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ALOHASTATE__BUILDER_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__ALOHASTATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_ros_interfaces/msg/detail/alohastate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Alohastate_io2_state
{
public:
  explicit Init_Alohastate_io2_state(::rm_ros_interfaces::msg::Alohastate & msg)
  : msg_(msg)
  {}
  ::rm_ros_interfaces::msg::Alohastate io2_state(::rm_ros_interfaces::msg::Alohastate::_io2_state_type arg)
  {
    msg_.io2_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Alohastate msg_;
};

class Init_Alohastate_io1_state
{
public:
  Init_Alohastate_io1_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Alohastate_io2_state io1_state(::rm_ros_interfaces::msg::Alohastate::_io1_state_type arg)
  {
    msg_.io1_state = std::move(arg);
    return Init_Alohastate_io2_state(msg_);
  }

private:
  ::rm_ros_interfaces::msg::Alohastate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_ros_interfaces::msg::Alohastate>()
{
  return rm_ros_interfaces::msg::builder::Init_Alohastate_io1_state();
}

}  // namespace rm_ros_interfaces

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ALOHASTATE__BUILDER_HPP_
