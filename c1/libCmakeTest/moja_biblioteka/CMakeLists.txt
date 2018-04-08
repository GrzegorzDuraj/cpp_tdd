cmake_minimum_required(VERSION 3.11)

project(mainApp) 

message("	Source (general): ${PROJECT_SOURCE_DIR}")
message("${PROJECT_SOURCE_DIR}/libAppend")


message("add_subdirectory(libAppend)")
add_subdirectory(libAppend)



message("add_subdirectory(MainD)")
add_subdirectory(MainD)