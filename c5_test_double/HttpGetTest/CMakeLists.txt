

enable_testing()

find_package (GTest REQUIRED)

include_directories (${HttpGetHeaders})
message("${HttpGetHeaders}")

add_executable (HttpGetDataTest mainTest.cpp HttpGetDataTest.cpp )

target_link_libraries(HttpGetDataTest GTest::GTest GTest::Main gmock_main HttpGetDataLibrary)

add_test(AllTestsInFoo HttpGetDataTest)



