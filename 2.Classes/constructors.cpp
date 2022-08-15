/* Example of writing constructors for a class */ 
#include <iostream>

class Complex
{
	public:
		/* Delegating constructors */
		Complex(double r, double i): r{r}, i{i} {}    // they call this one
		Complex(double r): Complex{r, 0.0} {}
		Complex(): Complex{0.0} {}
		Complex(const Complex& c): r(c.r), i(c.i) {}  // copy constructor
		Complex& operator=(const Complex& src)    // assignment operator
		{
			r=src.r; i=src.i;
			return *this;
		}
		double get_r(){return r;}
		double get_i(){return i;}
		void print_Complex(){
			std::cout << r << " + " << i << std::endl;
		}
		~Complex()    // unecessary destructor
		{
			std::cout << "So long and thanks for the fish.\n";
		}
	private:
		double r{0.0}, i{0.0};
};

int main()
{
	Complex z1(3.0, 2.0);    // default constructed
	Complex z2{z1};    // invoke copy constructor to copy members
			  
	// see if it initialized correctly 
	Complex* z1_ptr = &z1;
	std::cout << "z1 = "; z1_ptr->print_Complex();

	// see if it copied correctly
	std::cout << "z2 = "; z2.print_Complex();

	// use one of delegating constructors and see if it works 
	Complex z3{};
	std::cout << "z3 = "; z3.print_Complex();
}
