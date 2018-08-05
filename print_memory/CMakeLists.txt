cmake_minimum_required(VERSION 3.9)
project(print_memory C)

set(CMAKE_C_STANDARD 90)

add_executable(print_memory main.c print_memory.c)