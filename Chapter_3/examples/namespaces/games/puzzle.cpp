#include "games.h"

using namespace std;
using namespace games;

games::puzzle::puzzle(string n, bool c)
{
  name = n;
  completed = c;
}

void games::puzzle::set_name(string n)
{
  name = n;
}

void games::puzzle::set_completed(bool c)
{
  completed = c;
}

void games::puzzle::print() const
{
  cout << "Puzzle " << name
       << " has been completed " << completed
       << endl;
}
