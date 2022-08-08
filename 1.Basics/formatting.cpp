#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	// increase precision of floating-point
	double pi = M_PI;
	std::cout << "pi is " << pi << std::endl;
	std::cout << "pi is " << std::setprecision(16) << pi << std::endl;

	// format by setting flags directly, for example scientific notation
	// show sign for positive values too
	std::cout.setf(std::ios_base::showpos);
	std::cout << "pi is " << std::scientific << pi << std::endl;

	// change of base
	std::cout << "63 hex is " << std::hex << 63 << std::endl;
	std::cout << "63 octal is " << std::oct << 63 << std::endl;
	std::cout << "63 decimal is " << std::dec << 63 << std::endl;

	// print boolean values 
	std::cout << "pi < 3 is " << (pi < 3) << std::endl;
	std::cout << "pi < 3 is " << std::boolalpha 
		  << (pi < 3) << std::endl;

	// reset formatting options 
	std::cout.unsetf(std::ios_base::basefield | std::ios_base::showpos
			| std::ios_base::boolalpha);
}
