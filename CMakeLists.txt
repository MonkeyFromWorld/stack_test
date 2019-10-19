cmake_minimum_required(VERSION 3.15)
project(stack_test C)

set(CMAKE_C_STANDARD 11)

add_library(stack_test.h stack_test.c)
add_executable(stack_test main.c)