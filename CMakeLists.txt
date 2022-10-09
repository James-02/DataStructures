cmake_minimum_required(VERSION 3.10)

project(DataStructures VERSION 1.0)

# C++ header and source files
set(INCLUDE_DIR include/)
set(SRC_DIR src/)

# C-interface header and source files
set(C_INCLUDE_DIR include/c-interface/)
set(C_SRC_DIR src/c-interface/)

# Compile main & mainc, C++ and C files respectively
add_executable(main main.cpp ${SRC_DIR}linkedlist.cpp)
add_executable(mainc main.c ${C_SRC_DIR}linkedlist.cc ${SRC_DIR}linkedlist.cpp)

# Link the header directories
target_include_directories(main PUBLIC ${INCLUDE_DIR})
target_include_directories(mainc PUBLIC ${C_INCLUDE_DIR} ${INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)