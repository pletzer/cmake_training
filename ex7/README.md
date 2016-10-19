Ex7 - configuring files
=======================

* Configuring a file
* Instrumenting with Score-P

```sh
mkdir build && cd build
CXX=g++ cmake -DWITH_SCOREP=ON ..
make VERBOSE=1
./ex7
```
