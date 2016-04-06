cmake_minimum_required (VERSION 2.8)
project(ex4)

find_package(MPI)
set(CMAKE_CXX_COMPILER ${MPI_CXX_COMPILER})

add_executable(ex4 ex4.cxx)
