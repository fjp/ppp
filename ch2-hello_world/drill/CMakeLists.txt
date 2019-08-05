cmake_minimum_required(VERSION 3.14)
project(drill)

set(CMAKE_CXX_STANDARD 17)

add_executable(drill main.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            "../../include"
        )