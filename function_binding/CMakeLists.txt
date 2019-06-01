# dummy cmakelists to make intellisense work in CLion
cmake_minimum_required(VERSION 3.12)
project(dummy)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES src/main.cpp src/funcs.cpp)
include_directories(node_modules/node-addon-api node_modules/node-addon-api/src)

add_executable(dummy ${SOURCE_FILES})