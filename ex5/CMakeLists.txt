# Minimum version should be set
cmake_minimum_required (VERSION 2.8)

# name of the project and languages
project(omp_hello C)

# option to compile with OpenMP
option(USE_OPENMP "Compile with support for OpenMP (if avaliable)" OFF)

# find openmp
if (USE_OPENMP)
    find_package(OpenMP)
    if (OPENMP_FOUND)
        # add the openmp flags
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    else ()
        message(WARNING "OpenMP not found!")
    endif ()
endif ()

if (NOT OPENMP_FOUND)
    # compile without OpenMP
    add_definitions(-DNO_OMP)
endif ()

# add the executable
add_executable(omp_hello omp_hello.c)
