#include <iostream>
using namespace std;

int sqr_or_power(int, int k = 2);

int main()
{
  int n, k;
  n = 2;
  k = 3;

  cout << "n: " << n << endl
       << "k: " << k << endl
       << "n^k: " << sqr_or_power(n, k) << endl;

  n = 4;
  cout << endl << "n: " << n << endl
       << "k: 2" << endl
       << "n^k: " << sqr_or_power(n) << endl;
}

int sqr_or_power(int n, int k)
{
  if (k == 2)
    return (n * n);
  else
    return (n * sqr_or_power(n, k - 1));
}
