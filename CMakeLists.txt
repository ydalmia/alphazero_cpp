# Author: Yash Dalmia
# Date: June 14, 2021

cmake_minimum_required(VERSION 3.0.0)

project(trial VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(chess)

add_executable(trial main.cpp)

target_link_libraries(trial PUBLIC chess)

target_include_directories(trial PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/chess"
                          )