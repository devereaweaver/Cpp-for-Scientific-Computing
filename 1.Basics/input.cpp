#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::ifstream input("example.txt");
	std::ofstream output("example-copy.txt");
	std::string line{};

	while(std::getline(input, line))
	{
		output << line << std::endl;
	}
}

