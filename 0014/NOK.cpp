#include <iostream>
using namespace std;

void main()
{
  int a, b;
  cin >> a >> b;
  int a1 = a, b1 = b;
  while (a > 0 && b > 0)
  {
    if (a > b)
    {
      a %= b;
    }
    else
    {
      b %= a;
    }
  }
  cout << a1 * b1 / (a + b) << endl;
}