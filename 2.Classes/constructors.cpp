/* Example of writing constructors for a class */ 
#include <iostream>

class Complex
{
	public:
		/* Using member initialization lists */ 
		//Complex(): r(0), i(0) {}
		//Complex(double r, double i): r(r), i(i) {}
		//Complex(double r) : r(r), i(0) {}    // real part only
		
		/* Three constructors written as one */ 
		Complex(double r=0, double i=0): r(r), i(i) {}
		double get_r(){return r;}
	private:
		double r{}, i{};
};

int main()
{
	Complex z1;    // default constructed
	Complex z2(4) ;    // 4 + 0i
	Complex z3 = 4;    // 4 + 0i
	Complex z4(0, 1);  // 0 + 1i	
			  
	/* TO DO: Finish this later */
	/* Also, test with valgrind when possible */ 
	Complex* z1_ptr = &z1;
	std::cout << "z1 = " << z1_ptr->get_r() << std::endl;
	

	

}

