Ex1 - simple executable
=======================

* out of source build
* create an executable
* selecting a build type

```sh
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=RELEASE
make
./helloWorld
```
