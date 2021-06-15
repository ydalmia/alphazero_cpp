# Author: Yash Dalmia
# Date: June 14, 2021

add_subdirectory(utils)

# PEXT seems to be special Intel hardware thing? 
# Disable since laptop is Apple M1 (Arm)
add_compile_definitions(NO_PEXT True) 

add_library(chess bitboard.cc board.cc position.cc)

target_link_libraries(chess PUBLIC utils)

target_include_directories(chess PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/utils"
                          )