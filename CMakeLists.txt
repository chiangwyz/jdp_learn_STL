cmake_minimum_required(VERSION 3.22)
project(jdp_learn_STL)

set(CMAKE_CXX_STANDARD 17)

add_executable(jdp_learn_STL main.cpp iterator/iterator.cpp iterator/iterator.h map_set/test_map.h map_set/test_map.cpp)
