cmake_minimum_required(VERSION 3.11)

find_package(GTest REQUIRED)

add_executable (foo main.cpp) 

target_link_libraries(foo GTest::GTest GTest::Main)


