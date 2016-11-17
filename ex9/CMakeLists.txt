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

add_test(NAME ex5_parseOutput
         COMMAND mpiexec -n 5 ./ex5)

# test ex5_5 will pass if the return code is 0

# test ex5_shouldFail is expected to fail
set_tests_properties(ex5_shouldFail PROPERTIES WILL_FAIL TRUE)

# test ex5_parseOutput will pass if the code prints out "PASSED"
set_tests_properties(ex5_parseOutput PROPERTIES PASS_REGULAR_EXPRESSION "PASSED")
