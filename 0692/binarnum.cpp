#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int num;
  cin >> num;
  if (pow(2, (int)(log(num) / log(2))) == num)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
}