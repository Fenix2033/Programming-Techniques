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
CMAKE_COMMAND = /snap/clion/169/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/169/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CV61.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/CV61.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CV61.dir/flags.make

CMakeFiles/CV61.dir/main.cpp.o: CMakeFiles/CV61.dir/flags.make
CMakeFiles/CV61.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CV61.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CV61.dir/main.cpp.o -c /home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba/main.cpp

CMakeFiles/CV61.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CV61.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba/main.cpp > CMakeFiles/CV61.dir/main.cpp.i

CMakeFiles/CV61.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CV61.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba/main.cpp -o CMakeFiles/CV61.dir/main.cpp.s

CMakeFiles/CV61.dir/Fronta2.cpp.o: CMakeFiles/CV61.dir/flags.make
CMakeFiles/CV61.dir/Fronta2.cpp.o: ../Fronta2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CV61.dir/Fronta2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CV61.dir/Fronta2.cpp.o -c /home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba/Fronta2.cpp

CMakeFiles/CV61.dir/Fronta2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CV61.dir/Fronta2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba/Fronta2.cpp > CMakeFiles/CV61.dir/Fronta2.cpp.i

CMakeFiles/CV61.dir/Fronta2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CV61.dir/Fronta2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba/Fronta2.cpp -o CMakeFiles/CV61.dir/Fronta2.cpp.s

# Object files for target CV61
CV61_OBJECTS = \
"CMakeFiles/CV61.dir/main.cpp.o" \
"CMakeFiles/CV61.dir/Fronta2.cpp.o"

# External object files for target CV61
CV61_EXTERNAL_OBJECTS =

CV61: CMakeFiles/CV61.dir/main.cpp.o
CV61: CMakeFiles/CV61.dir/Fronta2.cpp.o
CV61: CMakeFiles/CV61.dir/build.make
CV61: CMakeFiles/CV61.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable CV61"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CV61.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CV61.dir/build: CV61
.PHONY : CMakeFiles/CV61.dir/build

CMakeFiles/CV61.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CV61.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CV61.dir/clean

CMakeFiles/CV61.dir/depend:
	cd /home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba /home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba /home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba/cmake-build-debug /home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba/cmake-build-debug /home/xkudla/Documents/Mendel/PTN/CV/CV06/FrontaOba/cmake-build-debug/CMakeFiles/CV61.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CV61.dir/depend

