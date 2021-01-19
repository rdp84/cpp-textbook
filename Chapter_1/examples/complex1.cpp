
#include <iostream>
using namespace std;

class complex {

public:                  // Universal access to interface
  void re_assign(double r) {
    real = r;
  }
  void im_assign(double im) {
    imaginary = im;
  }
  void print() const {
    cout << "(" << real << ", "
         << imaginary << "i)" << endl;
  }
  friend complex operator+(complex x, complex);
private:                 // Restricted access to implementation
  double real, imaginary;

};

int main()
{
  complex x, y;

  x.re_assign(9.5);
  x.im_assign(-4.5);
  y.re_assign(4.2);
  y.im_assign(6.0);
  //z = x + y;
  x.print();
  y.print();
  //z.print();
}
