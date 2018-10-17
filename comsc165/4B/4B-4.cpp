#include <iostream>
#include <string>
using namespace std;

int main() {
  string string1(""), string2("");
  cout << "Enter value for String 1: ";
  getline(cin, string1);
  cout << "Enter value for String 2: ";
  getline(cin, string2);

  if (string1 < string2) {
    cout << "String 1 comes before String 2" << endl;
  } else if (string1 > string2) {
    cout << "String 1 comes after String 2" << endl;
  } else {
    cout << "Equal Strings" << endl;
  }

  return 0;
}
