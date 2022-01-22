#include <iostream>
using namespace std;

char findout(int num)
{
  if (num % 2 == 0)
  {
    cout << "Even";
  }
  else
  {
    cout << "odd";
  }
}

int main()
{
  int n;

  cout << "Enter ur numbr to check odd or even";
  cin >> n;
  return findout(n);
}