cmake_minimum_required(VERSION 3.22.1)
project(nav
        VERSION 3.22.1
        DESCRIPTION "navigating an object in a designated path, visible or invisible autonomously"
        LANGUAGES CXX
        )

set(BUILD_CONFIG_DIR "${CMAKE_CURRENT_BINARY_DIR}/config")
set(BUILD_ENV_PATH "${BUILD_CONFIG_DIR}/env.hpp")
set(ENV_PATH "${CMAKE_CURRENT_SOURCE_DIR}/config/env.hpp")

add_executable(${PROJECT_NAME} src/main.cpp)



set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

configure_file (
     "${PROJECT_SOURCE_DIR}/include/config/env.hpp.in"
     "${PROJECT_BINARY_DIR}/config/env.hpp"
)

include_directories(${PROJECT_BINARY_DIR}/config)

 