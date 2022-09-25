cmake_minimum_required(VERSION 3.23)
project(untitled)

find_package (OpenCV 4.6.0 REQUIRED)
set(CMAKE_CXX_STANDARD 14)
include_directories ({OpenCV_INCLUDE_DIRS})

add_executable(untitled main.cpp)

target_link_libraries(untitled ${OpenCV_LIBS})