// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Expandstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__EXPANDSTATE__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__EXPANDSTATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Expandstate in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Expandstate
{
  /// 当前高度
  int32_t pos;
  /// 当前电流
  int32_t current;
  /// 驱动错误代码
  uint16_t err_flag;
  /// 当前升降状态，0-空闲，1-正方向速度运动，2-正方向位置运动，3-负方向速度运动，4-负方向位置运动
  int16_t mode;
} rm_ros_interfaces__msg__Expandstate;

// Struct for a sequence of rm_ros_interfaces__msg__Expandstate.
typedef struct rm_ros_interfaces__msg__Expandstate__Sequence
{
  rm_ros_interfaces__msg__Expandstate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Expandstate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__EXPANDSTATE__STRUCT_H_
