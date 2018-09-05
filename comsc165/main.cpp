///**********************************************************************************
/// Description: 1A-1
/// Author: Tobiah Bickley
/// COMSC 165 Section 8312
/// Date: September 4, 2018
///***********************************************************************************
#include <iostream>
#include <string>
#include <regex>
#include <limits>

using namespace std;

int main() {
  const int BASELINE_NUMBER = 35;
  int userInput = 0;
  string prompt("Enter an integer \nIt will be compared to a saved number.\n\n");
  string error("That is not a valid input. Please try again.");


  while(true) {
    cout << prompt << endl << "Enter Number: ";
    cin >> userInput;

    regex detectAlpha("[a-zA-Z]+");

    if (regex_match(to_string(userInput), detectAlpha) || cin.bad() || cin.fail()) {
      cerr << error;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      cout << "Thank you." << endl;
      break;
    }
  }

  if (BASELINE_NUMBER == userInput) {
    cout << "That number matches the input " << BASELINE_NUMBER << endl;
  } else {
    cout << "That was not the correct number" << endl;
  }
}
