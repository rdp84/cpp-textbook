// Pointer-based call-by-reference

#include <iostream>
using std::cout;
using std::endl;

void order(int*, int*);

int main()
{
  int i = 7, j = 3;
  cout << "i = " << i << ", j = " << j << endl;
  order(&i, &j);
  cout << "i = " << i << ", j = " << j << endl;
}

void order(int* p, int* q)
{
  if (*q < *p) {
    int temp = *p;
    *p = *q;
    *q = temp;
  }
}
