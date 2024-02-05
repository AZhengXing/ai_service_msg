// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ai_service_msg:srv/IMGDetectionSrv.idl
// generated code does not contain a copyright notice
#include "ai_service_msg/srv/detail/img_detection_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `img`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
ai_service_msg__srv__IMGDetectionSrv_Request__init(ai_service_msg__srv__IMGDetectionSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__init(&msg->img)) {
    ai_service_msg__srv__IMGDetectionSrv_Request__fini(msg);
    return false;
  }
  return true;
}

void
ai_service_msg__srv__IMGDetectionSrv_Request__fini(ai_service_msg__srv__IMGDetectionSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // img
  sensor_msgs__msg__Image__fini(&msg->img);
}

bool
ai_service_msg__srv__IMGDetectionSrv_Request__are_equal(const ai_service_msg__srv__IMGDetectionSrv_Request * lhs, const ai_service_msg__srv__IMGDetectionSrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->img), &(rhs->img)))
  {
    return false;
  }
  return true;
}

bool
ai_service_msg__srv__IMGDetectionSrv_Request__copy(
  const ai_service_msg__srv__IMGDetectionSrv_Request * input,
  ai_service_msg__srv__IMGDetectionSrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__copy(
      &(input->img), &(output->img)))
  {
    return false;
  }
  return true;
}

ai_service_msg__srv__IMGDetectionSrv_Request *
ai_service_msg__srv__IMGDetectionSrv_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ai_service_msg__srv__IMGDetectionSrv_Request * msg = (ai_service_msg__srv__IMGDetectionSrv_Request *)allocator.allocate(sizeof(ai_service_msg__srv__IMGDetectionSrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ai_service_msg__srv__IMGDetectionSrv_Request));
  bool success = ai_service_msg__srv__IMGDetectionSrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ai_service_msg__srv__IMGDetectionSrv_Request__destroy(ai_service_msg__srv__IMGDetectionSrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ai_service_msg__srv__IMGDetectionSrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ai_service_msg__srv__IMGDetectionSrv_Request__Sequence__init(ai_service_msg__srv__IMGDetectionSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ai_service_msg__srv__IMGDetectionSrv_Request * data = NULL;

  if (size) {
    data = (ai_service_msg__srv__IMGDetectionSrv_Request *)allocator.zero_allocate(size, sizeof(ai_service_msg__srv__IMGDetectionSrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ai_service_msg__srv__IMGDetectionSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ai_service_msg__srv__IMGDetectionSrv_Request__fini(&data[i - 1]);
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
ai_service_msg__srv__IMGDetectionSrv_Request__Sequence__fini(ai_service_msg__srv__IMGDetectionSrv_Request__Sequence * array)
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
      ai_service_msg__srv__IMGDetectionSrv_Request__fini(&array->data[i]);
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

ai_service_msg__srv__IMGDetectionSrv_Request__Sequence *
ai_service_msg__srv__IMGDetectionSrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ai_service_msg__srv__IMGDetectionSrv_Request__Sequence * array = (ai_service_msg__srv__IMGDetectionSrv_Request__Sequence *)allocator.allocate(sizeof(ai_service_msg__srv__IMGDetectionSrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ai_service_msg__srv__IMGDetectionSrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ai_service_msg__srv__IMGDetectionSrv_Request__Sequence__destroy(ai_service_msg__srv__IMGDetectionSrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ai_service_msg__srv__IMGDetectionSrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ai_service_msg__srv__IMGDetectionSrv_Request__Sequence__are_equal(const ai_service_msg__srv__IMGDetectionSrv_Request__Sequence * lhs, const ai_service_msg__srv__IMGDetectionSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ai_service_msg__srv__IMGDetectionSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ai_service_msg__srv__IMGDetectionSrv_Request__Sequence__copy(
  const ai_service_msg__srv__IMGDetectionSrv_Request__Sequence * input,
  ai_service_msg__srv__IMGDetectionSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ai_service_msg__srv__IMGDetectionSrv_Request);
    ai_service_msg__srv__IMGDetectionSrv_Request * data =
      (ai_service_msg__srv__IMGDetectionSrv_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ai_service_msg__srv__IMGDetectionSrv_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ai_service_msg__srv__IMGDetectionSrv_Request__fini(&data[i]);
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
    if (!ai_service_msg__srv__IMGDetectionSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goals`
#include "ai_service_msg/msg/detail/img_detection_output__functions.h"

bool
ai_service_msg__srv__IMGDetectionSrv_Response__init(ai_service_msg__srv__IMGDetectionSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // goals
  if (!ai_service_msg__msg__IMGDetectionOutput__Sequence__init(&msg->goals, 0)) {
    ai_service_msg__srv__IMGDetectionSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
ai_service_msg__srv__IMGDetectionSrv_Response__fini(ai_service_msg__srv__IMGDetectionSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // goals
  ai_service_msg__msg__IMGDetectionOutput__Sequence__fini(&msg->goals);
}

bool
ai_service_msg__srv__IMGDetectionSrv_Response__are_equal(const ai_service_msg__srv__IMGDetectionSrv_Response * lhs, const ai_service_msg__srv__IMGDetectionSrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goals
  if (!ai_service_msg__msg__IMGDetectionOutput__Sequence__are_equal(
      &(lhs->goals), &(rhs->goals)))
  {
    return false;
  }
  return true;
}

bool
ai_service_msg__srv__IMGDetectionSrv_Response__copy(
  const ai_service_msg__srv__IMGDetectionSrv_Response * input,
  ai_service_msg__srv__IMGDetectionSrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // goals
  if (!ai_service_msg__msg__IMGDetectionOutput__Sequence__copy(
      &(input->goals), &(output->goals)))
  {
    return false;
  }
  return true;
}

ai_service_msg__srv__IMGDetectionSrv_Response *
ai_service_msg__srv__IMGDetectionSrv_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ai_service_msg__srv__IMGDetectionSrv_Response * msg = (ai_service_msg__srv__IMGDetectionSrv_Response *)allocator.allocate(sizeof(ai_service_msg__srv__IMGDetectionSrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ai_service_msg__srv__IMGDetectionSrv_Response));
  bool success = ai_service_msg__srv__IMGDetectionSrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ai_service_msg__srv__IMGDetectionSrv_Response__destroy(ai_service_msg__srv__IMGDetectionSrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ai_service_msg__srv__IMGDetectionSrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ai_service_msg__srv__IMGDetectionSrv_Response__Sequence__init(ai_service_msg__srv__IMGDetectionSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ai_service_msg__srv__IMGDetectionSrv_Response * data = NULL;

  if (size) {
    data = (ai_service_msg__srv__IMGDetectionSrv_Response *)allocator.zero_allocate(size, sizeof(ai_service_msg__srv__IMGDetectionSrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ai_service_msg__srv__IMGDetectionSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ai_service_msg__srv__IMGDetectionSrv_Response__fini(&data[i - 1]);
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
ai_service_msg__srv__IMGDetectionSrv_Response__Sequence__fini(ai_service_msg__srv__IMGDetectionSrv_Response__Sequence * array)
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
      ai_service_msg__srv__IMGDetectionSrv_Response__fini(&array->data[i]);
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

ai_service_msg__srv__IMGDetectionSrv_Response__Sequence *
ai_service_msg__srv__IMGDetectionSrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ai_service_msg__srv__IMGDetectionSrv_Response__Sequence * array = (ai_service_msg__srv__IMGDetectionSrv_Response__Sequence *)allocator.allocate(sizeof(ai_service_msg__srv__IMGDetectionSrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ai_service_msg__srv__IMGDetectionSrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ai_service_msg__srv__IMGDetectionSrv_Response__Sequence__destroy(ai_service_msg__srv__IMGDetectionSrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ai_service_msg__srv__IMGDetectionSrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ai_service_msg__srv__IMGDetectionSrv_Response__Sequence__are_equal(const ai_service_msg__srv__IMGDetectionSrv_Response__Sequence * lhs, const ai_service_msg__srv__IMGDetectionSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ai_service_msg__srv__IMGDetectionSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ai_service_msg__srv__IMGDetectionSrv_Response__Sequence__copy(
  const ai_service_msg__srv__IMGDetectionSrv_Response__Sequence * input,
  ai_service_msg__srv__IMGDetectionSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ai_service_msg__srv__IMGDetectionSrv_Response);
    ai_service_msg__srv__IMGDetectionSrv_Response * data =
      (ai_service_msg__srv__IMGDetectionSrv_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ai_service_msg__srv__IMGDetectionSrv_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ai_service_msg__srv__IMGDetectionSrv_Response__fini(&data[i]);
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
    if (!ai_service_msg__srv__IMGDetectionSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
