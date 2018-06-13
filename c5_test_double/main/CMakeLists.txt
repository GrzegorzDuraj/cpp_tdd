


include_directories (${HttpGetHeaders})

add_executable(mainProject main.cpp)

target_link_libraries(mainProject HttpGetDataLibrary) 
