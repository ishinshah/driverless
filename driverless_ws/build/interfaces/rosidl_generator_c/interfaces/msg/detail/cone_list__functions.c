// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/ConeList.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/cone_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `blue_cones`
// Member `yellow_cones`
// Member `orange_cones`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
interfaces__msg__ConeList__init(interfaces__msg__ConeList * msg)
{
  if (!msg) {
    return false;
  }
  // blue_cones
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->blue_cones, 0)) {
    interfaces__msg__ConeList__fini(msg);
    return false;
  }
  // yellow_cones
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->yellow_cones, 0)) {
    interfaces__msg__ConeList__fini(msg);
    return false;
  }
  // orange_cones
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->orange_cones, 0)) {
    interfaces__msg__ConeList__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__msg__ConeList__fini(interfaces__msg__ConeList * msg)
{
  if (!msg) {
    return;
  }
  // blue_cones
  geometry_msgs__msg__Point__Sequence__fini(&msg->blue_cones);
  // yellow_cones
  geometry_msgs__msg__Point__Sequence__fini(&msg->yellow_cones);
  // orange_cones
  geometry_msgs__msg__Point__Sequence__fini(&msg->orange_cones);
}

bool
interfaces__msg__ConeList__are_equal(const interfaces__msg__ConeList * lhs, const interfaces__msg__ConeList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // blue_cones
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->blue_cones), &(rhs->blue_cones)))
  {
    return false;
  }
  // yellow_cones
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->yellow_cones), &(rhs->yellow_cones)))
  {
    return false;
  }
  // orange_cones
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->orange_cones), &(rhs->orange_cones)))
  {
    return false;
  }
  return true;
}

bool
interfaces__msg__ConeList__copy(
  const interfaces__msg__ConeList * input,
  interfaces__msg__ConeList * output)
{
  if (!input || !output) {
    return false;
  }
  // blue_cones
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->blue_cones), &(output->blue_cones)))
  {
    return false;
  }
  // yellow_cones
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->yellow_cones), &(output->yellow_cones)))
  {
    return false;
  }
  // orange_cones
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->orange_cones), &(output->orange_cones)))
  {
    return false;
  }
  return true;
}

interfaces__msg__ConeList *
interfaces__msg__ConeList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__ConeList * msg = (interfaces__msg__ConeList *)allocator.allocate(sizeof(interfaces__msg__ConeList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__ConeList));
  bool success = interfaces__msg__ConeList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__ConeList__destroy(interfaces__msg__ConeList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__ConeList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__ConeList__Sequence__init(interfaces__msg__ConeList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__ConeList * data = NULL;

  if (size) {
    data = (interfaces__msg__ConeList *)allocator.zero_allocate(size, sizeof(interfaces__msg__ConeList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__ConeList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__ConeList__fini(&data[i - 1]);
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
interfaces__msg__ConeList__Sequence__fini(interfaces__msg__ConeList__Sequence * array)
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
      interfaces__msg__ConeList__fini(&array->data[i]);
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

interfaces__msg__ConeList__Sequence *
interfaces__msg__ConeList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__ConeList__Sequence * array = (interfaces__msg__ConeList__Sequence *)allocator.allocate(sizeof(interfaces__msg__ConeList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__ConeList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__ConeList__Sequence__destroy(interfaces__msg__ConeList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__ConeList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__ConeList__Sequence__are_equal(const interfaces__msg__ConeList__Sequence * lhs, const interfaces__msg__ConeList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__ConeList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__ConeList__Sequence__copy(
  const interfaces__msg__ConeList__Sequence * input,
  interfaces__msg__ConeList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__ConeList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__ConeList * data =
      (interfaces__msg__ConeList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__ConeList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__ConeList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__ConeList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}