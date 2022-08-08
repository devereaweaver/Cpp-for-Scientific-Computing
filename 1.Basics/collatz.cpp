/* Implementation of collatz series */
#include <iostream>

int main()
{
	int x{};

	std::cout << "> ";
	std::cin >> x;

	int count{};

	while(x != 1){
		std::cout << "x" << count << ": " << x << '\n';
		if (x % 2 == 1)    // odd number
			x= (3*x) + 1;
		else 		   // even number
			x= x/2;
		count++;
	}

	return 0;
}
