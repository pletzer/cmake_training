cmake_minimum_required (VERSION 2.8)
project(ex5)

find_package(MPI)
set(CMAKE_CXX_COMPILER ${MPI_CXX_COMPILER})

enable_testing()

add_executable(ex5 ex5.cxx)

add_test(NAME ex5_5 
         COMMAND mpiexec -n 5 ./ex5)

add_test(NAME ex5_shouldFail
         COMMAND mpiexec -n 10 ./ex5)

set_tests_properties(ex5_shouldFail PROPERTIES WILL_FAIL TRUE)
