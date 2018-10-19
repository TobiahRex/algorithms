#include <iostream>
#include <vector>
using namespace std;

int main() {
  string password("Aa74!55Ymary;");
  for (auto x : password) {
    if (ispunct(x)) {
      cout << "bad" << endl;
    } else
    if (isupper(x)) {
      cout << "bad" << endl;
    } else
    if (isspace(x)) {
      cout << "bad" << endl;
    }
  }

  return 0;
}
