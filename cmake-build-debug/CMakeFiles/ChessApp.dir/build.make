# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/biostunt/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.4129.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/biostunt/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.4129.51/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/biostunt/CLionProjects/ChessApp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/biostunt/CLionProjects/ChessApp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ChessApp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ChessApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ChessApp.dir/flags.make

CMakeFiles/ChessApp.dir/main.cpp.o: CMakeFiles/ChessApp.dir/flags.make
CMakeFiles/ChessApp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/biostunt/CLionProjects/ChessApp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ChessApp.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChessApp.dir/main.cpp.o -c /home/biostunt/CLionProjects/ChessApp/main.cpp

CMakeFiles/ChessApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChessApp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/biostunt/CLionProjects/ChessApp/main.cpp > CMakeFiles/ChessApp.dir/main.cpp.i

CMakeFiles/ChessApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChessApp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/biostunt/CLionProjects/ChessApp/main.cpp -o CMakeFiles/ChessApp.dir/main.cpp.s

CMakeFiles/ChessApp.dir/ChessField.cpp.o: CMakeFiles/ChessApp.dir/flags.make
CMakeFiles/ChessApp.dir/ChessField.cpp.o: ../ChessField.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/biostunt/CLionProjects/ChessApp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ChessApp.dir/ChessField.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChessApp.dir/ChessField.cpp.o -c /home/biostunt/CLionProjects/ChessApp/ChessField.cpp

CMakeFiles/ChessApp.dir/ChessField.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChessApp.dir/ChessField.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/biostunt/CLionProjects/ChessApp/ChessField.cpp > CMakeFiles/ChessApp.dir/ChessField.cpp.i

CMakeFiles/ChessApp.dir/ChessField.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChessApp.dir/ChessField.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/biostunt/CLionProjects/ChessApp/ChessField.cpp -o CMakeFiles/ChessApp.dir/ChessField.cpp.s

CMakeFiles/ChessApp.dir/Figure.cpp.o: CMakeFiles/ChessApp.dir/flags.make
CMakeFiles/ChessApp.dir/Figure.cpp.o: ../Figure.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/biostunt/CLionProjects/ChessApp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ChessApp.dir/Figure.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChessApp.dir/Figure.cpp.o -c /home/biostunt/CLionProjects/ChessApp/Figure.cpp

CMakeFiles/ChessApp.dir/Figure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChessApp.dir/Figure.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/biostunt/CLionProjects/ChessApp/Figure.cpp > CMakeFiles/ChessApp.dir/Figure.cpp.i

CMakeFiles/ChessApp.dir/Figure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChessApp.dir/Figure.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/biostunt/CLionProjects/ChessApp/Figure.cpp -o CMakeFiles/ChessApp.dir/Figure.cpp.s

CMakeFiles/ChessApp.dir/FieldContainer.cpp.o: CMakeFiles/ChessApp.dir/flags.make
CMakeFiles/ChessApp.dir/FieldContainer.cpp.o: ../FieldContainer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/biostunt/CLionProjects/ChessApp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ChessApp.dir/FieldContainer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChessApp.dir/FieldContainer.cpp.o -c /home/biostunt/CLionProjects/ChessApp/FieldContainer.cpp

CMakeFiles/ChessApp.dir/FieldContainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChessApp.dir/FieldContainer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/biostunt/CLionProjects/ChessApp/FieldContainer.cpp > CMakeFiles/ChessApp.dir/FieldContainer.cpp.i

CMakeFiles/ChessApp.dir/FieldContainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChessApp.dir/FieldContainer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/biostunt/CLionProjects/ChessApp/FieldContainer.cpp -o CMakeFiles/ChessApp.dir/FieldContainer.cpp.s

# Object files for target ChessApp
ChessApp_OBJECTS = \
"CMakeFiles/ChessApp.dir/main.cpp.o" \
"CMakeFiles/ChessApp.dir/ChessField.cpp.o" \
"CMakeFiles/ChessApp.dir/Figure.cpp.o" \
"CMakeFiles/ChessApp.dir/FieldContainer.cpp.o"

# External object files for target ChessApp
ChessApp_EXTERNAL_OBJECTS =

ChessApp: CMakeFiles/ChessApp.dir/main.cpp.o
ChessApp: CMakeFiles/ChessApp.dir/ChessField.cpp.o
ChessApp: CMakeFiles/ChessApp.dir/Figure.cpp.o
ChessApp: CMakeFiles/ChessApp.dir/FieldContainer.cpp.o
ChessApp: CMakeFiles/ChessApp.dir/build.make
ChessApp: CMakeFiles/ChessApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/biostunt/CLionProjects/ChessApp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ChessApp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ChessApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ChessApp.dir/build: ChessApp

.PHONY : CMakeFiles/ChessApp.dir/build

CMakeFiles/ChessApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ChessApp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ChessApp.dir/clean

CMakeFiles/ChessApp.dir/depend:
	cd /home/biostunt/CLionProjects/ChessApp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/biostunt/CLionProjects/ChessApp /home/biostunt/CLionProjects/ChessApp /home/biostunt/CLionProjects/ChessApp/cmake-build-debug /home/biostunt/CLionProjects/ChessApp/cmake-build-debug /home/biostunt/CLionProjects/ChessApp/cmake-build-debug/CMakeFiles/ChessApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ChessApp.dir/depend

