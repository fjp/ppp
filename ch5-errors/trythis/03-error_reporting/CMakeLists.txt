cmake_minimum_required(VERSION 3.14)

find_package(PPP REQUIRED PATHS ${CMAKE_CURRENT_SOURCE_DIR}/../../../)

set(CMAKE_CXX_STANDARD 17)

# Version from the book with unhandeled errors
project(ErrorReporting)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
            ${PPP_INCLUDE_DIRS}
)

# Version with error checks
project(ErrorReportingCheck)

add_executable(${PROJECT_NAME} main_errorcheck.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PPP_INCLUDE_DIRS}
        )
