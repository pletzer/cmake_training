cmake_minimum_required (VERSION 2.8)

# make sure fortran is enabled as well as C and C++
enable_language(Fortran)

# load the module that creates interfaces for C code to call fortran
include(FortranCInterface)
# generate fc.h
FortranCInterface_HEADER(fc.h
                         SYMBOLS mymodule mymodule:sayhello)

# include the directory that contains fc.h and the fortran module file
include_directories(${CMAKE_BINARY_DIR})

# create the library and executable
add_library(myFortranLib myFortranLib.f90)
add_executable(myCxxMain  myCxxMain.cxx)
# link the library
target_link_libraries(myCxxMain myFortranLib)
