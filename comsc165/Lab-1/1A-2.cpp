///**********************************************************************************
/// Description: 1A-2
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
  float userInput = 0;
  string prompt("Enter your average grade. \n\n");
  string error("That is not a valid input. Please try again.");


  while(true) {
    cout << prompt << endl << "Grade: ";
    cin >> userInput;

    regex detectAlpha("[a-zA-Z]+");

    if (regex_match(to_string(userInput), detectAlpha) || cin.bad() || cin.fail() || userInput > 100) {
      cerr << error;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      break;
    }
  }

  if (userInput >= 80.0) {
    cout << "You Passed" << endl;
  } else {
    cout << "You Failed" << endl;
  }
}
