// on vs c++ 2017: compilation error
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int max_e = -101, min_e = 101, max_e_idx = 0, min_e_idx = 0, num = 0, summ = 0, subReduce = 1;
  int s[n];
  for (int i = 0; i < n; i++)
  {
    cin >> num;
    if (num < min_e)
    {
      min_e = num;
      min_e_idx = i;
    }
    if (num > max_e)
    {
      max_e = num;
      max_e_idx = i;
    }
    s[i] = num;
    if (num > 0)
    {
      summ += num;
    }
  }
  for (int i = min(max_e_idx, min_e_idx) + 1; i < max(max_e_idx, min_e_idx); i++)
  {
    subReduce *= s[i];
  }
  cout << summ << " " << subReduce;
  return 0;
}
