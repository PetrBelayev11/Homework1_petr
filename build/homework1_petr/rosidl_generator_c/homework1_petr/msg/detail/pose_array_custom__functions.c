// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from homework1_petr:msg/PoseArrayCustom.idl
// generated code does not contain a copyright notice
#include "homework1_petr/msg/detail/pose_array_custom__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `t1`
// Member `t2`
// Member `t3`
// Member `t4`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
homework1_petr__msg__PoseArrayCustom__init(homework1_petr__msg__PoseArrayCustom * msg)
{
  if (!msg) {
    return false;
  }
  // t1
  if (!geometry_msgs__msg__Pose__init(&msg->t1)) {
    homework1_petr__msg__PoseArrayCustom__fini(msg);
    return false;
  }
  // t2
  if (!geometry_msgs__msg__Pose__init(&msg->t2)) {
    homework1_petr__msg__PoseArrayCustom__fini(msg);
    return false;
  }
  // t3
  if (!geometry_msgs__msg__Pose__init(&msg->t3)) {
    homework1_petr__msg__PoseArrayCustom__fini(msg);
    return false;
  }
  // t4
  if (!geometry_msgs__msg__Pose__init(&msg->t4)) {
    homework1_petr__msg__PoseArrayCustom__fini(msg);
    return false;
  }
  return true;
}

void
homework1_petr__msg__PoseArrayCustom__fini(homework1_petr__msg__PoseArrayCustom * msg)
{
  if (!msg) {
    return;
  }
  // t1
  geometry_msgs__msg__Pose__fini(&msg->t1);
  // t2
  geometry_msgs__msg__Pose__fini(&msg->t2);
  // t3
  geometry_msgs__msg__Pose__fini(&msg->t3);
  // t4
  geometry_msgs__msg__Pose__fini(&msg->t4);
}

bool
homework1_petr__msg__PoseArrayCustom__are_equal(const homework1_petr__msg__PoseArrayCustom * lhs, const homework1_petr__msg__PoseArrayCustom * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // t1
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->t1), &(rhs->t1)))
  {
    return false;
  }
  // t2
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->t2), &(rhs->t2)))
  {
    return false;
  }
  // t3
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->t3), &(rhs->t3)))
  {
    return false;
  }
  // t4
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->t4), &(rhs->t4)))
  {
    return false;
  }
  return true;
}

bool
homework1_petr__msg__PoseArrayCustom__copy(
  const homework1_petr__msg__PoseArrayCustom * input,
  homework1_petr__msg__PoseArrayCustom * output)
{
  if (!input || !output) {
    return false;
  }
  // t1
  if (!geometry_msgs__msg__Pose__copy(
      &(input->t1), &(output->t1)))
  {
    return false;
  }
  // t2
  if (!geometry_msgs__msg__Pose__copy(
      &(input->t2), &(output->t2)))
  {
    return false;
  }
  // t3
  if (!geometry_msgs__msg__Pose__copy(
      &(input->t3), &(output->t3)))
  {
    return false;
  }
  // t4
  if (!geometry_msgs__msg__Pose__copy(
      &(input->t4), &(output->t4)))
  {
    return false;
  }
  return true;
}

homework1_petr__msg__PoseArrayCustom *
homework1_petr__msg__PoseArrayCustom__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homework1_petr__msg__PoseArrayCustom * msg = (homework1_petr__msg__PoseArrayCustom *)allocator.allocate(sizeof(homework1_petr__msg__PoseArrayCustom), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(homework1_petr__msg__PoseArrayCustom));
  bool success = homework1_petr__msg__PoseArrayCustom__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
homework1_petr__msg__PoseArrayCustom__destroy(homework1_petr__msg__PoseArrayCustom * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    homework1_petr__msg__PoseArrayCustom__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
homework1_petr__msg__PoseArrayCustom__Sequence__init(homework1_petr__msg__PoseArrayCustom__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homework1_petr__msg__PoseArrayCustom * data = NULL;

  if (size) {
    data = (homework1_petr__msg__PoseArrayCustom *)allocator.zero_allocate(size, sizeof(homework1_petr__msg__PoseArrayCustom), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = homework1_petr__msg__PoseArrayCustom__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        homework1_petr__msg__PoseArrayCustom__fini(&data[i - 1]);
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
homework1_petr__msg__PoseArrayCustom__Sequence__fini(homework1_petr__msg__PoseArrayCustom__Sequence * array)
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
      homework1_petr__msg__PoseArrayCustom__fini(&array->data[i]);
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

homework1_petr__msg__PoseArrayCustom__Sequence *
homework1_petr__msg__PoseArrayCustom__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homework1_petr__msg__PoseArrayCustom__Sequence * array = (homework1_petr__msg__PoseArrayCustom__Sequence *)allocator.allocate(sizeof(homework1_petr__msg__PoseArrayCustom__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = homework1_petr__msg__PoseArrayCustom__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
homework1_petr__msg__PoseArrayCustom__Sequence__destroy(homework1_petr__msg__PoseArrayCustom__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    homework1_petr__msg__PoseArrayCustom__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
homework1_petr__msg__PoseArrayCustom__Sequence__are_equal(const homework1_petr__msg__PoseArrayCustom__Sequence * lhs, const homework1_petr__msg__PoseArrayCustom__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!homework1_petr__msg__PoseArrayCustom__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
homework1_petr__msg__PoseArrayCustom__Sequence__copy(
  const homework1_petr__msg__PoseArrayCustom__Sequence * input,
  homework1_petr__msg__PoseArrayCustom__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(homework1_petr__msg__PoseArrayCustom);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    homework1_petr__msg__PoseArrayCustom * data =
      (homework1_petr__msg__PoseArrayCustom *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!homework1_petr__msg__PoseArrayCustom__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          homework1_petr__msg__PoseArrayCustom__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!homework1_petr__msg__PoseArrayCustom__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
