// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Forcepositionmove.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/forcepositionmove__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `joint`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rm_ros_interfaces__msg__Forcepositionmove__init(rm_ros_interfaces__msg__Forcepositionmove * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    rm_ros_interfaces__msg__Forcepositionmove__fini(msg);
    return false;
  }
  // joint
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint, 0)) {
    rm_ros_interfaces__msg__Forcepositionmove__fini(msg);
    return false;
  }
  // flag
  // sensor
  // mode
  // control_mode
  // follow
  // desired_force
  // limit_vel
  // trajectory_mode
  // radio
  return true;
}

void
rm_ros_interfaces__msg__Forcepositionmove__fini(rm_ros_interfaces__msg__Forcepositionmove * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // joint
  rosidl_runtime_c__float__Sequence__fini(&msg->joint);
  // flag
  // sensor
  // mode
  // control_mode
  // follow
  // desired_force
  // limit_vel
  // trajectory_mode
  // radio
}

bool
rm_ros_interfaces__msg__Forcepositionmove__are_equal(const rm_ros_interfaces__msg__Forcepositionmove * lhs, const rm_ros_interfaces__msg__Forcepositionmove * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // joint
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joint), &(rhs->joint)))
  {
    return false;
  }
  // flag
  if (lhs->flag != rhs->flag) {
    return false;
  }
  // sensor
  if (lhs->sensor != rhs->sensor) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // control_mode
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->control_mode[i] != rhs->control_mode[i]) {
      return false;
    }
  }
  // follow
  if (lhs->follow != rhs->follow) {
    return false;
  }
  // desired_force
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->desired_force[i] != rhs->desired_force[i]) {
      return false;
    }
  }
  // limit_vel
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->limit_vel[i] != rhs->limit_vel[i]) {
      return false;
    }
  }
  // trajectory_mode
  if (lhs->trajectory_mode != rhs->trajectory_mode) {
    return false;
  }
  // radio
  if (lhs->radio != rhs->radio) {
    return false;
  }
  return true;
}

bool
rm_ros_interfaces__msg__Forcepositionmove__copy(
  const rm_ros_interfaces__msg__Forcepositionmove * input,
  rm_ros_interfaces__msg__Forcepositionmove * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // joint
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joint), &(output->joint)))
  {
    return false;
  }
  // flag
  output->flag = input->flag;
  // sensor
  output->sensor = input->sensor;
  // mode
  output->mode = input->mode;
  // control_mode
  for (size_t i = 0; i < 6; ++i) {
    output->control_mode[i] = input->control_mode[i];
  }
  // follow
  output->follow = input->follow;
  // desired_force
  for (size_t i = 0; i < 6; ++i) {
    output->desired_force[i] = input->desired_force[i];
  }
  // limit_vel
  for (size_t i = 0; i < 6; ++i) {
    output->limit_vel[i] = input->limit_vel[i];
  }
  // trajectory_mode
  output->trajectory_mode = input->trajectory_mode;
  // radio
  output->radio = input->radio;
  return true;
}

rm_ros_interfaces__msg__Forcepositionmove *
rm_ros_interfaces__msg__Forcepositionmove__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Forcepositionmove * msg = (rm_ros_interfaces__msg__Forcepositionmove *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Forcepositionmove), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Forcepositionmove));
  bool success = rm_ros_interfaces__msg__Forcepositionmove__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Forcepositionmove__destroy(rm_ros_interfaces__msg__Forcepositionmove * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Forcepositionmove__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Forcepositionmove__Sequence__init(rm_ros_interfaces__msg__Forcepositionmove__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Forcepositionmove * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Forcepositionmove *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Forcepositionmove), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Forcepositionmove__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Forcepositionmove__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rm_ros_interfaces__msg__Forcepositionmove__Sequence__fini(rm_ros_interfaces__msg__Forcepositionmove__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_ros_interfaces__msg__Forcepositionmove__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rm_ros_interfaces__msg__Forcepositionmove__Sequence *
rm_ros_interfaces__msg__Forcepositionmove__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Forcepositionmove__Sequence * array = (rm_ros_interfaces__msg__Forcepositionmove__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Forcepositionmove__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Forcepositionmove__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Forcepositionmove__Sequence__destroy(rm_ros_interfaces__msg__Forcepositionmove__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Forcepositionmove__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Forcepositionmove__Sequence__are_equal(const rm_ros_interfaces__msg__Forcepositionmove__Sequence * lhs, const rm_ros_interfaces__msg__Forcepositionmove__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Forcepositionmove__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Forcepositionmove__Sequence__copy(
  const rm_ros_interfaces__msg__Forcepositionmove__Sequence * input,
  rm_ros_interfaces__msg__Forcepositionmove__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Forcepositionmove);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Forcepositionmove * data =
      (rm_ros_interfaces__msg__Forcepositionmove *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Forcepositionmove__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Forcepositionmove__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Forcepositionmove__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
