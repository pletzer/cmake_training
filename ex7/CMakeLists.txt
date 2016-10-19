cmake_minimum_required (VERSION 2.8)
project(ex7 LANGUAGES CXX)

# option to instrument with scorep
option(WITH_SCOREP "Instrument using Score-P" OFF)
if (WITH_SCOREP)
    # locate the scorep program
    find_program(SCOREP_PROGRAM scorep)
    if (NOT SCOREP_PROGRAM)
        message(FATAL_ERROR "Could not locate scorep program")
    endif ()

    # configure the compiler wrapper that puts scorep first
    set(CXX_WRAPPER "${CMAKE_BINARY_DIR}/cxx_wrapper.sh")
    configure_file(cxx_wrapper.sh.in ${CXX_WRAPPER})

    # use the wrapper as the compiler
    set(CMAKE_CXX_COMPILER "${CXX_WRAPPER}")
endif ()

# create an executable from the given source
add_executable(ex7 helloWorld.cxx)
