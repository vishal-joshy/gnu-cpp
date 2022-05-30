#include <iostream>

extern "C" int addNumbers(int, int); //extern "C" guarentees that this function wont be overloaded

using namespace std;

int main(int argc, char *argv[])
{
	int sum = addNumbers(4, 5);
	cout << sum;
	return 1;
}

// To compile multiple files, use
// >g++ -c program.cpp	- to create object files.
// >g++ -c add.cpp
// >g++ -o program.exe program.o add.o - create exe file.
// OR
// >g++ -o program.exe program.cpp add.cpp