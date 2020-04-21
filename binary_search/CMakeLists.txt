cmake_minimum_required(VERSION 3.10)
project(binary_search)

set(CMAKE_CXX_STANDARD 11)

include_directories(src)
aux_source_directory(src SRC_FILES)
aux_source_directory(. CWD_FILES)

add_library(binary_search SHARED ${SRC_FILES})
add_executable(main ${CWD_FILES} ${SRC_FILES})

add_subdirectory(test)

