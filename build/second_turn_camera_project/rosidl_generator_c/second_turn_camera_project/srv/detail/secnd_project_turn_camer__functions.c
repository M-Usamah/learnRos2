// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from second_turn_camera_project:srv/SecndProjectTurnCamer.idl
// generated code does not contain a copyright notice
#include "second_turn_camera_project/srv/detail/secnd_project_turn_camer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__init(second_turn_camera_project__srv__SecndProjectTurnCamer_Request * msg)
{
  if (!msg) {
    return false;
  }
  // degree_turn
  return true;
}

void
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__fini(second_turn_camera_project__srv__SecndProjectTurnCamer_Request * msg)
{
  if (!msg) {
    return;
  }
  // degree_turn
}

bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__are_equal(const second_turn_camera_project__srv__SecndProjectTurnCamer_Request * lhs, const second_turn_camera_project__srv__SecndProjectTurnCamer_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // degree_turn
  if (lhs->degree_turn != rhs->degree_turn) {
    return false;
  }
  return true;
}

bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__copy(
  const second_turn_camera_project__srv__SecndProjectTurnCamer_Request * input,
  second_turn_camera_project__srv__SecndProjectTurnCamer_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // degree_turn
  output->degree_turn = input->degree_turn;
  return true;
}

second_turn_camera_project__srv__SecndProjectTurnCamer_Request *
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_turn_camera_project__srv__SecndProjectTurnCamer_Request * msg = (second_turn_camera_project__srv__SecndProjectTurnCamer_Request *)allocator.allocate(sizeof(second_turn_camera_project__srv__SecndProjectTurnCamer_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(second_turn_camera_project__srv__SecndProjectTurnCamer_Request));
  bool success = second_turn_camera_project__srv__SecndProjectTurnCamer_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__destroy(second_turn_camera_project__srv__SecndProjectTurnCamer_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    second_turn_camera_project__srv__SecndProjectTurnCamer_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__init(second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_turn_camera_project__srv__SecndProjectTurnCamer_Request * data = NULL;

  if (size) {
    data = (second_turn_camera_project__srv__SecndProjectTurnCamer_Request *)allocator.zero_allocate(size, sizeof(second_turn_camera_project__srv__SecndProjectTurnCamer_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = second_turn_camera_project__srv__SecndProjectTurnCamer_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        second_turn_camera_project__srv__SecndProjectTurnCamer_Request__fini(&data[i - 1]);
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
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__fini(second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * array)
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
      second_turn_camera_project__srv__SecndProjectTurnCamer_Request__fini(&array->data[i]);
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

second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence *
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * array = (second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence *)allocator.allocate(sizeof(second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__destroy(second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__are_equal(const second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * lhs, const second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!second_turn_camera_project__srv__SecndProjectTurnCamer_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__copy(
  const second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * input,
  second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(second_turn_camera_project__srv__SecndProjectTurnCamer_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    second_turn_camera_project__srv__SecndProjectTurnCamer_Request * data =
      (second_turn_camera_project__srv__SecndProjectTurnCamer_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!second_turn_camera_project__srv__SecndProjectTurnCamer_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          second_turn_camera_project__srv__SecndProjectTurnCamer_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!second_turn_camera_project__srv__SecndProjectTurnCamer_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__init(second_turn_camera_project__srv__SecndProjectTurnCamer_Response * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    second_turn_camera_project__srv__SecndProjectTurnCamer_Response__fini(msg);
    return false;
  }
  return true;
}

void
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__fini(second_turn_camera_project__srv__SecndProjectTurnCamer_Response * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__are_equal(const second_turn_camera_project__srv__SecndProjectTurnCamer_Response * lhs, const second_turn_camera_project__srv__SecndProjectTurnCamer_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  return true;
}

bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__copy(
  const second_turn_camera_project__srv__SecndProjectTurnCamer_Response * input,
  second_turn_camera_project__srv__SecndProjectTurnCamer_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  return true;
}

second_turn_camera_project__srv__SecndProjectTurnCamer_Response *
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_turn_camera_project__srv__SecndProjectTurnCamer_Response * msg = (second_turn_camera_project__srv__SecndProjectTurnCamer_Response *)allocator.allocate(sizeof(second_turn_camera_project__srv__SecndProjectTurnCamer_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(second_turn_camera_project__srv__SecndProjectTurnCamer_Response));
  bool success = second_turn_camera_project__srv__SecndProjectTurnCamer_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__destroy(second_turn_camera_project__srv__SecndProjectTurnCamer_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    second_turn_camera_project__srv__SecndProjectTurnCamer_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__init(second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_turn_camera_project__srv__SecndProjectTurnCamer_Response * data = NULL;

  if (size) {
    data = (second_turn_camera_project__srv__SecndProjectTurnCamer_Response *)allocator.zero_allocate(size, sizeof(second_turn_camera_project__srv__SecndProjectTurnCamer_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = second_turn_camera_project__srv__SecndProjectTurnCamer_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        second_turn_camera_project__srv__SecndProjectTurnCamer_Response__fini(&data[i - 1]);
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
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__fini(second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * array)
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
      second_turn_camera_project__srv__SecndProjectTurnCamer_Response__fini(&array->data[i]);
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

second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence *
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * array = (second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence *)allocator.allocate(sizeof(second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__destroy(second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__are_equal(const second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * lhs, const second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!second_turn_camera_project__srv__SecndProjectTurnCamer_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__copy(
  const second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * input,
  second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(second_turn_camera_project__srv__SecndProjectTurnCamer_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    second_turn_camera_project__srv__SecndProjectTurnCamer_Response * data =
      (second_turn_camera_project__srv__SecndProjectTurnCamer_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!second_turn_camera_project__srv__SecndProjectTurnCamer_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          second_turn_camera_project__srv__SecndProjectTurnCamer_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!second_turn_camera_project__srv__SecndProjectTurnCamer_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
