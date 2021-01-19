
#include <iostream>
using namespace std;

class complex {

public:                  // Universal access to interface
  // Constructor
  complex(double r=0, double im=0): real(r), imaginary(im) { }

  void re_assign(double r)
  {
    real = r;
  }

  void im_assign(double im)
  {
    imaginary = im;
  }

  void print() const
  {
    cout << "(" << real << ", "
         << imaginary << "i)" << endl;
  }

  void print(string var_name) const
  {
    cout << var_name << " = ";
    print();
  }

  friend complex operator+(complex x, complex y)
  {
    complex c;

    c.real = x.real + y.real;
    c.imaginary = x.imaginary + y.imaginary;

    return c;
  }
private:                 // Restricted access to implementation
  double real, imaginary;
};

int main()
{
  complex x(5.5, -1.2), y(-2.0, 3.8), z;
  z = x + y;

  x.print("x");
  y.print("y");
  z.print("z");
}
