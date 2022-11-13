#include <iostream>
using namespace std;

void main()
{
  int n, rev_e, countNch = 0;
  cin >> n;
  int j = 0;
  int *rev = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> rev_e;
    if (rev_e % 2 == 1)
    {
      countNch++;
      cout << rev_e;
      if (i != n - 1)
      {
        cout << ' ';
      }
    }
    else
    {
      rev[j] = rev_e;
      j++;
    }
  }
  cout << endl;

  for (int i = 0; i < j; i++)
  {
    cout << rev[i];
    if (i != n - 1)
    {
      cout << ' ';
    }
  }
  cout << endl;
  if (countNch > n - countNch)
  {
    cout << "NO";
  }
  else
  {
    cout << "YES";
  }
}