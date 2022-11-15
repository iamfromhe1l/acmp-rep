#include <iostream>
using namespace std;
int main()
{
  int maxi = 0;
  int s[3];
  cin >> s[0] >> s[1] >> s[2];
  for (int i = 0; i < 3; i++)
  {
    if (s[i] > 727 || s[i] < 94)
    {
      cout << "Error";
      return 0;
    }
    if (s[i] > maxi)
    {
      maxi = s[i];
    }
  }
  cout << maxi;
}