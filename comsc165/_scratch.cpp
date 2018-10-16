#include <iostream>
#include <cctype>
using namespace std;

int main() {
  cout << "Enter a single character: ";
  int c;
  cin >> c;
  if (isspace(c))
    cout << "Whitespace character.";
  else
    cout << "nothing";

  return 0;
}
