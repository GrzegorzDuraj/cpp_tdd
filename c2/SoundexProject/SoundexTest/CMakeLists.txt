

message("list of main directories ") 
message("${CMAKE_SOURCE_DIR} ${CMAKE_MODULE_PATH}")
message("${GTEST_INCLUDE_DIR}" ) 
message("${gtest_SOURCE_DIR}/include")
message("${gmock_SOURCE_DIR}/include")
message("${build_dir}/googletest/include")
message("${GTEST_INCLUDE_DIR}" ) 

enable_testing()
find_package(GTest REQUIRED)

include_directories ("${CMAKE_SOURCE_DIR}/SoundexLib/headers")
message("${SoundexLibHeaders}")

add_executable (SoundexTest mainTest.cpp SoundexTest.cpp)  

target_link_libraries(SoundexTest GTest::GTest GTest::Main gmock_main SoundexLib)

add_test(AllTestsInFoo SoundexTest)

message("\n\nONCE AGAIN list of main directories ") 
message("list of main directories ") 
message("${CMAKE_SOURCE_DIR} ${CMAKE_MODULE_PATH}")
message("${GTEST_INCLUDE_DIR}" ) 
message("${gtest_SOURCE_DIR}/include")
message("${gmock_SOURCE_DIR}/include")
message("${build_dir}/googletest/include")
message("${GTEST_INCLUDE_DIR}" ) 

