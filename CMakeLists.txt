cmake_minimum_required(VERSION 3.10)
project(GTestDemo)

enable_testing()

add_subdirectory(googletest)
include_directories(googletest/googletest/include)

add_executable(runTests test/test_add.cpp main.cpp)
target_link_libraries(runTests gtest gtest_main)

add_test(NAME MyTest COMMAND runTests)
