/* Clumsly set/get private member and clusmy copy */
#include <iostream>

class Complex
{
	/* A little more fleshed-out Complex class */
	public:
		double get_r(){return r;}
		void set_r(double newr){r = newr;}
		double get_i(){return i;}
		void set_i(double newi){i = newi;}
	private:
		double r{}, i{};
};

int main()
{
	Complex c1, c2;

	// set c1
	c1.set_r(3.0);
	c1.set_i(2.0);

	// clumsly copy c1 to c2
	c2.set_r(c1.get_r());
	c2.set_i(c1.get_i());
}

