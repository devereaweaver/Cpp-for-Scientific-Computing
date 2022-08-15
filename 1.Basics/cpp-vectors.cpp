#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> vector_add(const std::vector<float>& v1, const std::vector<float>& v2)
{
	// vectors know their size
	assert(v1.size() == v2.size());
	std::vector<float> s(v1.size());
	for(unsigned i{}; i < v1.size(); ++i)
		s[i] = v1[i] + v2[i];
	return s;
}


int main()
{
	std::vector<float> v1{1, 2, 3}, v2{7, 8, 9},
		s(vector_add(v1, v2));

	for(unsigned i{}; i < s.size(); ++i)
		std::cout << s[i] << " ";
	std::cout << std::endl;
}

