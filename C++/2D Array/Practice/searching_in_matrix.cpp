#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, target;
  cin >> n >> m;

  int arr[n][m];

  cin >> target;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] == target)
      {
        return true;
      }
    }
  }
  return false;
}