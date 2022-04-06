cmake_minimum_required(VERSION 3.21)
project(ex1oopcolman)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex1oopcolman
        Grid.cpp
        Grid.h
        MainTrain.cpp
        Point.cpp
        Point.h
        Rectangle.cpp
        Rectangle.h)
