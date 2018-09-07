#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<float> answers(2);

  for (int i = 0; i < 2; i++) {
    cin >> answers[i];
  }

  for (auto n : answers) {
    cout << n << endl;
  }

  return 0;
}
