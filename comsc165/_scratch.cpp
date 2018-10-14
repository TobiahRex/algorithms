#include <iostream>
using namespace std;

int main() {
  double *sales = nullptr;
  sales = new double[3];

  for (int i = 0; i < 3; i++) {
    *(sales + i) = i * 10;
  }

  int total{};
  for (int i = 0; i < 3; i++) {
    cout << sales[i] << " ";
    total += sales[i];
  }
  cout << endl << total << endl;

  return 0;
}
