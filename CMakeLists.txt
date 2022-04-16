cmake_minimum_required(VERSION 3.21)
project(C C)

set(CMAKE_C_STANDARD 99)

# 遍历项目根目录下所有的 .c 文件
file (GLOB files *.c */*.c */*/*.c)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()