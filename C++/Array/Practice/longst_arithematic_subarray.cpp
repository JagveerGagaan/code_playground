#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  cout << "Enter No. of Element";
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int ans = 2;
  int pd = a[1] - a[0];
  int j = 2;
  int curr_ans = 2;

  for (j; j < n; j++)
  {
    if (pd == a[j] - a[j - 1])
    {
      curr_ans++;
    }
    else
    {
      pd = a[j] - a[j - 1];
      curr_ans = 2;
    }
    ans = max(ans, curr_ans);
  }

  cout << "Maximum Difference is" << ans << " ";

  //both ways are true

  // while (j < n)
  // {
  //   if (pd == a[j] - a[j - 1])
  //   {
  //     curr_dif++;
  //   }
  //   else
  //   {
  //     pd = a[j] - a[j - 1];
  //     curr_dif = 2;
  //   }
  //   ans = max(ans, curr_dif);
  //   j++;
  // }
}