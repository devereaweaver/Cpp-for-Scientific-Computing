/* Compute Talor series of the exponential function */
#include <iostream>

int main()
{
	double x{2.0}, xn{1.0}, exp_x{1.0};
	unsigned long fac{1};

	int terms{};
	std::cout << "Enter number of terms: ";
	std::cin >> terms;

	for(unsigned long i{1}; i <= terms; i++){
		xn*= x;
		fac*= i;
		exp_x+= xn / fac;
		std::cout << "e^x is " << exp_x << '\n';
	}

	return 0;
}

