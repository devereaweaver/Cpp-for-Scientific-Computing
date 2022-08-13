/* polynomials.cpp - begin to implement a class for poloynomials
 * - Devere Anthony Weaver
 *
 *   TO DO: Consider implementing different ways to construct Polynomial object
 */
#include <iostream>
#include<vector>

class Polynomial
{
	public:
		Polynomial(const std::vector<double>& nums, unsigned n): size{n}, coefficients{new double[size]}
	       	{
			for (int i{}; i < nums.size(); ++i)    // init coeff array
				coefficients[i] = nums[i]; 
		}

		~Polynomial(){delete[] coefficients;}

		double* getCoefficients() const {return coefficients;}
		unsigned getSize() const {return size;}

	private:
		unsigned size{};    // # coefficients
		double* coefficients{nullptr};
};

std::ostream& operator<<(std::ostream& os, const Polynomial& p)
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

int main()
{
	std::vector<double> values{1, 2, 3, 4, 5};
	Polynomial p(values, values.size());
	std::cout << "Polynomial: " <<  p << std::endl;
}

