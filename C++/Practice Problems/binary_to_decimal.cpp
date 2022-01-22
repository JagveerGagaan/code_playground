#include <iostream>
using namespace std;

int binarytodeci(int num)
{
  int ans = 0;
  int x = 1;
  while (num > 0)
  {
    int rem = num % 10;
    rem *= x;
    ans += rem;
    num /= 10;
    x *= 2;
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter your nmbr";
  cin >> n;
  cout << binarytodeci(n);
}