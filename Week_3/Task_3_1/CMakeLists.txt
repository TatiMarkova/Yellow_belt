cmake_minimum_required(VERSION 3.16.1 FATAL_ERROR)

project(Taks_3_1 VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "-std=c++1z -Wall -pedantic")

add_executable(Taks_3_1
            src/main.cpp
            src/sum_reverse_sort.cpp
            src/sum_reverse_sort.h)
