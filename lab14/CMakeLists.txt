cmake_minimum_required(VERSION 3.5)
project(lab14)

set(CMAKE_CXX_STANDARD 11)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp")
add_executable(prog ${SOURCES})
