// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Expandpos.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__EXPANDPOS__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__EXPANDPOS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Expandpos in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Expandpos
{
  /// 当前角度
  int32_t pos;
  /// 速度百分比，1~100
  uint16_t speed;
  /// true阻塞状态，false非阻塞状态
  bool block;
} rm_ros_interfaces__msg__Expandpos;

// Struct for a sequence of rm_ros_interfaces__msg__Expandpos.
typedef struct rm_ros_interfaces__msg__Expandpos__Sequence
{
  rm_ros_interfaces__msg__Expandpos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Expandpos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__EXPANDPOS__STRUCT_H_
