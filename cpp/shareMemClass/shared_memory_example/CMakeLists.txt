cmake_minimum_required(VERSION 3.5)

project(shared_memory_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(first_app first_app.cpp shared_memory_base.cpp )
add_executable(second_app second_app.cpp shared_memory_base.cpp)
