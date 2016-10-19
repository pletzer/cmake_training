cmake_minimum_required (VERSION 2.8)
project(ex4 LANGUAGES CXX)

# locate MPI - if not found it will be an error
find_package(MPI REQUIRED)
# use the MPI compiler
set(CMAKE_CXX_COMPILER ${MPI_CXX_COMPILER})

add_executable(ex4 ex4.cxx)
