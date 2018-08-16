cmake_minimum_required(VERSION 3.12)
project(PlayingWithGtest)

set(CMAKE_CXX_STANDARD 11)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link PlayingWithGtest with what we want to test and the GTest and pthread library
add_executable(PlayingWithGtest main.cpp)
target_link_libraries(PlayingWithGtest ${GTEST_LIBRARIES} pthread)
