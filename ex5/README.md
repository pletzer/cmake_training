Ex5 - OpenMP example
====================

* adding options
* using OpenMP
* selecting a specific compiler

```sh
mkdir build && cd build
CC=gcc cmake .. -DUSE_OPENMP=ON
make
./omp_hello
```
