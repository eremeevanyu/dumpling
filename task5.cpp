#include <iostream>
using namespace std;
std::pair<int*, int> array_in(int m_numb)
{
	int* p_arr = new int[m_numb];

	auto size = 0;

	int a;

	std::cin >> a;

	while (a != 0 && size < m_numb)
	{
		*(p_arr + size) = a;

		std::cin >> a;

		++size;
	}

	return std::make_pair(p_arr, size);
}

std::pair<int*, int> clear(int* p_arr, int size)
{
	int* c_arr = new int[size];

	auto c_size = 0;

	for (auto i = 0; i < size; ++i)
	{
		if (*(p_arr + i) > 5)
		{
			*(c_arr + c_size) = *(p_arr + i);

			++c_size;
		}
	}

	return std::make_pair(c_arr,c_size);
}

int main()
{

	auto m_numb = 100000;

	
	auto arr = array_in(m_numb);


	for (auto i = 0; i < arr.second; ++i)
	{
		std::cout << *(arr.first + i)<<" ";
	}

	auto c_arr = clear(arr.first,arr.second);
	cout << endl;

	for (auto i = 0; i < c_arr.second; ++i)
	{
		std::cout << *(c_arr.first + i) << " ";
	}

	delete[] arr.first;

	delete[] c_arr.first;

	return 0;
}