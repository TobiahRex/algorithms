#include <iostream>
#include <vector>
using namespace std;


int main() {
  vector<int> ages = {6, 18, 30, 45, 56, 60};

  for (int a : ages) {
    cout << " " << a << " ";
  }
  cout << endl;

  auto it = ages.begin() + 2;

  ages.emplace(it, 25);

  int size = ages.size();
  for (int i = 0; i < size; i++) {
    cout << " " << ages[i] << " ";
  }
  cout << endl;

  return 0;
}
