
#include <iostream>

#define CONVERSION 1.0936
using namespace std;

inline double yards_to_meters(double d)
{
  return d / CONVERSION;
}

int main()
{
  double input;

  cout << "This program will convert yards to meters\n"
       << "Enter zero or a negative number to exit\n";
  while (true) {
    cout << "\nPlease enter distance in yards: ";
    cin >> input;

    if (input <= 0)
      break;
    else {
      cout << "\nDistance in meters: "
           << yards_to_meters(input) << "\n";
        
    }
  }
  cout << "Bye!" << endl;
}
