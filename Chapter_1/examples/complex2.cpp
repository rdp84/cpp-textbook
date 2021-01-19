
#include <iostream>
using namespace std;

class complex {

public:                  // Universal access to interface
  // Constructor
  complex(double r=0, double im=0): real(r), imaginary(im) { }
  // Destructor
  ~complex() {
    cout << "desctructor called on ";
    print();
  }

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
  complex x(5.5, -1.2), y;
}
