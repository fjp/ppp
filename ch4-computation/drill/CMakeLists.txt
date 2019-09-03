cmake_minimum_required(VERSION 3.14)
project(drill)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../)

set(CMAKE_CXX_STANDARD 17)

project(loop01)

add_executable(loop01 loop01.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
        )

project(loop02)

add_executable(loop02 loop02.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )
        
        
project(loop03)

add_executable(loop03 loop03.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )

project(loop04)

add_executable(loop04 loop04.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )


project(loop05)

add_executable(loop05 loop05.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )


project(loop06)

add_executable(loop06 loop06.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )


project(loop07)

add_executable(loop07 loop07.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )

project(loop08)

add_executable(loop08 loop08.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )

project(loop09)

add_executable(loop09 loop09.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )

project(loop10)

add_executable(loop10 loop10.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )

project(loop11)

add_executable(loop11 loop11.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )

