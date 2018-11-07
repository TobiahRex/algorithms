#include <iostream>
#include <iomanip>
#include "Circle.h"

using namespace std;

int main() {
  Circle c;
  c.setRadius(5);
  cout << c.getRadius() << endl;
  cout << setprecision(2) << fixed << c.getArea() << endl;

  return 0;
}
