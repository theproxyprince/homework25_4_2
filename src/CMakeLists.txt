cmake_minimum_required(VERSION 3.24)



add_executable(homework24_5_2 main.cpp cpu.cpp disk.cpp gpu.cpp kbd.cpp)
target_include_directories(homework24_5_2 PUBLIC ${MY_INCLUDE_DIR})