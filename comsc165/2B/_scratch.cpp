#include <iostream>
using namespace std;

void staticFunc(int y) {
  static int x;

  x += y;

  cout << x << endl;
}

int main() {
  for (int i = 0; i < 3; i++) {
    staticFunc(i);
  }

  return 0;
}
