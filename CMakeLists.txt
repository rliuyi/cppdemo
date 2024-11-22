cmake_minimum_required(VERSION 3.14)
project(MyCppProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加子目录
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(libs/googletest)

# 设置 Google Test 和 Google Mock 的链接
include_directories(libs/googletest/googlemock/include)
include_directories(libs/googletest/googletest/include)
