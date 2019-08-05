cmake_minimum_required(VERSION 3.14)
project(exercise01)

set(CMAKE_CXX_STANDARD 17)

add_executable(exercise01 main.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        "../../../include"
        )