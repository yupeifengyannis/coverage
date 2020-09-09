file(GLOB_RECURSE test_src ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_executable(test.bin ${test_src})
target_link_libraries(test.bin ${link_libs})
