cmake_minimum_required (VERSION 3.0.0)

project (fractal)

set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_definitions (-DFRACTAL_EXPORTS)

find_package (Boost REQUIRED)

include_directories (${CMAKE_SOURCE_DIR}/src)
include_directories (${Boost_INCLUDE_DIRS})
link_directories (${Boost_LIBRARY_DIRS})

file (GLOB_RECURSE FRACTAL_SRC "*.cpp")

add_library (${PROJECT_NAME} SHARED ${FRACTAL_SRC})

