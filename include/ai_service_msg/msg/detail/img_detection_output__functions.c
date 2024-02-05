// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ai_service_msg:msg/IMGDetectionOutput.idl
// generated code does not contain a copyright notice
#include "ai_service_msg/msg/detail/img_detection_output__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
ai_service_msg__msg__IMGDetectionOutput__init(ai_service_msg__msg__IMGDetectionOutput * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ai_service_msg__msg__IMGDetectionOutput__fini(msg);
    return false;
  }
  // conf
  // position_x
  // position_x_offset
  // position_y
  // position_y_offset
  // position_z
  // position_z_offset
  return true;
}

void
ai_service_msg__msg__IMGDetectionOutput__fini(ai_service_msg__msg__IMGDetectionOutput * msg)
{
  if (!msg) {
    return;
  }
  // id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // conf
  // position_x
  // position_x_offset
  // position_y
  // position_y_offset
  // position_z
  // position_z_offset
}

bool
ai_service_msg__msg__IMGDetectionOutput__are_equal(const ai_service_msg__msg__IMGDetectionOutput * lhs, const ai_service_msg__msg__IMGDetectionOutput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // conf
  if (lhs->conf != rhs->conf) {
    return false;
  }
  // position_x
  if (lhs->position_x != rhs->position_x) {
    return false;
  }
  // position_x_offset
  if (lhs->position_x_offset != rhs->position_x_offset) {
    return false;
  }
  // position_y
  if (lhs->position_y != rhs->position_y) {
    return false;
  }
  // position_y_offset
  if (lhs->position_y_offset != rhs->position_y_offset) {
    return false;
  }
  // position_z
  if (lhs->position_z != rhs->position_z) {
    return false;
  }
  // position_z_offset
  if (lhs->position_z_offset != rhs->position_z_offset) {
    return false;
  }
  return true;
}

bool
ai_service_msg__msg__IMGDetectionOutput__copy(
  const ai_service_msg__msg__IMGDetectionOutput * input,
  ai_service_msg__msg__IMGDetectionOutput * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // conf
  output->conf = input->conf;
  // position_x
  output->position_x = input->position_x;
  // position_x_offset
  output->position_x_offset = input->position_x_offset;
  // position_y
  output->position_y = input->position_y;
  // position_y_offset
  output->position_y_offset = input->position_y_offset;
  // position_z
  output->position_z = input->position_z;
  // position_z_offset
  output->position_z_offset = input->position_z_offset;
  return true;
}

ai_service_msg__msg__IMGDetectionOutput *
ai_service_msg__msg__IMGDetectionOutput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ai_service_msg__msg__IMGDetectionOutput * msg = (ai_service_msg__msg__IMGDetectionOutput *)allocator.allocate(sizeof(ai_service_msg__msg__IMGDetectionOutput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ai_service_msg__msg__IMGDetectionOutput));
  bool success = ai_service_msg__msg__IMGDetectionOutput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ai_service_msg__msg__IMGDetectionOutput__destroy(ai_service_msg__msg__IMGDetectionOutput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ai_service_msg__msg__IMGDetectionOutput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ai_service_msg__msg__IMGDetectionOutput__Sequence__init(ai_service_msg__msg__IMGDetectionOutput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ai_service_msg__msg__IMGDetectionOutput * data = NULL;

  if (size) {
    data = (ai_service_msg__msg__IMGDetectionOutput *)allocator.zero_allocate(size, sizeof(ai_service_msg__msg__IMGDetectionOutput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ai_service_msg__msg__IMGDetectionOutput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ai_service_msg__msg__IMGDetectionOutput__fini(&data[i - 1]);
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
ai_service_msg__msg__IMGDetectionOutput__Sequence__fini(ai_service_msg__msg__IMGDetectionOutput__Sequence * array)
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
      ai_service_msg__msg__IMGDetectionOutput__fini(&array->data[i]);
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

ai_service_msg__msg__IMGDetectionOutput__Sequence *
ai_service_msg__msg__IMGDetectionOutput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ai_service_msg__msg__IMGDetectionOutput__Sequence * array = (ai_service_msg__msg__IMGDetectionOutput__Sequence *)allocator.allocate(sizeof(ai_service_msg__msg__IMGDetectionOutput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ai_service_msg__msg__IMGDetectionOutput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ai_service_msg__msg__IMGDetectionOutput__Sequence__destroy(ai_service_msg__msg__IMGDetectionOutput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ai_service_msg__msg__IMGDetectionOutput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ai_service_msg__msg__IMGDetectionOutput__Sequence__are_equal(const ai_service_msg__msg__IMGDetectionOutput__Sequence * lhs, const ai_service_msg__msg__IMGDetectionOutput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ai_service_msg__msg__IMGDetectionOutput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ai_service_msg__msg__IMGDetectionOutput__Sequence__copy(
  const ai_service_msg__msg__IMGDetectionOutput__Sequence * input,
  ai_service_msg__msg__IMGDetectionOutput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ai_service_msg__msg__IMGDetectionOutput);
    ai_service_msg__msg__IMGDetectionOutput * data =
      (ai_service_msg__msg__IMGDetectionOutput *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ai_service_msg__msg__IMGDetectionOutput__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ai_service_msg__msg__IMGDetectionOutput__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ai_service_msg__msg__IMGDetectionOutput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
