# CPPDEMO

### 工程说明

*   该工程使用 MinGW 作为 C++ Compiler, CMake 作为构建工具。
*   `tests` 目录下的 `test_utils.cpp` 中使用了 `gmock` 与 `gtest`。
*   `tests` 目录下的 `CMakeLists.txt` 中的 `target_include_directories` 指令将 `src` 目录下的所有头文件包含进来，以供测试用例代码使用。
*   `.vscode\tasks.json` 中应修改为自己环境中的 `MinGW` 的安装路径。

### 先决条件

#### 安装 C++ 编译器

*   Follow the
[Using GCC with MinGW](https://code.visualstudio.com/docs/cpp/config-mingw).

#### 安装 CMake

*   如果安装了 Windows 包管理器 
[https://chocolatey.org/](https://chocolatey.org/).
则运行命令 `choco install cmake --installargs 'ADD_CMAKE_TO_PATH=System`, 该命令在安装完 cmake 后，会直接将其加入环境变量。

#### VSCode 上安装的插件

*   C/C++
*   CMake
*   CMake Tools

### 编译构建

*   在 VSCode 中右键顶层 CMakeLists.txt, run `Build All Projects`.

### 运行单元测试用例

*   `cd build\tests`
*   Run `ctest`


