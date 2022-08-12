#include <iostream>

extern "C" int Add(int a, int b);
extern "C" int Pow(int a);
extern "C" int Sub(int a, int b);

int main(int argc, char **argv)
{
    std::cout << Pow(3) << std::endl;
    std::cout << Add(2, 3) << std::endl;
    std::cout << Sub(2, 3) << std::endl;
    return 0;
}

// g++ <filename> <.so file>
// add ./ for current dir