#include <iostream>
using namespace std;

void main()
{
  int n;
  cin >> n;
  int fres = n / 10 * (n / 10 + 1);
  if (fres > 0)
  {
    cout << fres << 25;
  }
  else
  {
    cout << 25;
  }
}