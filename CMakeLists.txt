cmake_minimum_required(VERSION 3.25.0)

project(Software_Lab3)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

set(SOURCES src/config_tty.cpp src/main.cpp src/participant.cpp src/funciones_grx.cpp)

add_executable(Software_Lab3.bin ${SOURCES})