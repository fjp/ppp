cmake_minimum_required(VERSION 3.14)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../../)

project(exercise06)

set(CMAKE_CXX_STANDARD 17)

add_executable(exercise06 main.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
)

project(exercise06extended)

set(CMAKE_CXX_STANDARD 17)

add_executable(exercise06extended main_extended.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )
