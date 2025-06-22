// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from homework1_petr:msg/PoseArrayCustom.idl
// generated code does not contain a copyright notice

#ifndef HOMEWORK1_PETR__MSG__DETAIL__POSE_ARRAY_CUSTOM__FUNCTIONS_H_
#define HOMEWORK1_PETR__MSG__DETAIL__POSE_ARRAY_CUSTOM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "homework1_petr/msg/rosidl_generator_c__visibility_control.h"

#include "homework1_petr/msg/detail/pose_array_custom__struct.h"

/// Initialize msg/PoseArrayCustom message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * homework1_petr__msg__PoseArrayCustom
 * )) before or use
 * homework1_petr__msg__PoseArrayCustom__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_homework1_petr
bool
homework1_petr__msg__PoseArrayCustom__init(homework1_petr__msg__PoseArrayCustom * msg);

/// Finalize msg/PoseArrayCustom message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_homework1_petr
void
homework1_petr__msg__PoseArrayCustom__fini(homework1_petr__msg__PoseArrayCustom * msg);

/// Create msg/PoseArrayCustom message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * homework1_petr__msg__PoseArrayCustom__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_homework1_petr
homework1_petr__msg__PoseArrayCustom *
homework1_petr__msg__PoseArrayCustom__create();

/// Destroy msg/PoseArrayCustom message.
/**
 * It calls
 * homework1_petr__msg__PoseArrayCustom__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_homework1_petr
void
homework1_petr__msg__PoseArrayCustom__destroy(homework1_petr__msg__PoseArrayCustom * msg);

/// Check for msg/PoseArrayCustom message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_homework1_petr
bool
homework1_petr__msg__PoseArrayCustom__are_equal(const homework1_petr__msg__PoseArrayCustom * lhs, const homework1_petr__msg__PoseArrayCustom * rhs);

/// Copy a msg/PoseArrayCustom message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_homework1_petr
bool
homework1_petr__msg__PoseArrayCustom__copy(
  const homework1_petr__msg__PoseArrayCustom * input,
  homework1_petr__msg__PoseArrayCustom * output);

/// Initialize array of msg/PoseArrayCustom messages.
/**
 * It allocates the memory for the number of elements and calls
 * homework1_petr__msg__PoseArrayCustom__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_homework1_petr
bool
homework1_petr__msg__PoseArrayCustom__Sequence__init(homework1_petr__msg__PoseArrayCustom__Sequence * array, size_t size);

/// Finalize array of msg/PoseArrayCustom messages.
/**
 * It calls
 * homework1_petr__msg__PoseArrayCustom__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_homework1_petr
void
homework1_petr__msg__PoseArrayCustom__Sequence__fini(homework1_petr__msg__PoseArrayCustom__Sequence * array);

/// Create array of msg/PoseArrayCustom messages.
/**
 * It allocates the memory for the array and calls
 * homework1_petr__msg__PoseArrayCustom__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_homework1_petr
homework1_petr__msg__PoseArrayCustom__Sequence *
homework1_petr__msg__PoseArrayCustom__Sequence__create(size_t size);

/// Destroy array of msg/PoseArrayCustom messages.
/**
 * It calls
 * homework1_petr__msg__PoseArrayCustom__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_homework1_petr
void
homework1_petr__msg__PoseArrayCustom__Sequence__destroy(homework1_petr__msg__PoseArrayCustom__Sequence * array);

/// Check for msg/PoseArrayCustom message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_homework1_petr
bool
homework1_petr__msg__PoseArrayCustom__Sequence__are_equal(const homework1_petr__msg__PoseArrayCustom__Sequence * lhs, const homework1_petr__msg__PoseArrayCustom__Sequence * rhs);

/// Copy an array of msg/PoseArrayCustom messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_homework1_petr
bool
homework1_petr__msg__PoseArrayCustom__Sequence__copy(
  const homework1_petr__msg__PoseArrayCustom__Sequence * input,
  homework1_petr__msg__PoseArrayCustom__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HOMEWORK1_PETR__MSG__DETAIL__POSE_ARRAY_CUSTOM__FUNCTIONS_H_
