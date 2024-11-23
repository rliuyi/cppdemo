cmake_minimum_required(VERSION 3.14)
project(MyCppProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

message(STATUS "C++ Compiler ID: ${CMAKE_CXX_COMPILER_ID}")

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    message(STATUS "add coverage")
    add_compile_options(--coverage)
    add_link_options(--coverage)
endif()


# 添加子目录
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(libs/googletest)

# 设置 Google Test 和 Google Mock 的链接
include_directories(libs/googletest/googlemock/include)
include_directories(libs/googletest/googletest/include)
