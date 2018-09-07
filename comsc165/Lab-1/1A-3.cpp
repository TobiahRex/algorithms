///**********************************************************************************
/// Description: 1A-3
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
  vector<string> prompts = {
    "What year are you in at college? \n",
    "What is your current GPA? \n",
    "That is not a valid input. Please try again."
  };

  while(true) {
    for (int i = 0; i < 2; i++) {
      string subPrompt = i == 0 ? "Enter Year: " : "Enter GPA: ";

      cout << prompts[i] << endl << subPrompt;
      cin >> userInput;
    }

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
