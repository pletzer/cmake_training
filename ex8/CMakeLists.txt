cmake_minimum_required (VERSION 2.8)
project(ex5)

find_package(MPI)
set(CMAKE_CXX_COMPILER ${MPI_CXX_COMPILER})

enable_testing()

add_executable(ex6 ex6.cxx)

#set(CPACK_GENERATOR "DEB")
#set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Alex Pletzer") #required

set(CPACK_GENERATOR "RPM")
include(CPack)

