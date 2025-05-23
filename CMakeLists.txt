cmake_minimum_required(VERSION 3.28)
project(projectAlpha)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(projectAlpha
    src/main.cpp
)

add_subdirectory(../../../libraries/SFML sfml)
target_link_libraries(projectAlpha PRIVATE sfml-system sfml-window sfml-graphics)
target_include_directories(projectAlpha PRIVATE include)