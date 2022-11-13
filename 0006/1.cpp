#include <iostream>
#include <string>
using namespace std;

int findIdx(char s_e)
{
  string s = "ABCDEFGH";
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == s_e)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  string s;
  string alph = "ABCDEFGH";
  cin >> s;
  if (s.length() != 5 || s[2] != '-')
  {
    cout << "ERROR";
    return 0;
  }
  else if (s[0] != 'A' && s[0] != 'B' && s[0] != 'C' && s[0] != 'D' && s[0] != 'E' && s[0] != 'F' && s[0] != 'G' && s[0] != 'H' || s[3] != 'A' && s[3] != 'B' && s[3] != 'C' && s[3] != 'D' && s[3] != 'E' && s[3] != 'F' && s[3] != 'G' && s[3] != 'H')
  {
    cout << "ERROR";
    return 0;
  }
  else if ((int)s[1] >= 9 + 48 && (int)s[1] <= 0 + 48 || (int)s[4] >= 9 + 48 && (int)s[4] <= 0 + 48)
  {
    cout << "ERROR";
    return 0;
  }
  int idx = findIdx(s[0]);
  if (s[3] == alph[idx + 1] || s[3] == alph[idx - 1])
  {
    if ((int)s[4] - 48 == (int)s[1] - 48 - 2 || (int)s[4] - 48 == (int)s[1] - 48 + 2)
    {
      cout << "YES";
      return 1;
    }
    cout << "NO";
    return 0;
  }
  else if (s[3] == alph[idx + 2] || s[3] == alph[idx - 2])
  {
    if ((int)s[4] - 48 == (int)s[1] - 48 - 1 || (int)s[4] - 48 == (int)s[1] - 48 + 1)
    {
      cout << "YES";
      return 1;
    }
    cout << "NO";
    return 0;
  }
  cout << "ERROR";
  return 0;
}
