#include <iostream>
using namespace std;

namespace games {
  class puzzle
  {
  public:
    puzzle(string, bool c=false);
    void set_name(string);
    void set_completed(bool);
    void print() const;
  private:
    string name;
    bool   completed;
  };
}
