#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter your nmbr";
  cin >> n;

  bool flag = 0;

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      cout << "Not a prime Number";
      flag = 1;
      break;
    }
  }
  if (flag == 0)
  {
    cout << "Prime" << endl;
  }
  return 0;
}