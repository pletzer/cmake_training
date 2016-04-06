cmake_minimum_required (VERSION 2.8)

enable_language(Fortran)

include(FortranCInterface)
# generate fc.h
FortranCInterface_HEADER(fc.h
                         SYMBOLS mymodule mymodule:sayhello)

include_directories(${CMAKE_BINARY_DIR})

add_library(myFortranLib myFortranLib.f90)
add_executable(myCxxMain  myCxxMain.cxx)
target_link_libraries(myCxxMain myFortranLib)
