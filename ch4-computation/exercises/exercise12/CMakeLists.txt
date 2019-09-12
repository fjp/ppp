cmake_minimum_required(VERSION 3.14)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../../)

project(exercise12)

set(CMAKE_CXX_STANDARD 17)

add_executable(exercise12 main.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
)
