/* polynomials.cpp - begin to implement a class for poloynomials
 * By: Devere Anthony Weaver
 */

/* TODO: Come back and start adding arithmetic operators for the Polynomial class. */

#include <iostream>
#include<vector>
#include<cassert>

class Polynomial
{
	public:
		Polynomial(const std::vector<double>& nums, unsigned n): degree{n}, coefficients{new double[degree]}
	       	{
			for (int i{}; i < nums.size(); ++i)    
				coefficients[i] = nums[i]; 
		}
		Polynomial(const Polynomial& p): degree{p.getSize()}, coefficients{new double[degree]}  // copy constructor
		{
			std::cout << "Copy constructor used!!!" << std::endl;
			for (int i{}; i < degree; ++i)
				coefficients[i] = p.coefficients[i];
		}  
		Polynomial& operator=(Polynomial&& psrc)    // move assignment
		{
			std::cout << "Move assignment used!!!" << std::endl;
			assert(degree == psrc.degree);
			delete[] coefficients;    // remove whatever is here
			coefficients = psrc.coefficients;    // steal coefficients
			psrc.coefficients = nullptr;    // null source data
			psrc.degree = 0;
			return *this;
		}
		~Polynomial(){delete[] coefficients;}
		double* getCoefficients() const {return coefficients;}
		unsigned getSize() const {return degree;}

	private:
		unsigned degree{};    // # coefficients
		double* coefficients{nullptr};
};

std::ostream& operator<<(std::ostream& os, const Polynomial& p);
Polynomial f(double c2, double c1, double c0);


int main()
{
	std::vector<double> values{1, 2, 3, 4, 5};
	Polynomial p(values, values.size());
	std::cout << "Polynomial: " <<  p << std::endl;

	// Test move assignment and copy constructor 
	std::vector<double> v{9, 8, 7};
	Polynomial h(v, 3);	
	std::cout << "\nPolynomial h: " << h << std::endl;
	Polynomial q(h);    // copy constructor
	std::cout << "\nPolynomial q (before move assignment): " << q << std::endl;
	q = f(6, 5, 4);    // move assignment
	std::cout << "\nPolynomial q (after move assignment): " << q << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Polynomial& p)    // output for Polynomial
{
	const double* coeff_ptr = p.getCoefficients();
	for (int x{}; x < p.getSize(); ++x)
	{
		if (x == p.getSize()-1)
			os << coeff_ptr[x] << std::endl;    // last coefficient
		else
			os << coeff_ptr[x] << "x^" << (p.getSize()- (x+1)) << " + ";
	}
	return os;
}


Polynomial f(double c2, double c1, double c0)
{
	/* used to test movement assignment */
	std::vector<double> v{c2, c1, c0};
	Polynomial p(v, v.size());
	return p;
}

