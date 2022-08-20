#include <iostream>
#include <string>

template <int n>
struct adder
{
	enum
	{
		value = n + adder<n - 1>::value
	};
};

template <>
struct adder<0>
{
	enum
	{
		value = 0
	};
};

int main(void)
{
	std::cout << adder<10>::value;
}
