﻿# CMakeList.txt : 顶级 CMake 项目文件，执行全局配置
# 和此处的包含子项目。
#
cmake_minimum_required (VERSION 3.4)

IF(UNIX)
#    include_directories("./Thirdparty/FFmpeg/linux/include")
#    link_directories("./Thirdparty/FFmpeg/linux/lib")
    include_directories("../deps/ffmpeg/linux/include")
    link_directories("../deps/ffmpeg/linux/lib")
ELSEIF(WIN32)
    include_directories("E:\\BSP\\BSPWindows\\ffmpeg-3.4-win64-dev\\ffmpeg-3.4-win64-dev\\include")
    link_directories("E:\\BSP\\BSPWindows\\ffmpeg-3.4-win64-dev\\ffmpeg-3.4-win64-dev\\lib")
ENDIF()

add_definitions("-Wall -g")

project ("est")

# 包含子项目。
add_subdirectory ("saved")


add_executable(est test.c)

target_link_libraries(
    est
    saved
    
    avformat
    avcodec
    avfilter
    swscale
    swresample
    avutil

    m
    pthread
    x264
    fdk-aac
    z

)
