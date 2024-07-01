# 获取当前目录下的所有 .cpp 文件
file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# 为每个 .cpp 文件创建一个独立的可执行文件
foreach(file ${files})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name}_map ${file})
endforeach()