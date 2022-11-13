#include <iostream>
#include <string>
using namespace std;

string findMax(string a, string b)
{
  if (a.length() != b.length())
  {
    if (a.length() > b.length())
    {
      return a;
    }
    return b;
  }
  if (a == b)
  {
    return a;
  }
  for (int i = 0; i < a.length(); i++)
  {
    if ((int)a[i] > (int)b[i])
    {
      return a;
    }
    else if ((int)a[i] < (int)b[i])
    {
      return b;
    }
  }
}

int main()
{
  string a, b, c;
  cin >> a >> b >> c;
  string max_e = findMax(findMax(a, b), c);
  cout << max_e;
}