cmake_minimum_required(VERSION 3.14)
project(drill)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../)

set(CMAKE_CXX_STANDARD 17)

project(loop01)

add_executable(loop01 loop01.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
        )

project(loop02)

add_executable(loop02 loop02.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )
