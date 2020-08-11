#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> numbers;
	int input, number, max_num = 0, min_num = 5;

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		cin >> number;
		numbers.push_back(number);

		if (number > max_num)
		{
			max_num = number;
		}

		if (number < min_num)
		{
			min_num = number;
		}
	}

	for (int i = 0; i < input; i++)
	{
		if (numbers[i] == max_num)
		{
			numbers[i] = min_num;
		}

		cout << numbers[i] << " ";
	}
}