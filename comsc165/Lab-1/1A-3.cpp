///**********************************************************************************
/// Description: 1A-3
/// Author: Tobiah Bickley
/// COMSC 165 Section 8312
/// Date: September 4, 2018
///***********************************************************************************
#include <iostream>
#include <string>
#include <limits>
#include <vector>

using namespace std;

int main() {
  vector<float> answers(2);
  vector<string> prompts = {
    "What year are you in at college? \n",
    "What is your current GPA? \n",
    "That is not a valid input. Please try again."
  };

  for (int i = 0; i < 2; i++) {
    string subPrompt = i == 0 ? "Enter Year less than or equal to 4: " : "Enter GPA less than or equal to 4.0: ";
    int invalidInput = true;

    while(invalidInput) {
      cout << prompts[i] << endl << subPrompt;
      cin >> answers[i];

      if (
        cin.bad() ||
        cin.fail() ||
        answers[0] > 4 ||
        answers[1] > 4.0 ||
        answers[1] < 0.0
      ) {
        invalidInput = true;
        cerr << prompts[2];
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      } else {
        invalidInput = false;
      }
    }
  }


  if (answers[0] >= 4 && answers[1] >= 2) {
    cout << "You will be graduating this year." << endl;
  } else {
    cout << "More school for you." << endl;
  }
  return 0;
}
