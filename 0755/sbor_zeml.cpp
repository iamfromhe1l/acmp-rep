#include <iostream>
using namespace std;
int main()
{
  int a, b, z;
  cin >> a >> b >> z;
  if (a + b < z)
  {
    cout << "Impossible";
    return 0;
  }
  cout << a + b - z;
}