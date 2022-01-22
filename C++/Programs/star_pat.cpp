#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter N numbers :-";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int spc = 1; spc <= n - i; spc++)
    {
      cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = n; i >= 1; i--)
  {
    for (int spc = 0; spc < n - i; spc++)
    {
      cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
