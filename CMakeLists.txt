cmake_minimum_required(VERSION 3.8.0 FATAL_ERROR)

project(LRU LANGUAGES CXX)

set(CMAKE_CXX_STANDART 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -Waddress -Wpedantic")

add_executable(main)
target_sources(main PRIVATE main.cpp)

add_subdirectory(HashQueue)
target_include_directories(main PRIVATE HashQueue)
target_link_libraries(main PRIVATE HashQueue)
