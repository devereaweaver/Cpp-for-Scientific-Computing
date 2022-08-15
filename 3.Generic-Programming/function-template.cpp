#include <iostream>

template <typename T>
T max(T a, T b)    // return max using type T
{
	if (a>b)
		return a;
	else 
		return b;
}

int main()
{
	std::cout << "The maximum of 3 and 5 is " << max(3,5) << std::endl;
	std::cout << "The maximum of 3l and 5l is " << max(3l, 5l) << std::endl;
	std::cout << "The maximum of 3.0 and 5.0 is " << max(3.0, 5.0) << std::endl;

	// template function can be used with other variables and expressions
	// implicit instantiation
	unsigned u1{2}, u2{8};
	std::cout << "The maximum of u1 and u2 is " << max(u1, u2) << std::endl;
	std::cout << "The maximum of (u1*u2) and (u1+u2) is " << max(u1*u2, u1+u2) << std::endl;

	// explicit instantiation
	std::cout << max<float>(8.1, 9.3) << std::endl;    // force instantiation
}

