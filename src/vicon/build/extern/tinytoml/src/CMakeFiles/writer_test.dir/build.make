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
include extern/tinytoml/src/CMakeFiles/writer_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include extern/tinytoml/src/CMakeFiles/writer_test.dir/compiler_depend.make

# Include the progress variables for this target.
include extern/tinytoml/src/CMakeFiles/writer_test.dir/progress.make

# Include the compile flags for this target's objects.
include extern/tinytoml/src/CMakeFiles/writer_test.dir/flags.make

extern/tinytoml/src/CMakeFiles/writer_test.dir/writer_test.cc.o: extern/tinytoml/src/CMakeFiles/writer_test.dir/flags.make
extern/tinytoml/src/CMakeFiles/writer_test.dir/writer_test.cc.o: ../extern/tinytoml/src/writer_test.cc
extern/tinytoml/src/CMakeFiles/writer_test.dir/writer_test.cc.o: extern/tinytoml/src/CMakeFiles/writer_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object extern/tinytoml/src/CMakeFiles/writer_test.dir/writer_test.cc.o"
	cd /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build/extern/tinytoml/src && /usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT extern/tinytoml/src/CMakeFiles/writer_test.dir/writer_test.cc.o -MF CMakeFiles/writer_test.dir/writer_test.cc.o.d -o CMakeFiles/writer_test.dir/writer_test.cc.o -c /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/extern/tinytoml/src/writer_test.cc

extern/tinytoml/src/CMakeFiles/writer_test.dir/writer_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/writer_test.dir/writer_test.cc.i"
	cd /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build/extern/tinytoml/src && /usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/extern/tinytoml/src/writer_test.cc > CMakeFiles/writer_test.dir/writer_test.cc.i

extern/tinytoml/src/CMakeFiles/writer_test.dir/writer_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/writer_test.dir/writer_test.cc.s"
	cd /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build/extern/tinytoml/src && /usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/extern/tinytoml/src/writer_test.cc -o CMakeFiles/writer_test.dir/writer_test.cc.s

# Object files for target writer_test
writer_test_OBJECTS = \
"CMakeFiles/writer_test.dir/writer_test.cc.o"

# External object files for target writer_test
writer_test_EXTERNAL_OBJECTS =

extern/tinytoml/src/writer_test: extern/tinytoml/src/CMakeFiles/writer_test.dir/writer_test.cc.o
extern/tinytoml/src/writer_test: extern/tinytoml/src/CMakeFiles/writer_test.dir/build.make
extern/tinytoml/src/writer_test: extern/tinytoml/src/third_party/gtest-1.7.0/libgtest.a
extern/tinytoml/src/writer_test: extern/tinytoml/src/third_party/gtest-1.7.0/libgtest_main.a
extern/tinytoml/src/writer_test: extern/tinytoml/src/third_party/gtest-1.7.0/libgtest.a
extern/tinytoml/src/writer_test: extern/tinytoml/src/CMakeFiles/writer_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable writer_test"
	cd /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build/extern/tinytoml/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/writer_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
extern/tinytoml/src/CMakeFiles/writer_test.dir/build: extern/tinytoml/src/writer_test
.PHONY : extern/tinytoml/src/CMakeFiles/writer_test.dir/build

extern/tinytoml/src/CMakeFiles/writer_test.dir/clean:
	cd /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build/extern/tinytoml/src && $(CMAKE_COMMAND) -P CMakeFiles/writer_test.dir/cmake_clean.cmake
.PHONY : extern/tinytoml/src/CMakeFiles/writer_test.dir/clean

extern/tinytoml/src/CMakeFiles/writer_test.dir/depend:
	cd /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/extern/tinytoml/src /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build/extern/tinytoml/src /Users/alexanderbouman/Desktop/GradSchool/RExLab/RExQuad/MocapTest/src/vicon/build/extern/tinytoml/src/CMakeFiles/writer_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : extern/tinytoml/src/CMakeFiles/writer_test.dir/depend

