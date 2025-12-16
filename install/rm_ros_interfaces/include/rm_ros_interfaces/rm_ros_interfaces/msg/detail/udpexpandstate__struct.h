// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Udpexpandstate.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__UDPEXPANDSTATE__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__UDPEXPANDSTATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Udpexpandstate in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Udpexpandstate
{
  /// 当前角度 精度 0.001°，单位：°
  int32_t pos;
  /// 当前电流 单位：mA，精度：1mA
  int32_t current;
  /// 驱动错误代码
  uint16_t err_flag;
  /// 1 为上使能，0 为掉使能
  bool en_flag;
  /// 关节id号
  uint8_t joint_id;
  /// 当前升降状态，0-空闲，1-正方向速度运动，2-正方向位置运动，3-负方向速度运动，4-负方向位置运动
  int16_t mode;
} rm_ros_interfaces__msg__Udpexpandstate;

// Struct for a sequence of rm_ros_interfaces__msg__Udpexpandstate.
typedef struct rm_ros_interfaces__msg__Udpexpandstate__Sequence
{
  rm_ros_interfaces__msg__Udpexpandstate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Udpexpandstate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__UDPEXPANDSTATE__STRUCT_H_
