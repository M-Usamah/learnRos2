#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "first_rpm_project::first_rpm_project__rosidl_typesupport_cpp" for configuration ""
set_property(TARGET first_rpm_project::first_rpm_project__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(first_rpm_project::first_rpm_project__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "rosidl_runtime_c::rosidl_runtime_c;rosidl_typesupport_cpp::rosidl_typesupport_cpp;rosidl_typesupport_c::rosidl_typesupport_c"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libfirst_rpm_project__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_NOCONFIG "libfirst_rpm_project__rosidl_typesupport_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS first_rpm_project::first_rpm_project__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_first_rpm_project::first_rpm_project__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libfirst_rpm_project__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
