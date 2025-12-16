// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rm_ros_interfaces:msg/Forcepositionmove.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rm_ros_interfaces/msg/detail/forcepositionmove__rosidl_typesupport_introspection_c.h"
#include "rm_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rm_ros_interfaces/msg/detail/forcepositionmove__functions.h"
#include "rm_ros_interfaces/msg/detail/forcepositionmove__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `joint`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__Forcepositionmove_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rm_ros_interfaces__msg__Forcepositionmove__init(message_memory);
}

void rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__Forcepositionmove_fini_function(void * message_memory)
{
  rm_ros_interfaces__msg__Forcepositionmove__fini(message_memory);
}

size_t rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__size_function__Forcepositionmove__joint(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_const_function__Forcepositionmove__joint(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_function__Forcepositionmove__joint(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__fetch_function__Forcepositionmove__joint(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_const_function__Forcepositionmove__joint(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__assign_function__Forcepositionmove__joint(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_function__Forcepositionmove__joint(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__resize_function__Forcepositionmove__joint(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__size_function__Forcepositionmove__control_mode(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_const_function__Forcepositionmove__control_mode(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_function__Forcepositionmove__control_mode(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__fetch_function__Forcepositionmove__control_mode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_const_function__Forcepositionmove__control_mode(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__assign_function__Forcepositionmove__control_mode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_function__Forcepositionmove__control_mode(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__size_function__Forcepositionmove__desired_force(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_const_function__Forcepositionmove__desired_force(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_function__Forcepositionmove__desired_force(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__fetch_function__Forcepositionmove__desired_force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_const_function__Forcepositionmove__desired_force(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__assign_function__Forcepositionmove__desired_force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_function__Forcepositionmove__desired_force(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__size_function__Forcepositionmove__limit_vel(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_const_function__Forcepositionmove__limit_vel(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_function__Forcepositionmove__limit_vel(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__fetch_function__Forcepositionmove__limit_vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_const_function__Forcepositionmove__limit_vel(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__assign_function__Forcepositionmove__limit_vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_function__Forcepositionmove__limit_vel(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__Forcepositionmove_message_member_array[11] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Forcepositionmove, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Forcepositionmove, joint),  // bytes offset in struct
    NULL,  // default value
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__size_function__Forcepositionmove__joint,  // size() function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_const_function__Forcepositionmove__joint,  // get_const(index) function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_function__Forcepositionmove__joint,  // get(index) function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__fetch_function__Forcepositionmove__joint,  // fetch(index, &value) function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__assign_function__Forcepositionmove__joint,  // assign(index, value) function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__resize_function__Forcepositionmove__joint  // resize(index) function pointer
  },
  {
    "flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Forcepositionmove, flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Forcepositionmove, sensor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Forcepositionmove, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Forcepositionmove, control_mode),  // bytes offset in struct
    NULL,  // default value
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__size_function__Forcepositionmove__control_mode,  // size() function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_const_function__Forcepositionmove__control_mode,  // get_const(index) function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_function__Forcepositionmove__control_mode,  // get(index) function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__fetch_function__Forcepositionmove__control_mode,  // fetch(index, &value) function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__assign_function__Forcepositionmove__control_mode,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "follow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Forcepositionmove, follow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Forcepositionmove, desired_force),  // bytes offset in struct
    NULL,  // default value
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__size_function__Forcepositionmove__desired_force,  // size() function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_const_function__Forcepositionmove__desired_force,  // get_const(index) function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_function__Forcepositionmove__desired_force,  // get(index) function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__fetch_function__Forcepositionmove__desired_force,  // fetch(index, &value) function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__assign_function__Forcepositionmove__desired_force,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "limit_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Forcepositionmove, limit_vel),  // bytes offset in struct
    NULL,  // default value
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__size_function__Forcepositionmove__limit_vel,  // size() function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_const_function__Forcepositionmove__limit_vel,  // get_const(index) function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__get_function__Forcepositionmove__limit_vel,  // get(index) function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__fetch_function__Forcepositionmove__limit_vel,  // fetch(index, &value) function pointer
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__assign_function__Forcepositionmove__limit_vel,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Forcepositionmove, trajectory_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_ros_interfaces__msg__Forcepositionmove, radio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__Forcepositionmove_message_members = {
  "rm_ros_interfaces__msg",  // message namespace
  "Forcepositionmove",  // message name
  11,  // number of fields
  sizeof(rm_ros_interfaces__msg__Forcepositionmove),
  rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__Forcepositionmove_message_member_array,  // message members
  rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__Forcepositionmove_init_function,  // function to initialize message memory (memory has to be allocated)
  rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__Forcepositionmove_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__Forcepositionmove_message_type_support_handle = {
  0,
  &rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__Forcepositionmove_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rm_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_ros_interfaces, msg, Forcepositionmove)() {
  rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__Forcepositionmove_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__Forcepositionmove_message_type_support_handle.typesupport_identifier) {
    rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__Forcepositionmove_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rm_ros_interfaces__msg__Forcepositionmove__rosidl_typesupport_introspection_c__Forcepositionmove_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
