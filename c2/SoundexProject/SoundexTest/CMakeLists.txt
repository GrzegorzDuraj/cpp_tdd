

message("list of main directories ") 
message("${CMAKE_SOURCE_DIR} ${CMAKE_MODULE_PATH}")
message("${GTEST_INCLUDE_DIR}" ) 
message ( "${gtest_SOURCE_DIR}/include")
message ( "${gmock_SOURCE_DIR}/include")
message("${build_dir}/googletest/include") 

enable_testing()
find_package(GTest REQUIRED)

message ("${gtest_SOURCE_DIR}/include" "${gmock_SOURCE_DIR}/include")
#find_package(GMock REQUIRED)


#target_include_directories (SoundexTest /usr/include/gmock)

add_executable (SoundexTest mainTest.cpp SoundexTest.cpp)  

#target_include_directories(gmock_main SYSTEM BEFORE INTERFACE
#    "${gtest_SOURCE_DIR}/include" "${gmock_SOURCE_DIR}/include")
	


target_link_libraries(SoundexTest GTest::GTest GTest::Main gmock_main)

add_test(AllTestsInFoo SoundexTest)


message("\n\nONCE AGAIN list of main directories ") 
message("list of main directories ") 
message("${CMAKE_SOURCE_DIR} ${CMAKE_MODULE_PATH}")
message("${GTEST_INCLUDE_DIR}" ) 
message("${gtest_SOURCE_DIR}/include")
message("${gmock_SOURCE_DIR}/include")
message("${build_dir}/googletest/include")
message("${GTEST_INCLUDE_DIR}" ) 

