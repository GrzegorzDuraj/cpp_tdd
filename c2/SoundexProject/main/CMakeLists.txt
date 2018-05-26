
message("Main CMakeLists.txt")
set(CMAKE_VERBOSE_MAKEFILE ON)
set (SoundexLibHeaders "${CMAKE_SOURCE_DIR}/SoundexLib/headers")
message(${SoundexLibHeaders})
include_directories(${SoundexLibHeaders})


add_executable(mainProject src/main.cpp)

target_link_libraries(mainProject SoundexLib)
