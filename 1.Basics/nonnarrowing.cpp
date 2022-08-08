#include <iostream>

int main()
{
	// use braced initialization to avoid narrowing
	long l2 {1234567890123};
	unsigned u2 = -3;    // compiles, narrowing
	unsigned u2 {3};     // should cause narrowing error

	std::cout << l2 << std::endl;
	std::cout << u2 << std::endl;

	return 0;
}

