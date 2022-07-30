/* Print out primes from a given array */ 
#include <iostream>

int main()
{
	int primes[] = {2, 3, 5, 7, 11, 13, 17, 19};
	
	/* range-based for loop */ 
	for (int i : primes)
		std::cout << i << " ";

	return 0;
}

