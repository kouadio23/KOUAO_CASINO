cmake_minimum_required(VERSION 3.23)
project(KOUAO_CASINO)

set(CMAKE_CXX_STANDARD 14)

include_directories(Casino)

add_executable(KOUAO_CASINO
        Casino/Casino.cpp)
