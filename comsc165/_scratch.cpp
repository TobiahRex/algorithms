#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
  fstream dataFile;
  dataFile.open("testing.dat", ios::out);

  long num = 154253452345;
  dataFile.write((char *) &num, sizeof(num));
  dataFile.close();

  dataFile.open("testing.txt", ios::in);
  long num2{};
  dataFile.read((char *) &num2, sizeof(num2));
  cout << num2 << endl;
  return 0;
}
