#include <iostream>
#include <math.h>
using namespace std;
void main()
{
  int a = 0, b = 0, c = 0, d = 0;
  cin >> a >> b >> c >> d;
  for (int x1 = -100; x1 <= 100; x1++)
  {
    if ((a * pow(x1, 3) + b * pow(x1, 2) + c * x1 + d) == 0)
    {
      cout << x1 << " ";
    }
  }
  cout << endl;
}