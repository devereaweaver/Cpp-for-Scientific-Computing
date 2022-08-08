#include <iostream>
#include <memory>

std::shared_ptr<double> f()
{
	std::shared_ptr<double> p1{new double};
	std::shared_ptr<double> p2{new double}, p3 = p2;
	std::cout << "p3.use_count() = " << p3.use_count() << std::endl;
	return p3;
}

int main()
{
	/* move ownership of shared_ptr as function returns */ 
	std::shared_ptr<double> p=f();
	std::cout << "p.use_count() = " << p.use_count() << std::endl;

	/* when possible, use make_shared function which returns
	 * a shared pointer; adds data and memory together for 
	 * more efficient memory caching 
	 */
	std::shared_ptr<double> p5 = std::make_shared<double>();

	/* use automatic type detection for same thing */
	auto p6 = std::make_shared<double>();
}

