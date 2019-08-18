cmake_minimum_required(VERSION 3.14)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../../)

set(CMAKE_CXX_STANDARD 17)

project(unsafeconversionchar)

add_executable(${PROJECT_NAME} main_char.cpp)

message(${PPP_INCLUDE_DIRS})

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
        )

project(unsafeconversion)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
        )
