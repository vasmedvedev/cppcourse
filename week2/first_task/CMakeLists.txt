cmake_minimum_required(VERSION 3.3)
project(first_task)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(first_task ${SOURCE_FILES})