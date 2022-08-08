#include <iostream>

int main()
{
	int x{}, y{};

	std::cout << "Enter x, y: ";
	std::cin >> x >> y;
	
	int min= (x <= y)? x : y;

	std::cout << "Min: " << min << std::endl;

	return 0;
}

