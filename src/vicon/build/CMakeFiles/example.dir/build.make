# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.20.5/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.20.5/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build

# Include any dependencies generated for this target.
include CMakeFiles/example.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/example.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/example.dir/flags.make

CMakeFiles/example.dir/src/server.cpp.o: CMakeFiles/example.dir/flags.make
CMakeFiles/example.dir/src/server.cpp.o: ../src/server.cpp
CMakeFiles/example.dir/src/server.cpp.o: CMakeFiles/example.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/example.dir/src/server.cpp.o"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/example.dir/src/server.cpp.o -MF CMakeFiles/example.dir/src/server.cpp.o.d -o CMakeFiles/example.dir/src/server.cpp.o -c /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/src/server.cpp

CMakeFiles/example.dir/src/server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example.dir/src/server.cpp.i"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/src/server.cpp > CMakeFiles/example.dir/src/server.cpp.i

CMakeFiles/example.dir/src/server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example.dir/src/server.cpp.s"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/src/server.cpp -o CMakeFiles/example.dir/src/server.cpp.s

CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.o: CMakeFiles/example.dir/flags.make
CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.o: /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc
CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.o: CMakeFiles/example.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.o"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.o -MF CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.o.d -o CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.o -c /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc

CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.i"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc > CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.i

CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.s"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc -o CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.s

# Object files for target example
example_OBJECTS = \
"CMakeFiles/example.dir/src/server.cpp.o" \
"CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.o"

# External object files for target example
example_EXTERNAL_OBJECTS =

example: CMakeFiles/example.dir/src/server.cpp.o
example: CMakeFiles/example.dir/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/gen/msgs/message.pb.cc.o
example: CMakeFiles/example.dir/build.make
example: /usr/local/lib/libprotobuf.a
example: libvicon_driver_zmq.a
example: /usr/local/lib/libzmq.dylib
example: extern/simple_vicon/libvicon_driver.a
example: extern/simple_vicon/extern/vicon-datastream-sdk/libViconDataStreamSDK_CPP.dylib
example: /usr/local/lib/libboost_system-mt.dylib
example: /usr/local/lib/libboost_thread-mt.dylib
example: /usr/local/lib/libboost_timer-mt.dylib
example: /usr/local/lib/libboost_chrono-mt.dylib
example: CMakeFiles/example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/example.dir/build: example
.PHONY : CMakeFiles/example.dir/build

CMakeFiles/example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/example.dir/clean

CMakeFiles/example.dir/depend:
	cd /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build/CMakeFiles/example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/example.dir/depend
