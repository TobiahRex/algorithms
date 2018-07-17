#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
  // char * cstr2 = "Please split this sentence into tokens";

  string str("Please split this sentence into tokens");
  char * cstr = new char[str.length() + 1];

  strcpy(cstr, str.c_str());

  cout << str << endl;

  // cout << cstr2 << endl;
}
