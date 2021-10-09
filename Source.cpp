#include <iostream>
#include "Source2.h"

int main()
{
	Vector vec;
	vec.push_back(6);
	vec.resize(10, 1);
	vec.shrink_to_fit();
	std::cout << vec.Size();
	std::cout << vec.Capacity();
}