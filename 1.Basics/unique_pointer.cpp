#include <iostream>
#include <memory>

std::unique_ptr<double> f()
{
	std::unique_ptr<double> fp{new double};
	*fp = 8;
	return fp;
}

int main()
{
	/* smart pointer will release automatically */
	std::unique_ptr<double> dp{new double};
	*dp = 7;
	std::cout << *dp << std::endl;

	/* unique pointers can't be assigned or converted 
	 * the ownership of the memory must simply be moved 
	 */
	std::unique_ptr<double> dp2{move(dp)}, dp3;
	dp3 = move(dp2);
	
	std::cout << *dp3 << std::endl;

	/* ownership is passed when a unique_ptr is returned
	 * from a function
	 */
	std::unique_ptr<double> dp4;
	dp4 = f();
	std::cout << *dp4 << std::endl;
}

