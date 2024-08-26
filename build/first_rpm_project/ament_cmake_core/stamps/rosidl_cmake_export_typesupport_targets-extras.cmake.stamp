# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:first_rpm_project__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:first_rpm_project__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:first_rpm_project__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:first_rpm_project__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:first_rpm_project__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:first_rpm_project__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:first_rpm_project__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:first_rpm_project__rosidl_typesupport_cpp;__rosidl_generator_py:first_rpm_project__rosidl_generator_py")

# populate first_rpm_project_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "first_rpm_project::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'first_rpm_project' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND first_rpm_project_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
