// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Alohastate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__ALOHASTATE__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__ALOHASTATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Alohastate in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Alohastate
{
  /// IO1状态（手柄光电检测），0为按键未触发，1为按键触发。
  int16_t io1_state;
  /// IO2状态（手柄光电检测），0为按键未触发，1为按键触发。
  int16_t io2_state;
} rm_ros_interfaces__msg__Alohastate;

// Struct for a sequence of rm_ros_interfaces__msg__Alohastate.
typedef struct rm_ros_interfaces__msg__Alohastate__Sequence
{
  rm_ros_interfaces__msg__Alohastate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Alohastate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__ALOHASTATE__STRUCT_H_
