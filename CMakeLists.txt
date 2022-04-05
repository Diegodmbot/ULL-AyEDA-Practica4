#cmake_minimum_required(VERSION 3.21)
project(P04DiegoDiazMoron)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCE "src/*.cpp")
file(GLOB INCLUDE "include/*.h")

add_executable(P04DiegoDiazMoron ${SOURCE} ${INCLUDE})
