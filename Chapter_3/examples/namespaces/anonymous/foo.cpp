#include <iostream>
using namespace std;

namespace
{
  int called = 0;
  void goo()
  {
    ++called;
    cout << "called = " << called << endl;
  }
}

void foo()
{
  goo();
}
