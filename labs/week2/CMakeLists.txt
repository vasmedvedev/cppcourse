cmake_minimum_required(VERSION 3.3)
project(week2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp point2D.cpp point2D.h point3D.cpp point3D.h triangle.cpp triangle.h)
add_executable(week2 ${SOURCE_FILES})