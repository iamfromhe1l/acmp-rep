#include <iostream>
using namespace std;

int main()
{
  string a, b;
  int countB = 0, countK = 0;
  cin >> a >> b;
  for (int i = 0; i < 4; i++)
  {
    char num = a[i];
    for (int j = 0; j < 4; j++)
    {
      if (i == j && num == b[j])
      {
        countB += 1;
      }
      else if (num == b[j])
      {
        countK += 1;
      }
    }
  }
  cout << countB << " " << countK << endl;
}