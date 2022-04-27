project(cquptnc)

# 设置bin文件生成路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin) 

# 包含源文件和头文件
file(GLOB_RECURSE SRC_LIST ${PROJECT_SOURCE_DIR}/src/*.c)
include_directories(inc)

add_executable(cquptnc ${SRC_LIST})
