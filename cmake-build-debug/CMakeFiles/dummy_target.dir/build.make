# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/sziraqui/MyApps/clion-2019.1.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/sziraqui/MyApps/clion-2019.1.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sziraqui/Projects/napi-samples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sziraqui/Projects/napi-samples/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/dummy_target.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dummy_target.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dummy_target.dir/flags.make

CMakeFiles/dummy_target.dir/class_binding/src/main.cpp.o: CMakeFiles/dummy_target.dir/flags.make
CMakeFiles/dummy_target.dir/class_binding/src/main.cpp.o: ../class_binding/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sziraqui/Projects/napi-samples/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dummy_target.dir/class_binding/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dummy_target.dir/class_binding/src/main.cpp.o -c /home/sziraqui/Projects/napi-samples/class_binding/src/main.cpp

CMakeFiles/dummy_target.dir/class_binding/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dummy_target.dir/class_binding/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sziraqui/Projects/napi-samples/class_binding/src/main.cpp > CMakeFiles/dummy_target.dir/class_binding/src/main.cpp.i

CMakeFiles/dummy_target.dir/class_binding/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dummy_target.dir/class_binding/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sziraqui/Projects/napi-samples/class_binding/src/main.cpp -o CMakeFiles/dummy_target.dir/class_binding/src/main.cpp.s

CMakeFiles/dummy_target.dir/function_binding/src/funcs.cpp.o: CMakeFiles/dummy_target.dir/flags.make
CMakeFiles/dummy_target.dir/function_binding/src/funcs.cpp.o: ../function_binding/src/funcs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sziraqui/Projects/napi-samples/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/dummy_target.dir/function_binding/src/funcs.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dummy_target.dir/function_binding/src/funcs.cpp.o -c /home/sziraqui/Projects/napi-samples/function_binding/src/funcs.cpp

CMakeFiles/dummy_target.dir/function_binding/src/funcs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dummy_target.dir/function_binding/src/funcs.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sziraqui/Projects/napi-samples/function_binding/src/funcs.cpp > CMakeFiles/dummy_target.dir/function_binding/src/funcs.cpp.i

CMakeFiles/dummy_target.dir/function_binding/src/funcs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dummy_target.dir/function_binding/src/funcs.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sziraqui/Projects/napi-samples/function_binding/src/funcs.cpp -o CMakeFiles/dummy_target.dir/function_binding/src/funcs.cpp.s

CMakeFiles/dummy_target.dir/function_binding/src/main.cpp.o: CMakeFiles/dummy_target.dir/flags.make
CMakeFiles/dummy_target.dir/function_binding/src/main.cpp.o: ../function_binding/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sziraqui/Projects/napi-samples/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/dummy_target.dir/function_binding/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dummy_target.dir/function_binding/src/main.cpp.o -c /home/sziraqui/Projects/napi-samples/function_binding/src/main.cpp

CMakeFiles/dummy_target.dir/function_binding/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dummy_target.dir/function_binding/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sziraqui/Projects/napi-samples/function_binding/src/main.cpp > CMakeFiles/dummy_target.dir/function_binding/src/main.cpp.i

CMakeFiles/dummy_target.dir/function_binding/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dummy_target.dir/function_binding/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sziraqui/Projects/napi-samples/function_binding/src/main.cpp -o CMakeFiles/dummy_target.dir/function_binding/src/main.cpp.s

# Object files for target dummy_target
dummy_target_OBJECTS = \
"CMakeFiles/dummy_target.dir/class_binding/src/main.cpp.o" \
"CMakeFiles/dummy_target.dir/function_binding/src/funcs.cpp.o" \
"CMakeFiles/dummy_target.dir/function_binding/src/main.cpp.o"

# External object files for target dummy_target
dummy_target_EXTERNAL_OBJECTS =

dummy_target: CMakeFiles/dummy_target.dir/class_binding/src/main.cpp.o
dummy_target: CMakeFiles/dummy_target.dir/function_binding/src/funcs.cpp.o
dummy_target: CMakeFiles/dummy_target.dir/function_binding/src/main.cpp.o
dummy_target: CMakeFiles/dummy_target.dir/build.make
dummy_target: CMakeFiles/dummy_target.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sziraqui/Projects/napi-samples/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable dummy_target"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dummy_target.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dummy_target.dir/build: dummy_target

.PHONY : CMakeFiles/dummy_target.dir/build

CMakeFiles/dummy_target.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dummy_target.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dummy_target.dir/clean

CMakeFiles/dummy_target.dir/depend:
	cd /home/sziraqui/Projects/napi-samples/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sziraqui/Projects/napi-samples /home/sziraqui/Projects/napi-samples /home/sziraqui/Projects/napi-samples/cmake-build-debug /home/sziraqui/Projects/napi-samples/cmake-build-debug /home/sziraqui/Projects/napi-samples/cmake-build-debug/CMakeFiles/dummy_target.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dummy_target.dir/depend

