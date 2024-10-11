cmake_minimum_required(VERSION 3.30)

project(Interop LANGUAGES CXX Swift)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules")

set(CMAKE_CXX_STANDARD 23)

include(InitializeSwift)
include(AddSwift)

add_subdirectory(src)