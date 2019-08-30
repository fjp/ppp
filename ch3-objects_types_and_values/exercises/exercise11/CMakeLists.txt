cmake_minimum_required(VERSION 3.14)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../../)

set(CMAKE_CXX_STANDARD 17)

# Basic solution without improvements
project(exercise11)

add_executable(exercise11 main.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
)

# Basic solution without improvements
project(exercise11improved)

add_executable(exercise11improved main_improved.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )
