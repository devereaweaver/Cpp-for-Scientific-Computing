#include <iostream>
#include<memory>

// equality of template typename and function parameter
// function parameter is a local copy of argument
template <typename Tpara>
void f1(Tpara p){}

int main()
{
	int i{0};
	int& j{i};     // ref to i
	const int& k{i};    // const ref to i
	
	// Tpara will be substituted with int
	// such that p is of type int
	f1(3);
	f1(i);
	f1(j);
	f1(k);

	// unique_ptr must be passed as rvalue
	std::unique_ptr<int> up;
	f1(move(up));    // must use move constructor
}

