#include <iostream>
#include <dlfcn.h>

typedef int (*binaryFunction)(int, int);

typedef int (*PowerFunction)(int);

int main(int argc, char **argv)
{
    void *handle = dlopen("./libMath.so", RTLD_LAZY);

    binaryFunction add = (binaryFunction)dlsym(handle, "Add");
    binaryFunction sub = (binaryFunction)dlsym(handle, "Sub");
    PowerFunction pow = (PowerFunction)dlsym(handle, "Pow");

    std::cout << (*pow)(2) << std::endl;
    std::cout << (*add)(2, 3) << std::endl;
    std::cout << (*sub)(3, 2) << std::endl;
}

// g++ <inp-filename> -ldl
// -ldl => Link against libdl library for dlopen(), dlclose(), APIs.
