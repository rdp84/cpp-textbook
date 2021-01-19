// Hello World in C++

#include <iostream>   // IO Library
#include <string>     // string type
using namespace std;

inline void print_message(string s = "Hello World!")
{
  cout << s << endl;
}

int main()
{
  print_message();
  print_message("Laura Pohl");
  print_message("It is dinner time.");
}
