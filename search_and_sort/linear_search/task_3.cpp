#include <iostream>
using namespace std;

int main () 
{
  cin.tie(0);

  int arr[1000];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int x;
  cin >> x;
  int diff, num = arr[0];
  diff = abs(x-arr[0]);
  for (int i = 1; i < n; i++)
  {
    int d = abs(x-arr[i]);
    if (d < diff)
    {
      num = arr[i];
      diff = d;
    }
  }
  cout << num;
}