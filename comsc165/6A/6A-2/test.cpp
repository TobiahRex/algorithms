#include <iostream>
#include <fstream>
using namespace std;

int main() {
  fstream inFile;
  inFile.open("/Users/BICKLEY/code/c-plus-plus/comsc165/6A/6A-2/test-file.txt", ios::in);
  int total{0};
  char c;
  while(inFile >> c) {
    total += 1;
  }
  cout << "Location: " << total << endl;

  return 0;
}
