#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
  int ans = 0;
  int x = 1;
  while (n > 0)
  {
    int quotient = n / 2;
    int rem = n % 2;
    int binarynum = rem;
    binarynum *= 10;
    ans = binarynum;
  }

  int main()
  {
    int n;
    cout << "Enter Your number ";
    cin >> n;

    cout << decimalToBinary(n);
  }