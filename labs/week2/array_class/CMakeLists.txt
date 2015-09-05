cmake_minimum_required(VERSION 3.3)
project(array_class)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp array.cpp array.h)
add_executable(array_class ${SOURCE_FILES})