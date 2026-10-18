cmake_minimum_required(VERSION 4.3)
project(CrudC C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(CrudC
        Main.c
        Main.h
        produto.c)
