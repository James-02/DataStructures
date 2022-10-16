cmake_minimum_required(VERSION 3.10)

project(DataStructures VERSION 1.0)

<<<<<<< HEAD
set(INCLUDE_DIR include/)
set(SRC_DIR src/)

add_executable(main main.cpp)

=======
set(INCLUDE_DIR lib/include/)
set(SRC_DIR lib/src/)


add_executable(main main.cpp ${SRC_DIR}linkedlist.cpp)

>>>>>>> dcbccb6cd8fa64778ba3807305bfbb377917e53c
target_include_directories(main PUBLIC ${INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)