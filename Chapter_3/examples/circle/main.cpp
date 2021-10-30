
#include <iostream>
using namespace std;

double circle(double);
double circle(double, double);

int main()
{
  extern double pi;

  double x = 8;
  cout << circle(x, pi) << " is area of circle of radius "
       << x << endl;
}
