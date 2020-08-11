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
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == x)
    {
      cout << i+1 << endl;
    }
  }
}