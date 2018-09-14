///**********************************************************************************
/// Description: Displays the entire contents of a file.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 14, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
using namespace std;

void writeThoughts() {
  cout << "Learning new topics is fun!" << endl;
}

int main() {

  cout << "I am calling 'writeThoughts'." << endl;
  for (int i = 5; i > 0; i--) {
    writeThoughts();
  }

  cout << "back from 'writeThoughts'." << endl;

  return 0;
}
