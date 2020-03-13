cmake_minimum_required(VERSION 3.16.1 FATAL_ERROR)

project(Taks_3_3 VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "-std=c++1z -Wall -pedantic")

add_executable(Taks_3_3
            src/main.cpp
            src/Rectangle.h
            src/Rectangle.cpp)
