set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add the MathFunctions library
add_subdirectory(utils)

# add the executable
add_library(chess bitboard.cc board.cc position.cc)

target_link_libraries(chess PUBLIC utils)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(chess PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/utils"
                          )