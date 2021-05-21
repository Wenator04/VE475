cmake_minimum_required(VERSION 3.5)
project(hw1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR})

find_package(GMP REQUIRED)

add_executable(hw1 main.cpp)

target_link_libraries(hw1 gmp gmpxx)