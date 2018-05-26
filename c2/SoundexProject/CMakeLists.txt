cmake_minimum_required(VERSION 3.11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wextra")

project(SoundexProject)

enable_testing()

add_subdirectory(SoundexLib)
add_subdirectory(main)
add_subdirectory(SoundexTest)
