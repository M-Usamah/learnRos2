// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from second_turn_camera_project:srv/SecndProjectTurnCamer.idl
// generated code does not contain a copyright notice

#ifndef SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__FUNCTIONS_H_
#define SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "second_turn_camera_project/msg/rosidl_generator_c__visibility_control.h"

#include "second_turn_camera_project/srv/detail/secnd_project_turn_camer__struct.h"

/// Initialize srv/SecndProjectTurnCamer message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Request
 * )) before or use
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__init(second_turn_camera_project__srv__SecndProjectTurnCamer_Request * msg);

/// Finalize srv/SecndProjectTurnCamer message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
void
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__fini(second_turn_camera_project__srv__SecndProjectTurnCamer_Request * msg);

/// Create srv/SecndProjectTurnCamer message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
second_turn_camera_project__srv__SecndProjectTurnCamer_Request *
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__create();

/// Destroy srv/SecndProjectTurnCamer message.
/**
 * It calls
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
void
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__destroy(second_turn_camera_project__srv__SecndProjectTurnCamer_Request * msg);

/// Check for srv/SecndProjectTurnCamer message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__are_equal(const second_turn_camera_project__srv__SecndProjectTurnCamer_Request * lhs, const second_turn_camera_project__srv__SecndProjectTurnCamer_Request * rhs);

/// Copy a srv/SecndProjectTurnCamer message.
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
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__copy(
  const second_turn_camera_project__srv__SecndProjectTurnCamer_Request * input,
  second_turn_camera_project__srv__SecndProjectTurnCamer_Request * output);

/// Initialize array of srv/SecndProjectTurnCamer messages.
/**
 * It allocates the memory for the number of elements and calls
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__init(second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * array, size_t size);

/// Finalize array of srv/SecndProjectTurnCamer messages.
/**
 * It calls
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
void
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__fini(second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * array);

/// Create array of srv/SecndProjectTurnCamer messages.
/**
 * It allocates the memory for the array and calls
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence *
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__create(size_t size);

/// Destroy array of srv/SecndProjectTurnCamer messages.
/**
 * It calls
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
void
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__destroy(second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * array);

/// Check for srv/SecndProjectTurnCamer message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__are_equal(const second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * lhs, const second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * rhs);

/// Copy an array of srv/SecndProjectTurnCamer messages.
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
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence__copy(
  const second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * input,
  second_turn_camera_project__srv__SecndProjectTurnCamer_Request__Sequence * output);

/// Initialize srv/SecndProjectTurnCamer message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Response
 * )) before or use
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__init(second_turn_camera_project__srv__SecndProjectTurnCamer_Response * msg);

/// Finalize srv/SecndProjectTurnCamer message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
void
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__fini(second_turn_camera_project__srv__SecndProjectTurnCamer_Response * msg);

/// Create srv/SecndProjectTurnCamer message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
second_turn_camera_project__srv__SecndProjectTurnCamer_Response *
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__create();

/// Destroy srv/SecndProjectTurnCamer message.
/**
 * It calls
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
void
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__destroy(second_turn_camera_project__srv__SecndProjectTurnCamer_Response * msg);

/// Check for srv/SecndProjectTurnCamer message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__are_equal(const second_turn_camera_project__srv__SecndProjectTurnCamer_Response * lhs, const second_turn_camera_project__srv__SecndProjectTurnCamer_Response * rhs);

/// Copy a srv/SecndProjectTurnCamer message.
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
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__copy(
  const second_turn_camera_project__srv__SecndProjectTurnCamer_Response * input,
  second_turn_camera_project__srv__SecndProjectTurnCamer_Response * output);

/// Initialize array of srv/SecndProjectTurnCamer messages.
/**
 * It allocates the memory for the number of elements and calls
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__init(second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * array, size_t size);

/// Finalize array of srv/SecndProjectTurnCamer messages.
/**
 * It calls
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
void
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__fini(second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * array);

/// Create array of srv/SecndProjectTurnCamer messages.
/**
 * It allocates the memory for the array and calls
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence *
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__create(size_t size);

/// Destroy array of srv/SecndProjectTurnCamer messages.
/**
 * It calls
 * second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
void
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__destroy(second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * array);

/// Check for srv/SecndProjectTurnCamer message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__are_equal(const second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * lhs, const second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * rhs);

/// Copy an array of srv/SecndProjectTurnCamer messages.
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
ROSIDL_GENERATOR_C_PUBLIC_second_turn_camera_project
bool
second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence__copy(
  const second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * input,
  second_turn_camera_project__srv__SecndProjectTurnCamer_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SECOND_TURN_CAMERA_PROJECT__SRV__DETAIL__SECND_PROJECT_TURN_CAMER__FUNCTIONS_H_
