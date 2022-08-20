#include <iostream>
#include <dlfcn.h>

typedef int (*binaryFunction)(int, int);

typedef int (*PowerFunction)(int);

int main(int argc, char **argv)
{
    void *handle = dlopen("./libMath.so", RTLD_LAZY);
    char *error;

    binaryFunction add = (binaryFunction)dlsym(handle, "Add");
    PowerFunction pow = (PowerFunction)dlsym(handle, "Pow");

    int (*sub)(int,int);
    *(void**) (&sub) = dlsym(handle, "Sub");

    std::cout << (*pow)(2) << std::endl;
    std::cout << (*add)(2, 3) << std::endl;
    std::cout << (*sub)(3, 2) << std::endl;
}

// g++ <inp-filename> -ldl
// -ldl => Link against libdl library for dlopen(), dlclose(), APIs.
