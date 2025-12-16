// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_ros_interfaces:msg/Forcepositionmove.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__FORCEPOSITIONMOVE__TRAITS_HPP_
#define RM_ROS_INTERFACES__MSG__DETAIL__FORCEPOSITIONMOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_ros_interfaces/msg/detail/forcepositionmove__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rm_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Forcepositionmove & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: joint
  {
    if (msg.joint.size() == 0) {
      out << "joint: []";
    } else {
      out << "joint: [";
      size_t pending_items = msg.joint.size();
      for (auto item : msg.joint) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: flag
  {
    out << "flag: ";
    rosidl_generator_traits::value_to_yaml(msg.flag, out);
    out << ", ";
  }

  // member: sensor
  {
    out << "sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: control_mode
  {
    if (msg.control_mode.size() == 0) {
      out << "control_mode: []";
    } else {
      out << "control_mode: [";
      size_t pending_items = msg.control_mode.size();
      for (auto item : msg.control_mode) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: follow
  {
    out << "follow: ";
    rosidl_generator_traits::value_to_yaml(msg.follow, out);
    out << ", ";
  }

  // member: desired_force
  {
    if (msg.desired_force.size() == 0) {
      out << "desired_force: []";
    } else {
      out << "desired_force: [";
      size_t pending_items = msg.desired_force.size();
      for (auto item : msg.desired_force) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: limit_vel
  {
    if (msg.limit_vel.size() == 0) {
      out << "limit_vel: []";
    } else {
      out << "limit_vel: [";
      size_t pending_items = msg.limit_vel.size();
      for (auto item : msg.limit_vel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: trajectory_mode
  {
    out << "trajectory_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_mode, out);
    out << ", ";
  }

  // member: radio
  {
    out << "radio: ";
    rosidl_generator_traits::value_to_yaml(msg.radio, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Forcepositionmove & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint.size() == 0) {
      out << "joint: []\n";
    } else {
      out << "joint:\n";
      for (auto item : msg.joint) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag: ";
    rosidl_generator_traits::value_to_yaml(msg.flag, out);
    out << "\n";
  }

  // member: sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.control_mode.size() == 0) {
      out << "control_mode: []\n";
    } else {
      out << "control_mode:\n";
      for (auto item : msg.control_mode) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: follow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "follow: ";
    rosidl_generator_traits::value_to_yaml(msg.follow, out);
    out << "\n";
  }

  // member: desired_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.desired_force.size() == 0) {
      out << "desired_force: []\n";
    } else {
      out << "desired_force:\n";
      for (auto item : msg.desired_force) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: limit_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.limit_vel.size() == 0) {
      out << "limit_vel: []\n";
    } else {
      out << "limit_vel:\n";
      for (auto item : msg.limit_vel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: trajectory_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_mode, out);
    out << "\n";
  }

  // member: radio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radio: ";
    rosidl_generator_traits::value_to_yaml(msg.radio, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Forcepositionmove & msg, bool use_flow_style = false)
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
  const rm_ros_interfaces::msg::Forcepositionmove & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_ros_interfaces::msg::Forcepositionmove & msg)
{
  return rm_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_ros_interfaces::msg::Forcepositionmove>()
{
  return "rm_ros_interfaces::msg::Forcepositionmove";
}

template<>
inline const char * name<rm_ros_interfaces::msg::Forcepositionmove>()
{
  return "rm_ros_interfaces/msg/Forcepositionmove";
}

template<>
struct has_fixed_size<rm_ros_interfaces::msg::Forcepositionmove>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rm_ros_interfaces::msg::Forcepositionmove>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rm_ros_interfaces::msg::Forcepositionmove>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__FORCEPOSITIONMOVE__TRAITS_HPP_
