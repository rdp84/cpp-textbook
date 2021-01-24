
#include <iostream>
using namespace std;

double circle(double);
int main()
{
  extern double pi;
  pi = 3.14159;

  double x = 4;
  cout << circle(x) << " is area of circle of radius "
       << x << endl;
}
