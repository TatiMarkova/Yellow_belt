cmake_minimum_required(VERSION 3.16.1 FATAL_ERROR)

project(Taks_3_2 VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "-std=c++1z -Wall -pedantic")

add_executable(Taks_3_2
            src/main.cpp
            src/phone_number.h
            src/phone_number.cpp)
