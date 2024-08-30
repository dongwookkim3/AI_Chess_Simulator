cmake_minimum_required(VERSION 3.29)

project(
        AI_Chess_Simulator
        VERSION 0.1
        DESCRIPTION ${PROJECT_NAME}
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 26)

add_subdirectory(
        src
)