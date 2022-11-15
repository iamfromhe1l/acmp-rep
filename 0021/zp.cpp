#include <iostream>
using namespace std;
int main()
{
  int maxi = 0, mini = 100001;
  for (int i = 0; i < 3; i++)
  {
    int zp;
    cin >> zp;
    if (zp > maxi)
    {
      maxi = zp;
    }
    if (zp < mini)
    {
      mini = zp;
    }
  }
  cout << maxi - mini;
}