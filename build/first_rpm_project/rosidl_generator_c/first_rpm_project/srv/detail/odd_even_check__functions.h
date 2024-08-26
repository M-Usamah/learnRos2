// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from first_rpm_project:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice

#ifndef FIRST_RPM_PROJECT__SRV__DETAIL__ODD_EVEN_CHECK__FUNCTIONS_H_
#define FIRST_RPM_PROJECT__SRV__DETAIL__ODD_EVEN_CHECK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "first_rpm_project/msg/rosidl_generator_c__visibility_control.h"

#include "first_rpm_project/srv/detail/odd_even_check__struct.h"

/// Initialize srv/OddEvenCheck message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * first_rpm_project__srv__OddEvenCheck_Request
 * )) before or use
 * first_rpm_project__srv__OddEvenCheck_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
bool
first_rpm_project__srv__OddEvenCheck_Request__init(first_rpm_project__srv__OddEvenCheck_Request * msg);

/// Finalize srv/OddEvenCheck message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
void
first_rpm_project__srv__OddEvenCheck_Request__fini(first_rpm_project__srv__OddEvenCheck_Request * msg);

/// Create srv/OddEvenCheck message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * first_rpm_project__srv__OddEvenCheck_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
first_rpm_project__srv__OddEvenCheck_Request *
first_rpm_project__srv__OddEvenCheck_Request__create();

/// Destroy srv/OddEvenCheck message.
/**
 * It calls
 * first_rpm_project__srv__OddEvenCheck_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
void
first_rpm_project__srv__OddEvenCheck_Request__destroy(first_rpm_project__srv__OddEvenCheck_Request * msg);

/// Check for srv/OddEvenCheck message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
bool
first_rpm_project__srv__OddEvenCheck_Request__are_equal(const first_rpm_project__srv__OddEvenCheck_Request * lhs, const first_rpm_project__srv__OddEvenCheck_Request * rhs);

/// Copy a srv/OddEvenCheck message.
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
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
bool
first_rpm_project__srv__OddEvenCheck_Request__copy(
  const first_rpm_project__srv__OddEvenCheck_Request * input,
  first_rpm_project__srv__OddEvenCheck_Request * output);

/// Initialize array of srv/OddEvenCheck messages.
/**
 * It allocates the memory for the number of elements and calls
 * first_rpm_project__srv__OddEvenCheck_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
bool
first_rpm_project__srv__OddEvenCheck_Request__Sequence__init(first_rpm_project__srv__OddEvenCheck_Request__Sequence * array, size_t size);

/// Finalize array of srv/OddEvenCheck messages.
/**
 * It calls
 * first_rpm_project__srv__OddEvenCheck_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
void
first_rpm_project__srv__OddEvenCheck_Request__Sequence__fini(first_rpm_project__srv__OddEvenCheck_Request__Sequence * array);

/// Create array of srv/OddEvenCheck messages.
/**
 * It allocates the memory for the array and calls
 * first_rpm_project__srv__OddEvenCheck_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
first_rpm_project__srv__OddEvenCheck_Request__Sequence *
first_rpm_project__srv__OddEvenCheck_Request__Sequence__create(size_t size);

/// Destroy array of srv/OddEvenCheck messages.
/**
 * It calls
 * first_rpm_project__srv__OddEvenCheck_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
void
first_rpm_project__srv__OddEvenCheck_Request__Sequence__destroy(first_rpm_project__srv__OddEvenCheck_Request__Sequence * array);

/// Check for srv/OddEvenCheck message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
bool
first_rpm_project__srv__OddEvenCheck_Request__Sequence__are_equal(const first_rpm_project__srv__OddEvenCheck_Request__Sequence * lhs, const first_rpm_project__srv__OddEvenCheck_Request__Sequence * rhs);

/// Copy an array of srv/OddEvenCheck messages.
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
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
bool
first_rpm_project__srv__OddEvenCheck_Request__Sequence__copy(
  const first_rpm_project__srv__OddEvenCheck_Request__Sequence * input,
  first_rpm_project__srv__OddEvenCheck_Request__Sequence * output);

/// Initialize srv/OddEvenCheck message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * first_rpm_project__srv__OddEvenCheck_Response
 * )) before or use
 * first_rpm_project__srv__OddEvenCheck_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
bool
first_rpm_project__srv__OddEvenCheck_Response__init(first_rpm_project__srv__OddEvenCheck_Response * msg);

/// Finalize srv/OddEvenCheck message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
void
first_rpm_project__srv__OddEvenCheck_Response__fini(first_rpm_project__srv__OddEvenCheck_Response * msg);

/// Create srv/OddEvenCheck message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * first_rpm_project__srv__OddEvenCheck_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
first_rpm_project__srv__OddEvenCheck_Response *
first_rpm_project__srv__OddEvenCheck_Response__create();

/// Destroy srv/OddEvenCheck message.
/**
 * It calls
 * first_rpm_project__srv__OddEvenCheck_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
void
first_rpm_project__srv__OddEvenCheck_Response__destroy(first_rpm_project__srv__OddEvenCheck_Response * msg);

/// Check for srv/OddEvenCheck message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
bool
first_rpm_project__srv__OddEvenCheck_Response__are_equal(const first_rpm_project__srv__OddEvenCheck_Response * lhs, const first_rpm_project__srv__OddEvenCheck_Response * rhs);

/// Copy a srv/OddEvenCheck message.
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
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
bool
first_rpm_project__srv__OddEvenCheck_Response__copy(
  const first_rpm_project__srv__OddEvenCheck_Response * input,
  first_rpm_project__srv__OddEvenCheck_Response * output);

/// Initialize array of srv/OddEvenCheck messages.
/**
 * It allocates the memory for the number of elements and calls
 * first_rpm_project__srv__OddEvenCheck_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
bool
first_rpm_project__srv__OddEvenCheck_Response__Sequence__init(first_rpm_project__srv__OddEvenCheck_Response__Sequence * array, size_t size);

/// Finalize array of srv/OddEvenCheck messages.
/**
 * It calls
 * first_rpm_project__srv__OddEvenCheck_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
void
first_rpm_project__srv__OddEvenCheck_Response__Sequence__fini(first_rpm_project__srv__OddEvenCheck_Response__Sequence * array);

/// Create array of srv/OddEvenCheck messages.
/**
 * It allocates the memory for the array and calls
 * first_rpm_project__srv__OddEvenCheck_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
first_rpm_project__srv__OddEvenCheck_Response__Sequence *
first_rpm_project__srv__OddEvenCheck_Response__Sequence__create(size_t size);

/// Destroy array of srv/OddEvenCheck messages.
/**
 * It calls
 * first_rpm_project__srv__OddEvenCheck_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
void
first_rpm_project__srv__OddEvenCheck_Response__Sequence__destroy(first_rpm_project__srv__OddEvenCheck_Response__Sequence * array);

/// Check for srv/OddEvenCheck message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
bool
first_rpm_project__srv__OddEvenCheck_Response__Sequence__are_equal(const first_rpm_project__srv__OddEvenCheck_Response__Sequence * lhs, const first_rpm_project__srv__OddEvenCheck_Response__Sequence * rhs);

/// Copy an array of srv/OddEvenCheck messages.
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
ROSIDL_GENERATOR_C_PUBLIC_first_rpm_project
bool
first_rpm_project__srv__OddEvenCheck_Response__Sequence__copy(
  const first_rpm_project__srv__OddEvenCheck_Response__Sequence * input,
  first_rpm_project__srv__OddEvenCheck_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FIRST_RPM_PROJECT__SRV__DETAIL__ODD_EVEN_CHECK__FUNCTIONS_H_
