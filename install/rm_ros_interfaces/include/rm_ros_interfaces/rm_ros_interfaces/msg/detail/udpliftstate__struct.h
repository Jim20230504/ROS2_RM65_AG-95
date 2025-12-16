// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Udpliftstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__UDPLIFTSTATE__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__UDPLIFTSTATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Udpliftstate in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Udpliftstate
{
  /// 当前高度 单位：mm，精度：1mm
  int32_t height;
  /// 当前角度 精度 0.001°，单位：°
  float pos;
  /// 当前电流 单位：mA，精度：1mA
  int16_t current;
  /// 当前关节使能状态 1 为上使能，0 为掉使能
  bool en_flag;
  /// 驱动错误代码
  uint16_t err_flag;
} rm_ros_interfaces__msg__Udpliftstate;

// Struct for a sequence of rm_ros_interfaces__msg__Udpliftstate.
typedef struct rm_ros_interfaces__msg__Udpliftstate__Sequence
{
  rm_ros_interfaces__msg__Udpliftstate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Udpliftstate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__UDPLIFTSTATE__STRUCT_H_
