#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

void printx(char *);

int main() {
  // int iNum;
  char cstr[] = "123123";
  // char * s = new char[6];

  printx(cstr);
  // for (int i = 0; i < 6; i++) {
    // s = cstr[i];
    // cout << "cstr: " << cstr << endl;
    // cout << "cstr[i]: " << cstr[i] << endl;
  // }
  //
  // iNum = atoi(cstr);
  //
  // cout << iNum << endl;
  //
  // string iNumstr = to_string(iNum);
  //
  // cout << iNumstr << endl;

  return 0;
}

void printx(char *cstr) {
  while(*cstr != '\0') {
    // cout << "cstr*: " << cstr << endl;
    cstr++;
    cout << "cstr++ " << cstr << endl;
  }
}
