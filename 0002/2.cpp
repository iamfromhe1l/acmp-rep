#include <iostream>
using namespace std;

void main()
{
  int n;
  cin >> n;
  if (n > 0)
  {
    cout << (1 + n) * n / 2;
  }
  else
  {
    int summ = 0;
    for (int i = 1; i >= n; i--)
    {
      summ += i;
    }
    cout << summ;
  }
}