cmake_minimum_required (VERSION 2.8)

# give the project a name and specify which languages to use
# if you don't specify the languages here it will default to C and C++
project(my_project LANGUAGES C)

# create a shared library
add_library(myLibrary SHARED myLibrary.c)
