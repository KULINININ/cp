#include <iostream>
using namespace std;

int main()
{
	int arr[1000];
	int x, n;

	string regul;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cin >> x;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			regul = "YES";
		}
		else if (regul != "YES")
		{
			regul = "NO";
		}
	}

	cout << regul;
}