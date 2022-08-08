#include <iostream>
#include <fstream>

int main()
{
	std::ofstream square_file("squares.txt");
	square_file << "First ten squares:" << std::endl;
	for(int i{0}; i < 10; ++i)
		square_file << i << "^2 = " <<  i*i << std::endl;
}

