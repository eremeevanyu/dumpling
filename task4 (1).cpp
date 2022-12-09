#include <iostream>
#include <vector>
#include <string>
#include <algorithm>



int main()
{
	std::string a;
	std::vector<std::string> test;
	
	while (std::cin >> a)
	{
		test.push_back(a);
	}
	std::sort(std::begin(test), std::end(test));

	for (auto n : test)
	{
		std::cout << n << std::endl;
	}

	return 0;
}