// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from homework1_petr:srv/StartStop.idl
// generated code does not contain a copyright notice
#include "homework1_petr/srv/detail/start_stop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
homework1_petr__srv__StartStop_Request__init(homework1_petr__srv__StartStop_Request * msg)
{
  if (!msg) {
    return false;
  }
  // f
  return true;
}

void
homework1_petr__srv__StartStop_Request__fini(homework1_petr__srv__StartStop_Request * msg)
{
  if (!msg) {
    return;
  }
  // f
}

bool
homework1_petr__srv__StartStop_Request__are_equal(const homework1_petr__srv__StartStop_Request * lhs, const homework1_petr__srv__StartStop_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // f
  if (lhs->f != rhs->f) {
    return false;
  }
  return true;
}

bool
homework1_petr__srv__StartStop_Request__copy(
  const homework1_petr__srv__StartStop_Request * input,
  homework1_petr__srv__StartStop_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // f
  output->f = input->f;
  return true;
}

homework1_petr__srv__StartStop_Request *
homework1_petr__srv__StartStop_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homework1_petr__srv__StartStop_Request * msg = (homework1_petr__srv__StartStop_Request *)allocator.allocate(sizeof(homework1_petr__srv__StartStop_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(homework1_petr__srv__StartStop_Request));
  bool success = homework1_petr__srv__StartStop_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
homework1_petr__srv__StartStop_Request__destroy(homework1_petr__srv__StartStop_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    homework1_petr__srv__StartStop_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
homework1_petr__srv__StartStop_Request__Sequence__init(homework1_petr__srv__StartStop_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homework1_petr__srv__StartStop_Request * data = NULL;

  if (size) {
    data = (homework1_petr__srv__StartStop_Request *)allocator.zero_allocate(size, sizeof(homework1_petr__srv__StartStop_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = homework1_petr__srv__StartStop_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        homework1_petr__srv__StartStop_Request__fini(&data[i - 1]);
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
homework1_petr__srv__StartStop_Request__Sequence__fini(homework1_petr__srv__StartStop_Request__Sequence * array)
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
      homework1_petr__srv__StartStop_Request__fini(&array->data[i]);
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

homework1_petr__srv__StartStop_Request__Sequence *
homework1_petr__srv__StartStop_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homework1_petr__srv__StartStop_Request__Sequence * array = (homework1_petr__srv__StartStop_Request__Sequence *)allocator.allocate(sizeof(homework1_petr__srv__StartStop_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = homework1_petr__srv__StartStop_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
homework1_petr__srv__StartStop_Request__Sequence__destroy(homework1_petr__srv__StartStop_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    homework1_petr__srv__StartStop_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
homework1_petr__srv__StartStop_Request__Sequence__are_equal(const homework1_petr__srv__StartStop_Request__Sequence * lhs, const homework1_petr__srv__StartStop_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!homework1_petr__srv__StartStop_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
homework1_petr__srv__StartStop_Request__Sequence__copy(
  const homework1_petr__srv__StartStop_Request__Sequence * input,
  homework1_petr__srv__StartStop_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(homework1_petr__srv__StartStop_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    homework1_petr__srv__StartStop_Request * data =
      (homework1_petr__srv__StartStop_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!homework1_petr__srv__StartStop_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          homework1_petr__srv__StartStop_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!homework1_petr__srv__StartStop_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
homework1_petr__srv__StartStop_Response__init(homework1_petr__srv__StartStop_Response * msg)
{
  if (!msg) {
    return false;
  }
  // n
  return true;
}

void
homework1_petr__srv__StartStop_Response__fini(homework1_petr__srv__StartStop_Response * msg)
{
  if (!msg) {
    return;
  }
  // n
}

bool
homework1_petr__srv__StartStop_Response__are_equal(const homework1_petr__srv__StartStop_Response * lhs, const homework1_petr__srv__StartStop_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // n
  if (lhs->n != rhs->n) {
    return false;
  }
  return true;
}

bool
homework1_petr__srv__StartStop_Response__copy(
  const homework1_petr__srv__StartStop_Response * input,
  homework1_petr__srv__StartStop_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // n
  output->n = input->n;
  return true;
}

homework1_petr__srv__StartStop_Response *
homework1_petr__srv__StartStop_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homework1_petr__srv__StartStop_Response * msg = (homework1_petr__srv__StartStop_Response *)allocator.allocate(sizeof(homework1_petr__srv__StartStop_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(homework1_petr__srv__StartStop_Response));
  bool success = homework1_petr__srv__StartStop_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
homework1_petr__srv__StartStop_Response__destroy(homework1_petr__srv__StartStop_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    homework1_petr__srv__StartStop_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
homework1_petr__srv__StartStop_Response__Sequence__init(homework1_petr__srv__StartStop_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homework1_petr__srv__StartStop_Response * data = NULL;

  if (size) {
    data = (homework1_petr__srv__StartStop_Response *)allocator.zero_allocate(size, sizeof(homework1_petr__srv__StartStop_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = homework1_petr__srv__StartStop_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        homework1_petr__srv__StartStop_Response__fini(&data[i - 1]);
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
homework1_petr__srv__StartStop_Response__Sequence__fini(homework1_petr__srv__StartStop_Response__Sequence * array)
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
      homework1_petr__srv__StartStop_Response__fini(&array->data[i]);
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

homework1_petr__srv__StartStop_Response__Sequence *
homework1_petr__srv__StartStop_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  homework1_petr__srv__StartStop_Response__Sequence * array = (homework1_petr__srv__StartStop_Response__Sequence *)allocator.allocate(sizeof(homework1_petr__srv__StartStop_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = homework1_petr__srv__StartStop_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
homework1_petr__srv__StartStop_Response__Sequence__destroy(homework1_petr__srv__StartStop_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    homework1_petr__srv__StartStop_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
homework1_petr__srv__StartStop_Response__Sequence__are_equal(const homework1_petr__srv__StartStop_Response__Sequence * lhs, const homework1_petr__srv__StartStop_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!homework1_petr__srv__StartStop_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
homework1_petr__srv__StartStop_Response__Sequence__copy(
  const homework1_petr__srv__StartStop_Response__Sequence * input,
  homework1_petr__srv__StartStop_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(homework1_petr__srv__StartStop_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    homework1_petr__srv__StartStop_Response * data =
      (homework1_petr__srv__StartStop_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!homework1_petr__srv__StartStop_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          homework1_petr__srv__StartStop_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!homework1_petr__srv__StartStop_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
