#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter Your n nmbr";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int k = 0;
    for (int j = 1; j <= (n * 2) - i; j++)
    {
      if (k < n - i)
      {
        cout << " ";
        k++;
      }
      else
      {
        cout << "* ";
      }
    }
    cout << endl;
  }
}