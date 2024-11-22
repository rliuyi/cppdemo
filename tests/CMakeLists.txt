add_executable(TestUtils test_utils.cpp)

# 指定头文件目录
target_include_directories(TestUtils PRIVATE ${CMAKE_SOURCE_DIR}/src)

# 链接 utils 和 Google Test
target_link_libraries(TestUtils utils gmock gtest gtest_main)

# 启用测试
enable_testing()
add_test(NAME TestUtils COMMAND TestUtils)
