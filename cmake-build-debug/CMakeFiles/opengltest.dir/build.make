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
CMAKE_COMMAND = /snap/clion/121/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/121/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shinzie/CLionProjects/opengltest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shinzie/CLionProjects/opengltest/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/opengltest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/opengltest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/opengltest.dir/flags.make

CMakeFiles/opengltest.dir/main.cpp.o: CMakeFiles/opengltest.dir/flags.make
CMakeFiles/opengltest.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shinzie/CLionProjects/opengltest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/opengltest.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opengltest.dir/main.cpp.o -c /home/shinzie/CLionProjects/opengltest/main.cpp

CMakeFiles/opengltest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opengltest.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shinzie/CLionProjects/opengltest/main.cpp > CMakeFiles/opengltest.dir/main.cpp.i

CMakeFiles/opengltest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opengltest.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shinzie/CLionProjects/opengltest/main.cpp -o CMakeFiles/opengltest.dir/main.cpp.s

CMakeFiles/opengltest.dir/draw.cpp.o: CMakeFiles/opengltest.dir/flags.make
CMakeFiles/opengltest.dir/draw.cpp.o: ../draw.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shinzie/CLionProjects/opengltest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/opengltest.dir/draw.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opengltest.dir/draw.cpp.o -c /home/shinzie/CLionProjects/opengltest/draw.cpp

CMakeFiles/opengltest.dir/draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opengltest.dir/draw.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shinzie/CLionProjects/opengltest/draw.cpp > CMakeFiles/opengltest.dir/draw.cpp.i

CMakeFiles/opengltest.dir/draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opengltest.dir/draw.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shinzie/CLionProjects/opengltest/draw.cpp -o CMakeFiles/opengltest.dir/draw.cpp.s

CMakeFiles/opengltest.dir/Disk.cpp.o: CMakeFiles/opengltest.dir/flags.make
CMakeFiles/opengltest.dir/Disk.cpp.o: ../Disk.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shinzie/CLionProjects/opengltest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/opengltest.dir/Disk.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opengltest.dir/Disk.cpp.o -c /home/shinzie/CLionProjects/opengltest/Disk.cpp

CMakeFiles/opengltest.dir/Disk.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opengltest.dir/Disk.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shinzie/CLionProjects/opengltest/Disk.cpp > CMakeFiles/opengltest.dir/Disk.cpp.i

CMakeFiles/opengltest.dir/Disk.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opengltest.dir/Disk.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shinzie/CLionProjects/opengltest/Disk.cpp -o CMakeFiles/opengltest.dir/Disk.cpp.s

CMakeFiles/opengltest.dir/player.cpp.o: CMakeFiles/opengltest.dir/flags.make
CMakeFiles/opengltest.dir/player.cpp.o: ../player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shinzie/CLionProjects/opengltest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/opengltest.dir/player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opengltest.dir/player.cpp.o -c /home/shinzie/CLionProjects/opengltest/player.cpp

CMakeFiles/opengltest.dir/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opengltest.dir/player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shinzie/CLionProjects/opengltest/player.cpp > CMakeFiles/opengltest.dir/player.cpp.i

CMakeFiles/opengltest.dir/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opengltest.dir/player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shinzie/CLionProjects/opengltest/player.cpp -o CMakeFiles/opengltest.dir/player.cpp.s

CMakeFiles/opengltest.dir/board.cpp.o: CMakeFiles/opengltest.dir/flags.make
CMakeFiles/opengltest.dir/board.cpp.o: ../board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shinzie/CLionProjects/opengltest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/opengltest.dir/board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opengltest.dir/board.cpp.o -c /home/shinzie/CLionProjects/opengltest/board.cpp

CMakeFiles/opengltest.dir/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opengltest.dir/board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shinzie/CLionProjects/opengltest/board.cpp > CMakeFiles/opengltest.dir/board.cpp.i

CMakeFiles/opengltest.dir/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opengltest.dir/board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shinzie/CLionProjects/opengltest/board.cpp -o CMakeFiles/opengltest.dir/board.cpp.s

CMakeFiles/opengltest.dir/utility.cpp.o: CMakeFiles/opengltest.dir/flags.make
CMakeFiles/opengltest.dir/utility.cpp.o: ../utility.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shinzie/CLionProjects/opengltest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/opengltest.dir/utility.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opengltest.dir/utility.cpp.o -c /home/shinzie/CLionProjects/opengltest/utility.cpp

CMakeFiles/opengltest.dir/utility.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opengltest.dir/utility.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shinzie/CLionProjects/opengltest/utility.cpp > CMakeFiles/opengltest.dir/utility.cpp.i

CMakeFiles/opengltest.dir/utility.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opengltest.dir/utility.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shinzie/CLionProjects/opengltest/utility.cpp -o CMakeFiles/opengltest.dir/utility.cpp.s

CMakeFiles/opengltest.dir/coord.cpp.o: CMakeFiles/opengltest.dir/flags.make
CMakeFiles/opengltest.dir/coord.cpp.o: ../coord.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shinzie/CLionProjects/opengltest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/opengltest.dir/coord.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opengltest.dir/coord.cpp.o -c /home/shinzie/CLionProjects/opengltest/coord.cpp

CMakeFiles/opengltest.dir/coord.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opengltest.dir/coord.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shinzie/CLionProjects/opengltest/coord.cpp > CMakeFiles/opengltest.dir/coord.cpp.i

CMakeFiles/opengltest.dir/coord.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opengltest.dir/coord.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shinzie/CLionProjects/opengltest/coord.cpp -o CMakeFiles/opengltest.dir/coord.cpp.s

CMakeFiles/opengltest.dir/moves.cpp.o: CMakeFiles/opengltest.dir/flags.make
CMakeFiles/opengltest.dir/moves.cpp.o: ../moves.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shinzie/CLionProjects/opengltest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/opengltest.dir/moves.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opengltest.dir/moves.cpp.o -c /home/shinzie/CLionProjects/opengltest/moves.cpp

CMakeFiles/opengltest.dir/moves.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opengltest.dir/moves.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shinzie/CLionProjects/opengltest/moves.cpp > CMakeFiles/opengltest.dir/moves.cpp.i

CMakeFiles/opengltest.dir/moves.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opengltest.dir/moves.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shinzie/CLionProjects/opengltest/moves.cpp -o CMakeFiles/opengltest.dir/moves.cpp.s

# Object files for target opengltest
opengltest_OBJECTS = \
"CMakeFiles/opengltest.dir/main.cpp.o" \
"CMakeFiles/opengltest.dir/draw.cpp.o" \
"CMakeFiles/opengltest.dir/Disk.cpp.o" \
"CMakeFiles/opengltest.dir/player.cpp.o" \
"CMakeFiles/opengltest.dir/board.cpp.o" \
"CMakeFiles/opengltest.dir/utility.cpp.o" \
"CMakeFiles/opengltest.dir/coord.cpp.o" \
"CMakeFiles/opengltest.dir/moves.cpp.o"

# External object files for target opengltest
opengltest_EXTERNAL_OBJECTS =

opengltest: CMakeFiles/opengltest.dir/main.cpp.o
opengltest: CMakeFiles/opengltest.dir/draw.cpp.o
opengltest: CMakeFiles/opengltest.dir/Disk.cpp.o
opengltest: CMakeFiles/opengltest.dir/player.cpp.o
opengltest: CMakeFiles/opengltest.dir/board.cpp.o
opengltest: CMakeFiles/opengltest.dir/utility.cpp.o
opengltest: CMakeFiles/opengltest.dir/coord.cpp.o
opengltest: CMakeFiles/opengltest.dir/moves.cpp.o
opengltest: CMakeFiles/opengltest.dir/build.make
opengltest: /usr/lib/x86_64-linux-gnu/libglfw.so.3.2
opengltest: /usr/lib/x86_64-linux-gnu/libglut.so
opengltest: /usr/lib/x86_64-linux-gnu/libXi.so
opengltest: CMakeFiles/opengltest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shinzie/CLionProjects/opengltest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable opengltest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opengltest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/opengltest.dir/build: opengltest

.PHONY : CMakeFiles/opengltest.dir/build

CMakeFiles/opengltest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/opengltest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/opengltest.dir/clean

CMakeFiles/opengltest.dir/depend:
	cd /home/shinzie/CLionProjects/opengltest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shinzie/CLionProjects/opengltest /home/shinzie/CLionProjects/opengltest /home/shinzie/CLionProjects/opengltest/cmake-build-debug /home/shinzie/CLionProjects/opengltest/cmake-build-debug /home/shinzie/CLionProjects/opengltest/cmake-build-debug/CMakeFiles/opengltest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/opengltest.dir/depend
