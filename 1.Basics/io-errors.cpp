#include <iostream>
#include <fstream>

int main()
{
	std::ifstream infile("missingfile.txt");

	int i{};
	double d{};
	infile >> i >> d;

	std::cout << "i is " << i << ", d is " << d << std::endl;
}

