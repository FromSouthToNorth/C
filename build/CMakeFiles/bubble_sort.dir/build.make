# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\work\ClionProjects\C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\work\ClionProjects\C\build

# Include any dependencies generated for this target.
include CMakeFiles/bubble_sort.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bubble_sort.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bubble_sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bubble_sort.dir/flags.make

CMakeFiles/bubble_sort.dir/sort/bubble_sort.c.obj: CMakeFiles/bubble_sort.dir/flags.make
CMakeFiles/bubble_sort.dir/sort/bubble_sort.c.obj: ../sort/bubble_sort.c
CMakeFiles/bubble_sort.dir/sort/bubble_sort.c.obj: CMakeFiles/bubble_sort.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\work\ClionProjects\C\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/bubble_sort.dir/sort/bubble_sort.c.obj"
	E:\mingw-w64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/bubble_sort.dir/sort/bubble_sort.c.obj -MF CMakeFiles\bubble_sort.dir\sort\bubble_sort.c.obj.d -o CMakeFiles\bubble_sort.dir\sort\bubble_sort.c.obj -c D:\work\ClionProjects\C\sort\bubble_sort.c

CMakeFiles/bubble_sort.dir/sort/bubble_sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bubble_sort.dir/sort/bubble_sort.c.i"
	E:\mingw-w64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\work\ClionProjects\C\sort\bubble_sort.c > CMakeFiles\bubble_sort.dir\sort\bubble_sort.c.i

CMakeFiles/bubble_sort.dir/sort/bubble_sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bubble_sort.dir/sort/bubble_sort.c.s"
	E:\mingw-w64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\work\ClionProjects\C\sort\bubble_sort.c -o CMakeFiles\bubble_sort.dir\sort\bubble_sort.c.s

# Object files for target bubble_sort
bubble_sort_OBJECTS = \
"CMakeFiles/bubble_sort.dir/sort/bubble_sort.c.obj"

# External object files for target bubble_sort
bubble_sort_EXTERNAL_OBJECTS =

bubble_sort.exe: CMakeFiles/bubble_sort.dir/sort/bubble_sort.c.obj
bubble_sort.exe: CMakeFiles/bubble_sort.dir/build.make
bubble_sort.exe: CMakeFiles/bubble_sort.dir/linklibs.rsp
bubble_sort.exe: CMakeFiles/bubble_sort.dir/objects1.rsp
bubble_sort.exe: CMakeFiles/bubble_sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\work\ClionProjects\C\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bubble_sort.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bubble_sort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bubble_sort.dir/build: bubble_sort.exe
.PHONY : CMakeFiles/bubble_sort.dir/build

CMakeFiles/bubble_sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\bubble_sort.dir\cmake_clean.cmake
.PHONY : CMakeFiles/bubble_sort.dir/clean

CMakeFiles/bubble_sort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\work\ClionProjects\C D:\work\ClionProjects\C D:\work\ClionProjects\C\build D:\work\ClionProjects\C\build D:\work\ClionProjects\C\build\CMakeFiles\bubble_sort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bubble_sort.dir/depend

