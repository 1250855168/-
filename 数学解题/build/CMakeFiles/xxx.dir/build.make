# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xxx/Me/刷题C++/数学解题

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xxx/Me/刷题C++/数学解题/build

# Include any dependencies generated for this target.
include CMakeFiles/xxx.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/xxx.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/xxx.dir/flags.make

CMakeFiles/xxx.dir/Count_Primes.cc.o: CMakeFiles/xxx.dir/flags.make
CMakeFiles/xxx.dir/Count_Primes.cc.o: ../Count_Primes.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xxx/Me/刷题C++/数学解题/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/xxx.dir/Count_Primes.cc.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/xxx.dir/Count_Primes.cc.o -c /home/xxx/Me/刷题C++/数学解题/Count_Primes.cc

CMakeFiles/xxx.dir/Count_Primes.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/xxx.dir/Count_Primes.cc.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xxx/Me/刷题C++/数学解题/Count_Primes.cc > CMakeFiles/xxx.dir/Count_Primes.cc.i

CMakeFiles/xxx.dir/Count_Primes.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/xxx.dir/Count_Primes.cc.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xxx/Me/刷题C++/数学解题/Count_Primes.cc -o CMakeFiles/xxx.dir/Count_Primes.cc.s

# Object files for target xxx
xxx_OBJECTS = \
"CMakeFiles/xxx.dir/Count_Primes.cc.o"

# External object files for target xxx
xxx_EXTERNAL_OBJECTS =

xxx: CMakeFiles/xxx.dir/Count_Primes.cc.o
xxx: CMakeFiles/xxx.dir/build.make
xxx: CMakeFiles/xxx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xxx/Me/刷题C++/数学解题/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable xxx"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/xxx.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/xxx.dir/build: xxx

.PHONY : CMakeFiles/xxx.dir/build

CMakeFiles/xxx.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/xxx.dir/cmake_clean.cmake
.PHONY : CMakeFiles/xxx.dir/clean

CMakeFiles/xxx.dir/depend:
	cd /home/xxx/Me/刷题C++/数学解题/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xxx/Me/刷题C++/数学解题 /home/xxx/Me/刷题C++/数学解题 /home/xxx/Me/刷题C++/数学解题/build /home/xxx/Me/刷题C++/数学解题/build /home/xxx/Me/刷题C++/数学解题/build/CMakeFiles/xxx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/xxx.dir/depend

