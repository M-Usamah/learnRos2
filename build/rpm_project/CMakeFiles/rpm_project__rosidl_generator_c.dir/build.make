# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/usamah/Documents/project/learnRos2/02_udemy_project/src/rpm_project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usamah/Documents/project/learnRos2/build/rpm_project

# Include any dependencies generated for this target.
include CMakeFiles/rpm_project__rosidl_generator_c.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/rpm_project__rosidl_generator_c.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/rpm_project__rosidl_generator_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rpm_project__rosidl_generator_c.dir/flags.make

rosidl_generator_c/rpm_project/srv/odd_even_check.h: /opt/ros/humble/lib/rosidl_generator_c/rosidl_generator_c
rosidl_generator_c/rpm_project/srv/odd_even_check.h: /opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_generator_c/__init__.py
rosidl_generator_c/rpm_project/srv/odd_even_check.h: /opt/ros/humble/share/rosidl_generator_c/resource/action__type_support.h.em
rosidl_generator_c/rpm_project/srv/odd_even_check.h: /opt/ros/humble/share/rosidl_generator_c/resource/idl.h.em
rosidl_generator_c/rpm_project/srv/odd_even_check.h: /opt/ros/humble/share/rosidl_generator_c/resource/idl__functions.c.em
rosidl_generator_c/rpm_project/srv/odd_even_check.h: /opt/ros/humble/share/rosidl_generator_c/resource/idl__functions.h.em
rosidl_generator_c/rpm_project/srv/odd_even_check.h: /opt/ros/humble/share/rosidl_generator_c/resource/idl__struct.h.em
rosidl_generator_c/rpm_project/srv/odd_even_check.h: /opt/ros/humble/share/rosidl_generator_c/resource/idl__type_support.h.em
rosidl_generator_c/rpm_project/srv/odd_even_check.h: /opt/ros/humble/share/rosidl_generator_c/resource/msg__functions.c.em
rosidl_generator_c/rpm_project/srv/odd_even_check.h: /opt/ros/humble/share/rosidl_generator_c/resource/msg__functions.h.em
rosidl_generator_c/rpm_project/srv/odd_even_check.h: /opt/ros/humble/share/rosidl_generator_c/resource/msg__struct.h.em
rosidl_generator_c/rpm_project/srv/odd_even_check.h: /opt/ros/humble/share/rosidl_generator_c/resource/msg__type_support.h.em
rosidl_generator_c/rpm_project/srv/odd_even_check.h: /opt/ros/humble/share/rosidl_generator_c/resource/srv__type_support.h.em
rosidl_generator_c/rpm_project/srv/odd_even_check.h: rosidl_adapter/rpm_project/srv/OddEvenCheck.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/usamah/Documents/project/learnRos2/build/rpm_project/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating C code for ROS interfaces"
	/usr/bin/python3 /opt/ros/humble/share/rosidl_generator_c/cmake/../../../lib/rosidl_generator_c/rosidl_generator_c --generator-arguments-file /home/usamah/Documents/project/learnRos2/build/rpm_project/rosidl_generator_c__arguments.json

rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.h: rosidl_generator_c/rpm_project/srv/odd_even_check.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.h

rosidl_generator_c/rpm_project/srv/detail/odd_even_check__struct.h: rosidl_generator_c/rpm_project/srv/odd_even_check.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/rpm_project/srv/detail/odd_even_check__struct.h

rosidl_generator_c/rpm_project/srv/detail/odd_even_check__type_support.h: rosidl_generator_c/rpm_project/srv/odd_even_check.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/rpm_project/srv/detail/odd_even_check__type_support.h

rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c: rosidl_generator_c/rpm_project/srv/odd_even_check.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c

CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.o: CMakeFiles/rpm_project__rosidl_generator_c.dir/flags.make
CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.o: rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c
CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.o: CMakeFiles/rpm_project__rosidl_generator_c.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usamah/Documents/project/learnRos2/build/rpm_project/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.o -MF CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.o.d -o CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.o -c /home/usamah/Documents/project/learnRos2/build/rpm_project/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c

CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/usamah/Documents/project/learnRos2/build/rpm_project/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c > CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.i

CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/usamah/Documents/project/learnRos2/build/rpm_project/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c -o CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.s

# Object files for target rpm_project__rosidl_generator_c
rpm_project__rosidl_generator_c_OBJECTS = \
"CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.o"

# External object files for target rpm_project__rosidl_generator_c
rpm_project__rosidl_generator_c_EXTERNAL_OBJECTS =

librpm_project__rosidl_generator_c.so: CMakeFiles/rpm_project__rosidl_generator_c.dir/rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c.o
librpm_project__rosidl_generator_c.so: CMakeFiles/rpm_project__rosidl_generator_c.dir/build.make
librpm_project__rosidl_generator_c.so: /opt/ros/humble/lib/librosidl_runtime_c.so
librpm_project__rosidl_generator_c.so: /opt/ros/humble/lib/librcutils.so
librpm_project__rosidl_generator_c.so: CMakeFiles/rpm_project__rosidl_generator_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usamah/Documents/project/learnRos2/build/rpm_project/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C shared library librpm_project__rosidl_generator_c.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rpm_project__rosidl_generator_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rpm_project__rosidl_generator_c.dir/build: librpm_project__rosidl_generator_c.so
.PHONY : CMakeFiles/rpm_project__rosidl_generator_c.dir/build

CMakeFiles/rpm_project__rosidl_generator_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rpm_project__rosidl_generator_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rpm_project__rosidl_generator_c.dir/clean

CMakeFiles/rpm_project__rosidl_generator_c.dir/depend: rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.c
CMakeFiles/rpm_project__rosidl_generator_c.dir/depend: rosidl_generator_c/rpm_project/srv/detail/odd_even_check__functions.h
CMakeFiles/rpm_project__rosidl_generator_c.dir/depend: rosidl_generator_c/rpm_project/srv/detail/odd_even_check__struct.h
CMakeFiles/rpm_project__rosidl_generator_c.dir/depend: rosidl_generator_c/rpm_project/srv/detail/odd_even_check__type_support.h
CMakeFiles/rpm_project__rosidl_generator_c.dir/depend: rosidl_generator_c/rpm_project/srv/odd_even_check.h
	cd /home/usamah/Documents/project/learnRos2/build/rpm_project && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usamah/Documents/project/learnRos2/02_udemy_project/src/rpm_project /home/usamah/Documents/project/learnRos2/02_udemy_project/src/rpm_project /home/usamah/Documents/project/learnRos2/build/rpm_project /home/usamah/Documents/project/learnRos2/build/rpm_project /home/usamah/Documents/project/learnRos2/build/rpm_project/CMakeFiles/rpm_project__rosidl_generator_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rpm_project__rosidl_generator_c.dir/depend

