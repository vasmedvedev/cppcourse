cmake_minimum_required(VERSION 3.3)
project(calculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp calc.cpp calc.h operators.cpp operators.h)
add_executable(calculator ${SOURCE_FILES})