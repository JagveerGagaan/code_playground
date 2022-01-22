#include <iostream>
using namespace std;

int octatodeci(int num)
{
  int ans = 0;
  int x = 1;

  while (num > 0)
  {
    int lastval = num % 10;
    lastval *= x;
    ans += lastval;
    x *= 8;
    num /= 10;
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter your number";
  cin >> n;

  cout << octatodeci(n);
}