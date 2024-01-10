cmake_minimum_required(VERSION 3.16..3.24)
project(no_strings_attached VERSION 0.0.1
                            DESCRIPTION "CodeForYourself - Homework 4"
                            LANGUAGES CXX)

set (CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -fPIC")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# My Include Directory
include_directories(${PROJECT_SOURCE_DIR}/no_strings_attached)
# My Library Directory
add_subdirectory(${PROJECT_SOURCE_DIR}/no_strings_attached)
# My Examples Directory
add_subdirectory(${PROJECT_SOURCE_DIR}/examples)

# Enable testing for this project
include(CTest)
# Add Test Folder
add_subdirectory(${PROJECT_SOURCE_DIR}/external)
