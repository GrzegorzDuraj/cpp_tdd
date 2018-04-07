cmake_minimum_required(VERSION 3.11)

project(SoundexTest)

add_executable(SoundexTest SoundexTest.cpp)


#add_subdirectory(googletest)

#include_directories(googlemock/include googletest/include)

include_directories($ENV{GMOCK_DIR}/include $ENV{GMOCK_DIR}/gtest/include)
include_directories($ENV{GTEST_DIR}/include $ENV{GTEST_DIR}/gtest/include)


#link_directories($ENV{GMOCK_DIR}/mybuild $ENV{GMOCK_DIR}/gtest/mybuild)
#link_directories($ENV{GTEST_DIR}/mybuild $ENV{GMTEST_DIR}/gtest/mybuild)
#link_directories($ENV{GTEST_DIR}/mybuild $ENV{GMTEST_DIR}/gtest/mybuild)
#pwd c:\STM32_Toolchain\Programy_cube\googletest
#cmake -H. -Bmybuild -G"Ninja"
#cmake --build mybuild

link_directories ($ENV{GOOGLE_TEST_DIR}/mybuild/googlemock/ $ENV{GOOGLE_TEST_DIR}/mybuild/googlemock/gtest/)


#add_definitions(-std=c++0x)
add_definitions(-std=gnu++0x)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(sources main.cpp SoundexTest.cpp)
target_link_libraries(SoundexTest gmock) 

#add_executable(tester ${sources})

#target_link_libraries(tester pthread)
#target_link_libraries(tester pthreadGC2-w64)
#target_link_libraries(tester gmock)
#target_link_libraries(tester gtest)



