cmake_minimum_required (VERSION 2.8)
project(ex6 LANGUAGES CXX)

# set build type to release if not specified
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Build type (e.g. Debug)" FORCE)
endif()

# set custom build types, specific to compilers
if (${CMAKE_CXX_COMPILER_ID} STREQUAL "Intel")
    # these flags are always passed
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fp-model precise")

    # set flags for custom release on pan (optimal on wm and sb/ib)
    set(CMAKE_CXX_FLAGS_RELPAN "-O3 -DNDEBUG -xSSE4.2 -axAVX")
    set(CMAKE_CXX_FLAGS_RELHOST "-O3 -DNDEBUG -xHost")
# modify flags on GNU compiler too
elseif (${CMAKE_COMPILER_IS_GNUCXX})
    set(CMAKE_CXX_FLAGS_RELPAN "-O3 -DNDEBUG -march=westmere -mtune=sandybridge")
    set(CMAKE_CXX_FLAGS_RELHOST "-O3 -DNDEBUG -march=native")
# set defaults
else ()
    set(CMAKE_CXX_FLAGS_RELPAN "${CMAKE_CXX_FLAGS_RELEASE}")
    set(CMAKE_CXX_FLAGS_RELHOST "${CMAKE_CXX_FLAGS_RELEASE}")
endif ()

# add the src/ subdirectory
add_subdirectory(src)
