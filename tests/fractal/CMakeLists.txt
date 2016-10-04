# FRACTAL LIBRARY TEST
cmake_minimum_required (VERSION 3.0.0)

project (fractaltest)

set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

find_package (Boost 1.60.0 REQUIRED COMPONENTS unit_test_framework)

file (GLOB_RECURSE FRACTALTEST_HEADERS *.h)
include_directories ("${CMAKE_SOURCE_DIR}/src" "${Boost_INCLUDE_DIRS}")
link_directories (${CMAKE_LIBRARY_PATH} ${Boost_LIBRARY_DIRS} ${CMAKE_BINARY_DIR}/bin)
file (GLOB_RECURSE FRACTALTEST_SOURCES *.cpp)

message (STATUS "Boost libraries are ${Boost_LIBRARIES}")
message (STATUS "Boost library dirs are ${Boost_LIBRARY_DIRS}")
add_executable (${PROJECT_NAME} ${FRACTALTEST_SOURCES})
target_link_libraries (${PROJECT_NAME} fractal)
# target_link_libraries (${PROJECT_NAME} ${Boost_LIBRARIES})
