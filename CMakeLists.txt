cmake_minimum_required(VERSION 3.10)
project(my_cpp_project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")

include_directories(include)

# 主程序
add_executable(my_cpp_project src/main.cpp src/mylib.cpp)

# GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# 测试程序
add_executable(test_mylib tests/test_mylib.cpp src/mylib.cpp)
target_link_libraries(test_mylib gtest_main)

include(GoogleTest)
gtest_discover_tests(test_mylib)
