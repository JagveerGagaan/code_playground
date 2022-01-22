#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cout << "Enter Size of 2D Array :- ";
  cin >> n >> m;

  int arr[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
    cout << endl;
  }

  int x;
  cout << "enter element you want to search :- ";
  cin >> x;

  bool flag = false;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] == x)
      {
        cout << i << " " << j << endl;
        flag = true;
      }
    }
  }

  if (flag)
  {
    cout << "Element is found";
  }
  else
  {
    cout << "element is not found";
  }
  return 0;
}
