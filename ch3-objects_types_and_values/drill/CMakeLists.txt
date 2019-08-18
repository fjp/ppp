cmake_minimum_required(VERSION 3.14)
project(drill)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../)

set(CMAKE_CXX_STANDARD 17)

project(drill01)

add_executable(drill01 main01.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
        )

project(drill02)

add_executable(drill02 main02.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )
