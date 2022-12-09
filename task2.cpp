#include <iostream>
#include <vector>

std::vector<std::vector<int>> make_next(std::vector<std::vector<int>> matrix, int a, int b)
{
	std::vector<std::vector<int>> next(std::size(matrix)-1, std::vector<int>(std::size(matrix) - 1));

	for (auto i = 0; i < std::size(matrix); ++i)
	{
		auto x = 0;
		if (i < a) { x = i; }
		if (i > a) { x = i - 1; }
		if (i == a) continue;

		for (auto j = 0; j < std::size(matrix); ++j)
		{
			auto y = 0;

			if (j < b) { y = j; }
			if (j > b) { y = j - 1; }
			if (j == b) continue;

			next[x][y] = matrix[i][j];

		}
	}
	return next;
}

int determinant(std::vector<std::vector<int>> matrix)
{
	if (std::size(matrix) == 2)
	{
		return matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
	}

	auto s = 0;

	for (auto i = 0; i < std::size(matrix); ++i)
	{
		/*std::vector<std::vector<int>> next = ;*/

		s+=determinant(make_next(matrix, 0, i)) * matrix[0][i] * std::pow(-1, i);

	}

	return s;
}

int main()
{
	std::vector<std::vector<int>> matrix({ { 1,2,3 }, { 4,5,6 }, {7,8,10} });

	for (auto m : matrix)
	{
		for (auto k : m)
		{
			std::cout << k << ' ';
		}

		std::cout << std::endl;
	}

	std::cout << determinant(matrix);

	return 0;
}