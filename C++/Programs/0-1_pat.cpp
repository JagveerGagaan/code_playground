#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter your number n";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      int k = i + j;

      if (k % 2 == 0)
      {
        cout << " 1";
      }
      else
      {
        cout << " 0";
      }
    }
    cout << endl;
  }
}