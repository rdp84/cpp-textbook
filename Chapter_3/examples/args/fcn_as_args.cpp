
#include <iostream>
using namespace std;

double f(double);
void plot(double (double), double, double, int);

int main()
{
  plot(f, 2.0, 0.25, 5);
}

double f(double x)
{
  return (x*x + 1.0/x);
}

void plot(double fnc(double), double x0, double incr, int n)
{
  for (int i = 0; i < n; ++i) {
    cout << " x : " << x0
         << "   f(x) : " << fnc(x0) << endl;
    x0 += incr;
  }
}
