cmake_minimum_required(VERSION 3.9)
project(Assignment-2)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(gtest)
add_subdirectory(problem-1)
add_subdirectory(problem-2)
add_subdirectory(problem-3)

add_executable(check check.cpp)
target_link_libraries(check gtest problem-1 problem-2 problem-3)