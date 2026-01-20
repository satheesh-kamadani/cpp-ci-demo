cmake_minimum_required(VERSION 3.10)
project(cpp_ci_demo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

# Library
add_library(calculator src/calculator.cpp)
target_include_directories(calculator
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

# Test executable
add_executable(test_calculator tests/test_calculator.cpp)
target_link_libraries(test_calculator calculator gtest_main)

include(GoogleTest)
gtest_discover_tests(test_calculator)
