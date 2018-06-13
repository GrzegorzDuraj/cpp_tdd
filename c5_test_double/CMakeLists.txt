cmake_minimum_required(VERSION 3.11) 

project(test_double CXX)

set (HttpGetHeaders "${CMAKE_SOURCE_DIR}/HttpGet")

add_subdirectory(HttpGet)
add_subdirectory(main)

add_subdirectory(HttpGetTest)
