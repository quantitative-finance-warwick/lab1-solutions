# expose project root directory to source code so it can find the files
add_definitions(-DPROJECT_ROOT_DIR="${CMAKE_SOURCE_DIR}")

# The executable which generates test output
set(SRC_FILES_OUTPUT_GEN ${CMAKE_SOURCE_DIR}/src/exercises.c test_fxn.c)
add_executable(gen_test_output ${SRC_FILES_OUTPUT_GEN})
target_include_directories(gen_test_output PUBLIC ${CMAKE_SOURCE_DIR}/src)

# the test to compare test output to expected output
set(SRC_FILES check_output.cpp compare_files.cpp capture_output.cpp)
add_executable(check_output ${SRC_FILES})
target_link_libraries(check_output)
target_include_directories(check_output PUBLIC ${CMAKE_SOURCE_DIR}/extern/catch2)
add_test(NAME check_output COMMAND check_output)