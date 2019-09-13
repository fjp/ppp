cmake_minimum_required(VERSION 3.14)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../../)

# Simple version of the program
project(exercise13simple)

set(CMAKE_CXX_STANDARD 17)

add_executable(exercise13simple main_simple.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
)

# Vector version of the program
project(exercise13)

set(CMAKE_CXX_STANDARD 17)

add_executable(exercise13 main.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
)
