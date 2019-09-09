cmake_minimum_required(VERSION 3.14)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../../)


# Solution with 8 guesses in one direction
project(exercise04max8)

set(CMAKE_CXX_STANDARD 17)

add_executable(exercise04max8 main.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
)

# Solution with maximum 7 guesses in two directions
project(exercise04max7)

set(CMAKE_CXX_STANDARD 17)

add_executable(exercise04max7 main_flip_flop.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )
