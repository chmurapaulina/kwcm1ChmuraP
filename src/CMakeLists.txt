project(PirwszyProgram)

cmake_minimum_required(VERSION 2.8)
include_directories ("${PROJECT_SOURCE_DIR}/Trygonometria")
add_subdirectory (Trygonometria)
add_executable(Laborka main.cpp)
target_link_libraries (Laborka Trygonometria)