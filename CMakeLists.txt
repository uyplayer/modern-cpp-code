cmake_minimum_required(VERSION 3.10)
project(modern-cpp-code)
set(CMAKE_CXX_STANDARD 20)

message(STATUS "**** modern-cpp-code ****")


add_definitions(-DPRO_ROOT_DIR="${CMAKE_SOURCE_DIR}")

if(DEFINED ENV{VCPKG_ROOT_DIR})
    set(VCPKG_ROOT_DIR $ENV{VCPKG_ROOT_DIR})
else()
    message(FATAL_ERROR "Environment variable 'VCPKG_ROOT_DIR' is not set.")
endif()

message(STATUS "VCPKG_ROOT_DIR: ${VCPKG_ROOT_DIR}")
set(CMAKE_TOOLCHAIN_FILE "${VCPKG_ROOT_DIR}/scripts/buildsystems/vcpkg.cmake")

add_subdirectory(01-intro)
add_subdirectory(02-usability)
add_subdirectory(03-runtime)
add_subdirectory(04-containers)
add_subdirectory(05-pointers)