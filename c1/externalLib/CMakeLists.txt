cmake_minimum_required(VERSION 3.11)

project (externalLibrary)

target_link_libraries(test_target PUBLIC)
target_include_directories(test_target PUBLIC ${externalLibrary_SOURCE_DIR}/../.. )
message (${test})


add_executable(MainD main.cpp)
target_link_libraries(MainD LINK_PUBLIC AppendedL)
