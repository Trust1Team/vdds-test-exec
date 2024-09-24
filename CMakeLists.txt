cmake_minimum_required(VERSION 3.28)

project(vdds-stub)

set(CMAKE_CXX_STANDARD 17)

add_executable(Vdds_PatDatImport main.cpp)
add_executable(Vdds_MmoInfExport main.cpp)
add_executable(Vdds_MmoView main.cpp)
