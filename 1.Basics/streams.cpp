#include <iostream>
#include <fstream>
#include <sstream>

void write_something(std::ostream& os)
{
	// write to output stream
	os << "Hi stream, did you know that (3*3) = " << (3*3) << std::endl;
}

int main(int argc, char* argv[])
{
	std::ofstream myfile("example.txt");
	std::stringstream mysstream;

	write_something(std::cout); // write to console 
	write_something(myfile);  // write to file
	write_something(mysstream);    // write to stringstream
	
	// retrieve output from stringstream object
	std::cout << "mysstream is: " << mysstream.str();
}

