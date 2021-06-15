cmake_minimum_required(VERSION 3.0.0)

project(trial VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add the MathFunctions library
add_subdirectory(chess)

# add the executable
add_executable(trial main.cpp)

target_link_libraries(trial PUBLIC chess)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(trial PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/chess"
                          )