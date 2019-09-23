cmake_minimum_required(VERSION 3.14)
project(drill)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../)

set(CMAKE_CXX_STANDARD 17)

project(Ch5Drill)

add_executable(${PROJECT_NAME} scaffolding.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
        )
