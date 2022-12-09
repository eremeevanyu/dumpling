#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> array;
	int a;
	while (std::cin >> a)
	{
		array.push_back(a);
	}

	std::sort(std::begin(array), std::end(array));

	std::vector<int> numbers;
	std::vector<int> count;
	
	auto current = array[0];
	auto total = 0;

	numbers.push_back(current);
	count.push_back(0);

	for (auto n : array)
	{
		if (n == current)
		{
			++count[total];
		}

		if (n != current)
		{
			numbers.push_back(n);
			current = n;
			count.push_back(1);
			++total;
		}
	}

	for (auto i = 0; i < total + 1; ++i)
	{
		std::cout << numbers[i] << ' ' << count[i] << std::endl;
	}

	return 0;
}