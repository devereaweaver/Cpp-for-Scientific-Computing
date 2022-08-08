#include <iostream>
#include <fstream>
#include <string.h>

int main()
{
	std::string filename{};
	std::cout << "Enter file name: ";
	std::cin >> filename;

	std::ifstream infile{filename};
	while(!infile.good()){
		std::cout << "The file '" << filename 
			  << "' doesn't exist.\nEnter new file name: ";
		std::cin >> filename;
	}

	int i{};
	double d{};
	infile >> i >> d;
	
	if(infile.good())
		std::cout << "i is " << i << ", and d is " << d << std::endl;
	else
		std::cout << "Bad read." << std::endl;
}

