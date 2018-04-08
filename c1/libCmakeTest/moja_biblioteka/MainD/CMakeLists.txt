cmake_minimum_required(VERSION 3.11)

message("	EXECUTABLE	")

project(MainD) 

message("add_executable(MainD main.cpp)")
include_directories("${appendedProj_SOURCE_DIR}")
add_executable(MainD main.cpp)
target_link_libraries(MainD LINK_PUBLIC AppendedL)



















# #tak dziala bez biblioteki 
# #include_directories("${PROJECT_SOURCE_DIR}/libAppend")
# #set(APPENDED_SOURCES libAppend/appended.cpp)
# #add_executable(output main.cpp ${APPENDED_SOURCES})


# # #bibliteka 
# # add_subdirectory(libAppend)

# include_directories("${PROJECT_SOURCE_DIR}/libAppend")
# find_library(MOJA_BIB 
				# NAMES mojaBibliteka)
# find_library(MOJA_BIB2 
				# NAMES app_library)
				
				
# if (NOT MOJA_BIB)
	# message ("  MOJA_BIB jest pusta" ) 
# endif()
# if (NOT MOJA_BIB2)
	# message(" moja_bib2 jest pusta")
# endif()

# if (MOJA_BIB_FOUND)
	# message ("  MOJA_BIB jest pusta NOT MOJA_BIB_FOUND" ) 
# endif()

# if (MOJA_BIB2_FOUND)
	# message(" moja_bib2 jest pusta NOT MOJA_BIB2_FOUND")
# endif()

# add_executable(output main.cpp) 


# include_directories(${MOJA_BIB})



# target_link_libraries(output PUBLIC ${MOJA_BIB}) #jesli nie znajdzie takiej biblioteki to wywali sie juz teraz a nie podczas kompilacji


