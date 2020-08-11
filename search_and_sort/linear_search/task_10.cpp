#include <iostream>
using namespace std;

int main()
{
	int silver = 0, gold = 0, input, storage;

	cin >> input;

	cin >> storage;

	gold = storage;

	for (int i = 0; i < input-1; i++)
	{
		cin >> storage;

		if (storage > gold)
		{
			silver = gold;
			gold = storage;
		}

		else if ((storage > silver)&&(storage != gold))
		{
			silver = storage;
		}
	}

	cout << silver;
}