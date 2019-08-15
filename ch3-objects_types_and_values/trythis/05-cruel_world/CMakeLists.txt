cmake_minimum_required(VERSION 3.14)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../../)

set(CMAKE_CXX_STANDARD 17)

# Cruel world fix
project(cruelworld)

add_executable(${PROJECT_NAME} main.cpp)

message(${PPP_INCLUDE_DIRS})

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
        )

# Cruel world fix
project(cruelworldfix)

add_executable(${PROJECT_NAME} main_fix.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )

# Cruel world fix 2
project(cruelworldfix2)

add_executable(${PROJECT_NAME} main_fix2.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )