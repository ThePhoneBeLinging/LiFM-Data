cmake_minimum_required(VERSION 3.31)
project(LiFM_Data)

set(CMAKE_CXX_STANDARD 20)

add_library(LiFM_Data STATIC
        LiFMDataHandler.cpp)


target_include_directories(LiFM_Data PUBLIC include)