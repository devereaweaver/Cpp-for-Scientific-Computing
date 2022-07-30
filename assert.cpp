/* make asserts disappear in building */
//#define NDEBUG  - use this or DNDEBUG compiler flag to turn off assertions
#include <iostream>
#include <cassert>

int main()
{
	int x{};
	std::cout << "> ";
	std::cin >> x;
	assert(x >= 0);
	std::cout << x << std::endl;
}

