#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  for (int a = 0; a < 2; a++) {
    cout << "a (outer): " << a << endl;;
    for (int a = 10; a < 30; a+= 10) {
      cout << "a (inner): " << a << endl;
    }
  }
}
