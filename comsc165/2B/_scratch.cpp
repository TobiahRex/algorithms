#include <iostream>
using namespace std;


int main() {
  int x{565};

  int cents{},
  dollars = x > 100 ? 1 : 0;

  while((x -= 100) > 99) {
    dollars += 1;
    cout << "x: " << x << endl;
  }
  cents = x;

  cout << "Dollars: " << dollars << endl;
  cout << "Cents: " << cents << endl;

  // cout << x << endl;
  // cout << remain << endl;

  // cout << x << endl;
}
