cmake_minimum_required(VERSION 3.10)
include_directories("../../includes")
project(beans)
add_executable(beans testBeans.cpp Beans.cpp)