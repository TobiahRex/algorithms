#include <iostream>
#include <vector>
using namespace std;


int main() {
  vector<int> ages = {6, 18, 30, 45, 56, 60};

  for (int a : ages) {
    cout << " " << a;
  }
  cout << endl;

  auto it = ages.begin() + 2;

  ages.emplace(it, 25);

  vector<int>::iterator it2;
  for (it2 = ages.begin(); it2 != ages.end(); it2++) {
    cout << " " << *it2;
  }
  cout << endl;

  return 0;
}
