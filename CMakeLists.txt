project(coverage)
cmake_minimum_required(VERSION 3.18) 

option(TEST_COVERAGE "use lcov code coverage testing tool" ON)
set(CMAKE_CXX_STANDARD 11)

if(TEST_COVERAGE)
    message(STATUS using code coveraging testing)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
endif()

include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB_RECURSE srcs ${CMAKE_SOURCE_DIR}/src/*.cpp)

set(link_libs "")
list(APPEND link_libs gtest glog pthread)

add_library(coverage ${srcs})
target_link_libraries(coverage ${link_libs})
list(APPEND link_libs coverage)

add_subdirectory(${CMAKE_SOURCE_DIR}/test)


