cmake_minimum_required(VERSION 3.3)
project(calculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp calculator.cpp calculator.h operators/add.cpp operators/add.h operators/substract.cpp operators/substract.h operators/divide.cpp operators/divide.h operators/multiply.cpp operators/multiply.h operators/abstract_operator.cpp operators/abstract_operator.h)
add_executable(calculator ${SOURCE_FILES})