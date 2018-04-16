#file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(SoundexTestfoo main.cpp SoundexTest.cpp )#${SRCS})

message("list of main directories ") 
message("${mainS_SOURCE_DIR}")
message("${CMAKE_SOURCE_DIR} ${CMAKE_MODULE_PATH}")

target_include_directories(SoundexTestfoo PUBLIC ${CMAKE_SOURCE_DIR}/Soundex)


TARGET_LINK_LIBRARIES(SoundexTestfoo
    libgtest
    libgmock
)


add_test(NAME SoundexTestfoo
         COMMAND testfoo)
