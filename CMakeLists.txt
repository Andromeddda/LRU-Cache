cmake_minimum_required(VERSION 3.22.1 FATAL_ERROR)

project(LRU LANGUAGES CXX)

set(CMAKE_CXX_STANDART 23)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_CXX_FLAGS "-Wall")

add_executable(main)
target_sources(main PRIVATE main.cpp)

target_include_directories(main PRIVATE queue)
