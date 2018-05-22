

message("list of main directories ") 
message("${CMAKE_SOURCE_DIR} ${CMAKE_MODULE_PATH}")
message("${GTEST_INCLUDE_DIR}" ) 


message("${build_dir}/googletest/include") 

enable_testing()
find_package(GTest REQUIRED)

add_executable (SoundexTest mainTest.cpp SoundexTest.cpp)  

target_link_libraries(SoundexTest GTest::GTest GTest::Main)

add_test(AllTestsInFoo SoundexTest)


message("ONCE AGAIN list of main directories ") 
message("${CMAKE_SOURCE_DIR} ${CMAKE_MODULE_PATH}")
message("${GTEST_INCLUDE_DIR}" ) 

