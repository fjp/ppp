cmake_minimum_required(VERSION 3.14)
project(drill)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../)

set(CMAKE_CXX_STANDARD 17)

project(letterformoriginal)

add_executable(letterformoriginal letterformoriginal.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
        )

project(letterform01)

add_executable(letterform01 letterform01.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )

project(letterform02)

add_executable(letterform02 letterform02.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )

project(letterform03)

add_executable(letterform03 letterform03.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )


project(letterform04)

add_executable(letterform04 letterform04.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )

project(letterform05)

add_executable(letterform05 letterform05.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )

project(letterform06)

add_executable(letterform06 letterform06.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )

project(letterform07)

add_executable(letterform07 letterform07.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )

