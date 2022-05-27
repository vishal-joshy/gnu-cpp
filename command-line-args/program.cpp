#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1) // always have exe name as command line arg
	{
		std::cout << "No arguments \n";
		std::cout << "filename:" << argv[0];
		return 0;
	}
	for (int i = 0; i < argc; i++)
	{
		std::cout << i << ":" << argv[i] << '\n';
	}
	return 0;
}
