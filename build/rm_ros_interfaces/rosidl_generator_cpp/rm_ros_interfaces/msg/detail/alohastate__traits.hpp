// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_ros_interfaces:msg/Alohastate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ALOHASTATE__TRAITS_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__ALOHASTATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_ros_interfaces/msg/detail/alohastate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Alohastate & msg,
  std::ostream & out)
{
  out << "{";
  // member: io1_state
  {
    out << "io1_state: ";
    rosidl_generator_traits::value_to_yaml(msg.io1_state, out);
    out << ", ";
  }

  // member: io2_state
  {
    out << "io2_state: ";
    rosidl_generator_traits::value_to_yaml(msg.io2_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Alohastate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: io1_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io1_state: ";
    rosidl_generator_traits::value_to_yaml(msg.io1_state, out);
    out << "\n";
  }

  // member: io2_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io2_state: ";
    rosidl_generator_traits::value_to_yaml(msg.io2_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Alohastate & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rm_ros_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_ros_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_ros_interfaces::msg::Alohastate & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_ros_interfaces::msg::Alohastate & msg)
{
  return rm_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_ros_interfaces::msg::Alohastate>()
{
  return "rm_ros_interfaces::msg::Alohastate";
}

template<>
inline const char * name<rm_ros_interfaces::msg::Alohastate>()
{
  return "rm_ros_interfaces/msg/Alohastate";
}

template<>
struct has_fixed_size<rm_ros_interfaces::msg::Alohastate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_ros_interfaces::msg::Alohastate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_ros_interfaces::msg::Alohastate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ALOHASTATE__TRAITS_HPP_
