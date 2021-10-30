
#include <iostream>
using namespace std;

double avg_arr(const int[], int);
double avg_arr(const double[], int);

int main()
{
  int    w[5] = { 1, 2, 3, 4, 5};
  double x[5] = { 1.1, 2.2, 3.3, 4.4, 5.5};

  cout << avg_arr(w, 5) << " int average" << endl;
  cout << avg_arr(x, 5) << " double avergae" << endl;
}

double avg_arr(const int a[], int size)
{
  int sum = 0;

  for (int i = 0; i < size; ++i)
    sum += a[i];
  return static_cast<double>(sum) / size;
}

double avg_arr(const double a[], int size)
{
  double sum = 0.0;

  for (int i = 0; i < size; ++i)
    sum += a[i];
  return (sum / size);
}
