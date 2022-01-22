#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  cout << "Enter size of array";
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int count = 0, val = 0;
  for (int i = 0; i < n; i++)
  {

    for (int j = val; j <= count; j++)
    {
      cout << a[j] << " ";
    }
    val = i;
    count++;
    cout << endl;
  }

  return 0;
}