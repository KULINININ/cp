#include <iostream>
using namespace std;

int main()
{
	int arr[100][100];
	int x,n;
	string yesarr[100];

	cin >> x;

	cin >> n;

	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i][j];

			if (arr[i][j] == x)
			{
				yesarr[i] = "YES";
			}
			else if(yesarr[i] != "YES")
			{
				yesarr[i] = "NO";
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << yesarr[i] << endl;
	}
}