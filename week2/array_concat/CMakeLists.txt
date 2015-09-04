cmake_minimum_required(VERSION 3.3)
project(array_concat)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(array_concat ${SOURCE_FILES})