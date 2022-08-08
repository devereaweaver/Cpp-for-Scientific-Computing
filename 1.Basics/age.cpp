#include <iostream>
#include <fstream>

void write_out(std::ostream& os, int age)
{
	os << age << std::endl;
}

int main()
{
	/* ask for input and print to console and file */
	int age{};

	std::cout << "What is your age (in years): ";
	std::cin >> age;

	std::ofstream outfile("age.txt");
	write_out(outfile, age);
	write_out(std::cout, age);	
}

