cmake_minimum_required(VERSION 3.3)
project(circle)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp utils.cpp utils.h)
add_executable(circle ${SOURCE_FILES})