#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter your n number";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int spc = 1; spc <= n - i; spc++)
    {
      cout << " ";
    }
    for (int j = i; j >= 1; j--)
    {
      cout << j;
    }
    for (int k = 2; k < i + 1; k++)
    {
      cout << k;
    }
    cout << endl;
  }
}