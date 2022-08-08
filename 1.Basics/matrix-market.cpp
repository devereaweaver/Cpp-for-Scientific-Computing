/* matrix-market.cpp - reads header information of a Matrix Market file
 * 	to quickly summarize the number of rows, columns and non-zero
 * 	entries without having to open the entire file.
 *
 * Author: Devere Anthony Weaver 
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

int main(int argc, char* argv[])
{
	// open file stream to read the matrix market file	
	std::ifstream file(argv[1]);

	// read file line by line ignoring header
	std::string line{};
	int row{}, col{}, num{};
	while(std::getline(file, line))
	{
		if(line[1] == '%')
			continue;
		else
			break;
	}

	// parse line to get desired words
	std::istringstream iss(line);
	std::vector<std::string> nums{};
	std::string word{};
	while(std::getline(iss, word, ' '))
	{
		std::string num = word;
		nums.push_back(num);
	}

	// output 
	std::cout << "\nMatrix Market file: " << argv[1] << std::endl;
	std::cout << "# Rows: " << nums[0] << std::endl;
	std::cout << "# Columns: " << nums[1] << std::endl;
	std::cout << "# Non-zero Entries: " << nums[2] << std::endl;
}
