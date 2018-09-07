#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<float> x(1);

  x[0] = 1.1;

  for (auto n : x) {
    cout << n << endl;
  }

  return 0;
}
