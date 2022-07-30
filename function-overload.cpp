/* An example of overloading a function name for different types */
#include <iostream>
#include <cmath>

int divide(int a, int b){
	return a/b;
}

float divide(float a, float b){
	return std::floor(a/b);
}

int main()
{
	int x{5}, y{2};
	float n{5.0}, m{2.0};
	
	std::cout << divide(x, y) << std::endl;   // int
	std::cout << divide(n, m) << std::endl;   // float
//	std::cout << divide(x, m) << std::endl;   // error ambiguous



	return 0;
}

