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
    "Enter Year (1,2,3,4) of College: ",
    "Enter GPA: ",
    "\nThat is not a valid input. Please try again.\n\n"
  };

  for (int i = 0; i < 2; i++) {
    int invalidInput = true;

    while(invalidInput) {
      cout << prompts[i];
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
