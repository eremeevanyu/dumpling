#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;

	std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
	
	auto element = 0;

	for (auto i = n; i>n-i; --i)
	{
		for (auto j = n - i; j < i; ++j)
		{
			matrix[n - i][j] = element;
			++element;
		}

		for (auto j = n - i + 1; j < i; ++j)
		{
			matrix[j][i-1] = element;
			++element;
		}

		for (auto j = i - 2; j > n-i-1; --j)
		{
			matrix[i-1][j] = element;
			++element;
		}

		for (auto j = i - 2; j > n - i; --j)
		{
			matrix[j][n-i] = element;
			++element;
		}

	}

	for (auto m : matrix)
	{
		for (auto k : m)
		{
			std::cout << k << ' ';
		}

		std::cout << std::endl;
	}

	return 0;
}