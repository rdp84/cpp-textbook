#include <iostream>
using namespace std;

static void goo()
{
  static int called = 0;
  ++called;
  cout << "called = " << called << endl;
}

void foo()
{
  goo();
}
