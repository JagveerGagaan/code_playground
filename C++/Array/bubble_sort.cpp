#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter your size of array";
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  //This method is also good

  // for (int i = 1; i < n; i++)
  // {
  //   for (int j = 0; j < n - i; j++)
  //   {
  //     if (arr[j] > arr[j + 1])
  //     {
  //       int temp = arr[j];
  //       arr[j] = arr[j + 1];
  //       arr[j + 1] = temp;
  //     }
  //   }
  // }

  int counter = 1;
  while (counter < n)
  {
    for (int i = 0; i < n - counter; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
    counter++;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}