#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  string test("yo");
  char dtest = 'y';

  switch(dtest) {
    case 'y' : cout << "it worked"; break;
    default: cout << "it didn't work";
  }

  return 0;
}
