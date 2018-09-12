///**********************************************************************************
/// Description: 1B-2 | Asks user for input between a-z and verifies valid input.
/// Author: Tobiah Bickley
/// COMSC 165 Section 8312
/// Date: September 4, 2018
///***********************************************************************************
#include <iostream>
#include <limits>

using namespace std;

int main() {

  bool invalidInput = true;

  while(invalidInput) {
    cout << "Enter a character between a-z: " << endl;
    char userInput;
    cin >> userInput;

    if (97 > (int)userInput || (int)userInput > 122 || cin.fail() || cin.bad()) {
      cout << "That is not a valid input.";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      cout << "Congratulations valid entry! '" << userInput << "'" << endl;
      invalidInput = false;
    }
  }
}
