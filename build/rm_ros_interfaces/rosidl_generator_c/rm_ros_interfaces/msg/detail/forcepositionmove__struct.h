// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_ros_interfaces:msg/Forcepositionmove.idl
// generated code does not contain a copyright notice

#ifndef RM_ROS_INTERFACES__MSG__DETAIL__FORCEPOSITIONMOVE__STRUCT_H_
#define RM_ROS_INTERFACES__MSG__DETAIL__FORCEPOSITIONMOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'joint'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Forcepositionmove in the package rm_ros_interfaces.
typedef struct rm_ros_interfaces__msg__Forcepositionmove
{
  /// 当前坐标系下的目标位姿，支持四元数/欧拉角表示姿态。位置精度：0.001mm，欧拉角表示姿态，姿态精度：0.001rad，四元数方式表示姿态，姿态精度：0.000001
  geometry_msgs__msg__Pose pose;
  /// 目标关节角度，单位：°，精度：0.001°
  rosidl_runtime_c__float__Sequence joint;
  /// 0-下发目标角度，1-下发目标位姿
  uint8_t flag;
  /// 0-一维力；1-六维力
  uint8_t sensor;
  /// 0-基坐标系力控；1-工具坐标系力控；
  uint8_t mode;
  /// 6个力控方向（Fx Fy Fz Mx My Mz）的模式 0-固定模式 1-浮动模式 2-弹簧模式 3-运动模式 4-力跟踪模式 8-力跟踪+姿态自适应模式
  uint8_t control_mode[6];
  /// 表示驱动器的运动跟随效果，true 为高跟随，false 为低跟随。
  bool follow;
  /// 力控轴维持的期望力/力矩，力控轴的力控模式为力跟踪模式时，期望力/力矩设置才会生效 ，精度0.1N。
  float desired_force[6];
  /// 力控轴的最大线速度和最大角速度限制，只对开启力控方向生效。（x、y、z）轴的最大线速度，精度为0.001 m/s，（rx、ry、rz）轴的最大角速度，精度为0001 °/s
  float limit_vel[6];
  /// 高跟随模式下，0-完全透传模式、1-曲线拟合模式、2-滤波模式
  uint8_t trajectory_mode;
  /// 曲线拟合模式时radio是平滑系数（0-100），滤波模式时radio是滤波参数（范围在0至1000之间）
  uint16_t radio;
} rm_ros_interfaces__msg__Forcepositionmove;

// Struct for a sequence of rm_ros_interfaces__msg__Forcepositionmove.
typedef struct rm_ros_interfaces__msg__Forcepositionmove__Sequence
{
  rm_ros_interfaces__msg__Forcepositionmove * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_ros_interfaces__msg__Forcepositionmove__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_ROS_INTERFACES__MSG__DETAIL__FORCEPOSITIONMOVE__STRUCT_H_
