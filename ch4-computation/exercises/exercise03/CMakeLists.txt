cmake_minimum_required(VERSION 3.14)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../../)

# Original mean and median program of chapter 4
project(exercise02)

set(CMAKE_CXX_STANDARD 17)

add_executable(exercise02 main.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
        )

# Fixed median program
project(exercise02solution)

set(CMAKE_CXX_STANDARD 17)

add_executable(exercise02solution main_solution.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
        )
