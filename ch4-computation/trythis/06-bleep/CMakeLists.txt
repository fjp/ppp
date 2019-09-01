cmake_minimum_required(VERSION 3.14)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../../)

set(CMAKE_CXX_STANDARD 17)

# Standard bleep program with one disliked word (Broccoli)
project(Bleep)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
        )

# Extended bleep program version with more disliked words
project(BleepWords)

add_executable(${PROJECT_NAME} main_extended.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )
