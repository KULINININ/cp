#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num = 0;
	int n, m;
	int nmin;
	int imin;
	int mmax;
	cin >> n;
	cin >> m;

	vector<vector<int>> arr(m);

	vector<int> minArr;

	for (int i = 0; i < m; i++)
	{
		arr[i].resize(n);
	}

	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
		{
			cin >> arr[i][j];
		}
	}


	for (int j = 0; j < n; j++)
	{
		nmin = 1000;

		mmax = -1000;

		for (int i = 0; i < m; i++)
		{
			if (arr[i][j] < nmin)
			{
				nmin = arr[i][j];
				//imin = i;
			}
		}

		for (int i = 0; i < m; i++)
		{
			if (arr[i][j] == nmin)
			{
				minArr.push_back(i);
			}
		}

		for (int a = 0; a < minArr.size(); a++)
		{
			mmax = -1000;

			imin = minArr[a];

			for (int i = 0; i < n; i++)
			{
				if (arr[imin][i] > mmax)
				{
					mmax = arr[imin][i];
				}
			}

			if (nmin == mmax)
			{
				num++;
			}
		}

		minArr.clear();
	}

	cout << num;
}