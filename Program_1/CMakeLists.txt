# version of the CMake program
cmake_minimum_required(VERSION 3.10)

# set C++ standard to 14 
set(CMAKE_CXX_STANDARD 14)

# set the project include directory for Interface
include_directories("../Interface")

# set the project src files
set(SRC main.cpp
        Program_1.h
        Program_1.cpp)

# set the project name
project(CollatzSequenceProgram1)

# add the executable
add_executable(${PROJECT_NAME} ${SRC})

# Enable testing support
enable_testing()

# Add tests
add_test(Test1 ${PROJECT_NAME} "989345275647")
add_test(Test2 ${PROJECT_NAME} "7")
add_test(Test3 ${PROJECT_NAME} "8888888888")
add_test(Test4 ${PROJECT_NAME} "TestString")
add_test(Test5 ${PROJECT_NAME} "8888888888 T")

# Set expectations
set_tests_properties(Test1 PROPERTIES PASS_REGULAR_EXPRESSION "Result: 1")
set_tests_properties(Test2 PROPERTIES PASS_REGULAR_EXPRESSION "Result: 1")
set_tests_properties(Test3 PROPERTIES PASS_REGULAR_EXPRESSION "Result: 1")
set_tests_properties(Test4 PROPERTIES PASS_REGULAR_EXPRESSION "Invalid number: TestString")
set_tests_properties(Test5 PROPERTIES PASS_REGULAR_EXPRESSION "Trailing characters after number: 8888888888 T")
