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
  int minmin = arr[0];
  //int minmin_i = 1;
  int min = arr[0];
  //int min_i = 1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < minmin)
    {
      min = minmin;
     //min_i = minmin_i;
      minmin = arr[i];
      //minmin_i = i+1;
    }
    else if (arr[i] < min)
    {
      min  = arr[i];
    }
    
  }
  cout << minmin << " " << min;
}