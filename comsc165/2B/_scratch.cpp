#include <iostream>
using namespace std;

void addOne(int someVal) {
  someVal += 1;
  cout << "someVal: " << someVal << endl;
}

int main() {
  int x{};
  addOne(x);

  cout << "x: " <<  x << endl;


  return 0;
}
