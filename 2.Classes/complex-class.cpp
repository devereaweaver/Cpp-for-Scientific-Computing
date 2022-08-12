#include <iostream>

class Complex
{
	/* Represent a complex number */ 
	public:
		double r{}, i{};
};

int main()
{
	Complex z, c;

	z.r=3.5; z.i=2;
	c.r=2; c.i=-3.5;

	std::cout << "z = " << z.r << " + " << z.i << "i" << std::endl;
	std::cout << "c = " << c.r << " + " << c.i << "i" << std::endl;


	/* Access Operators */ 
	// using pointer to the class
	Complex* complex_ptr = &c;

	// deference class member and change value (change real part)
	(*complex_ptr).r = 4;
	std::cout << "\nc = " << c.r << " + " << c.i << "i" << std::endl;

	// dot operator gets messy, just use arrow one
	complex_ptr -> i = 5.3;
	std::cout << "\nc = " << c.r << " + " << c.i << "i" << std::endl;
}

