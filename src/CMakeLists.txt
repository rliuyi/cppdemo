add_library(utils utils.cpp)

add_executable(MyApp main.cpp)

# 链接 utils 库
target_link_libraries(MyApp utils)
