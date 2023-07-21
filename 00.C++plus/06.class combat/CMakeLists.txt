cmake_minimum_required(VERSION 3.0) 

project(${CMAKE_SOURCE_DIR})

#Add source files
set(MY_CMAKE_SOURCES src/main.cpp src/student.cpp)

#Include Headers
include_directories(${CMAKE_SOURCE_DIR}/include)

#Add the executable
add_executable(my_cmake ${MY_CMAKE_SOURCES})