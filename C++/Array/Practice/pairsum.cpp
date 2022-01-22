#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cout << "Enter the size of array :- ";
  cin >> n;
  cout << "Enter your key K";
  cin >> k;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int low = 0;
  int high = n - 1;

  while (low < high)
  {
    if (a[low] + a[high] == k)
    {
      cout << low << " " << high << endl;
      return true;
    }
    else if (a[low] + a[high] > k)
    {
      high--;
    }
    else
    {
      low++;
    }
  }
  return false;
}