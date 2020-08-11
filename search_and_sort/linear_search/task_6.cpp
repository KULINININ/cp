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
  //int x;
  //cin >> x;
  int max = arr[0];
  int max_i = 1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
      max_i = i+1;
    }
  }
  cout << max_i;
}