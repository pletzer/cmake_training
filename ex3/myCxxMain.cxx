#include <iostream>

#include "fc.h"

extern "C" void mymodule_sayhello();

int main() {
  mymodule_sayhello();
}