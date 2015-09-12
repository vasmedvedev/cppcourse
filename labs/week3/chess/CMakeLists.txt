cmake_minimum_required(VERSION 3.3)
project(chess)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp piece.cpp piece.h board.cpp board.h pawn.cpp pawn.h knight.cpp knight.h)
add_executable(chess ${SOURCE_FILES})