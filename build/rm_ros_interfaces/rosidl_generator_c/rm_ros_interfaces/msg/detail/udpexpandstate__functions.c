// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_ros_interfaces:msg/Udpexpandstate.idl
// generated code does not contain a copyright notice
#include "rm_ros_interfaces/msg/detail/udpexpandstate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rm_ros_interfaces__msg__Udpexpandstate__init(rm_ros_interfaces__msg__Udpexpandstate * msg)
{
  if (!msg) {
    return false;
  }
  // pos
  // current
  // err_flag
  // en_flag
  // joint_id
  // mode
  return true;
}

void
rm_ros_interfaces__msg__Udpexpandstate__fini(rm_ros_interfaces__msg__Udpexpandstate * msg)
{
  if (!msg) {
    return;
  }
  // pos
  // current
  // err_flag
  // en_flag
  // joint_id
  // mode
}

bool
rm_ros_interfaces__msg__Udpexpandstate__are_equal(const rm_ros_interfaces__msg__Udpexpandstate * lhs, const rm_ros_interfaces__msg__Udpexpandstate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos
  if (lhs->pos != rhs->pos) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // err_flag
  if (lhs->err_flag != rhs->err_flag) {
    return false;
  }
  // en_flag
  if (lhs->en_flag != rhs->en_flag) {
    return false;
  }
  // joint_id
  if (lhs->joint_id != rhs->joint_id) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
rm_ros_interfaces__msg__Udpexpandstate__copy(
  const rm_ros_interfaces__msg__Udpexpandstate * input,
  rm_ros_interfaces__msg__Udpexpandstate * output)
{
  if (!input || !output) {
    return false;
  }
  // pos
  output->pos = input->pos;
  // current
  output->current = input->current;
  // err_flag
  output->err_flag = input->err_flag;
  // en_flag
  output->en_flag = input->en_flag;
  // joint_id
  output->joint_id = input->joint_id;
  // mode
  output->mode = input->mode;
  return true;
}

rm_ros_interfaces__msg__Udpexpandstate *
rm_ros_interfaces__msg__Udpexpandstate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Udpexpandstate * msg = (rm_ros_interfaces__msg__Udpexpandstate *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Udpexpandstate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_ros_interfaces__msg__Udpexpandstate));
  bool success = rm_ros_interfaces__msg__Udpexpandstate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_ros_interfaces__msg__Udpexpandstate__destroy(rm_ros_interfaces__msg__Udpexpandstate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_ros_interfaces__msg__Udpexpandstate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_ros_interfaces__msg__Udpexpandstate__Sequence__init(rm_ros_interfaces__msg__Udpexpandstate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Udpexpandstate * data = NULL;

  if (size) {
    data = (rm_ros_interfaces__msg__Udpexpandstate *)allocator.zero_allocate(size, sizeof(rm_ros_interfaces__msg__Udpexpandstate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_ros_interfaces__msg__Udpexpandstate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_ros_interfaces__msg__Udpexpandstate__fini(&data[i - 1]);
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
rm_ros_interfaces__msg__Udpexpandstate__Sequence__fini(rm_ros_interfaces__msg__Udpexpandstate__Sequence * array)
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
      rm_ros_interfaces__msg__Udpexpandstate__fini(&array->data[i]);
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

rm_ros_interfaces__msg__Udpexpandstate__Sequence *
rm_ros_interfaces__msg__Udpexpandstate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_ros_interfaces__msg__Udpexpandstate__Sequence * array = (rm_ros_interfaces__msg__Udpexpandstate__Sequence *)allocator.allocate(sizeof(rm_ros_interfaces__msg__Udpexpandstate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_ros_interfaces__msg__Udpexpandstate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_ros_interfaces__msg__Udpexpandstate__Sequence__destroy(rm_ros_interfaces__msg__Udpexpandstate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_ros_interfaces__msg__Udpexpandstate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_ros_interfaces__msg__Udpexpandstate__Sequence__are_equal(const rm_ros_interfaces__msg__Udpexpandstate__Sequence * lhs, const rm_ros_interfaces__msg__Udpexpandstate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_ros_interfaces__msg__Udpexpandstate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_ros_interfaces__msg__Udpexpandstate__Sequence__copy(
  const rm_ros_interfaces__msg__Udpexpandstate__Sequence * input,
  rm_ros_interfaces__msg__Udpexpandstate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_ros_interfaces__msg__Udpexpandstate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_ros_interfaces__msg__Udpexpandstate * data =
      (rm_ros_interfaces__msg__Udpexpandstate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_ros_interfaces__msg__Udpexpandstate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_ros_interfaces__msg__Udpexpandstate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_ros_interfaces__msg__Udpexpandstate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
