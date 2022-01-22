#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter your size of int arr";
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int max_val = INT_MIN;
  int min_val = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    max_val = max(max_val, arr[i]);
    min_val = min(min_val, arr[i]);
  }
  cout << "Maximum Value of Array is " << max_val << endl;
  cout << "Minimum Value of Array is " << min_val;
  return 0;
}