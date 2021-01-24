
#include "games.h"
using namespace games;

int main()
{
  puzzle p("London Scenes", true);
  p.print();
  p.set_completed(true);
  p.print();
}
