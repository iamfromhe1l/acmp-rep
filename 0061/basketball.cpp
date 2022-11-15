#include <iostream>
using namespace std;
int main()
{
  int sum_a = 0, sum_b = 0;
  for (int i = 0; i < 4; i++)
  {
    int a, b;
    cin >> a >> b;
    sum_a += a;
    sum_b += b;
  }
  if (sum_a > sum_b)
  {
    cout << 1;
  }
  else if (sum_b > sum_a)
  {
    cout << 2;
  }
  else
  {
    cout << "DRAW";
  }
}