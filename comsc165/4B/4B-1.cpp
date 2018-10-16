/*
Write a program that will prompt a user to enter a single character,
the prompting will continue till a sentinel value is entered.
For each character entered perform the following tests and print out
a relevant message if the character passes the test. Print out a default
message if the character does not pass any of the tests.•Tests that should
 be in program:
 Punctuation,
 Upper Case,
 Digit,
 White Space.

 Run: “A”, “a”, “7”, <tab>,  “?”, “$”
*/

#include <iostream>
#include <cctype>
using namespace std;

int main() {
  cout << "Enter 0 to exit program.\n" << endl;

  bool promptUser{true};

  while (promptUser) {
    cout << "Enter a single character: ";
    char c;
    cin >> c;

    if (c == '0') {
      promptUser = false;
    } else {
      cout << "\"" << c << "\": ";
      if (ispunct(c))
        cout << "Punctuation character.";
      else if (isupper(c))
        cout << "Uppercase character.";
      else if (isdigit(c))
        cout << "Digit character.";
      else if (isspace(c))
        cout << "Whitespace character.";
      else
        cout << "Sorry, I don't recognize that character.";
      cout << endl;
    }
  }

  return 0;
}
