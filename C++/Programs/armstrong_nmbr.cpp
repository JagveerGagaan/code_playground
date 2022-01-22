#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter your Number to check";
  cin >> n;

  int original_n = n;
  int total = 0;
  while (n > 0)
  {
    int cube_nmbr = n % 10;
    total += pow(cube_nmbr, 3);
    n = n / 10;
  }
  if (total == original_n)
  {
    cout << "An Armstrong Number" << endl;
  }
  else
  {
    cout << "Not An Armstrong Number" << endl;
  }
}