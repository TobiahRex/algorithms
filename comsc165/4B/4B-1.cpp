#include <iostream>
#include <cctype>
#include <limits>
using namespace std;

int main() {
  int c;
  cout << "Enter 0 to exit program.\n" << endl;

  bool promptUser{true};

  while (promptUser) {
    cout << "Enter a single character: ";
    c = getchar();

    if (c == '0') {
      promptUser = false;
    } else {
      if (ispunct(c)) {
        cout << "Punctuation character.";
      } else if (isupper(c)) {
        cout << "Uppercase character.";
      } else if (isdigit(c)) {
        cout << "Digit character.";
      } else if (isspace(c)) {
        cout << "Whitespace character.";
      } else {
        cout << "I don't recognize that character.";
      }
      cout << endl;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  }

  return 0;
}
