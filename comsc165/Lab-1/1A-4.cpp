///**********************************************************************************
/// Description: 1A-4  Ask user for Letter Grade -> Output Message for different letters.
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
  char userInput;

  cout << "Enter Letter Grade (A, B, C, D, F): ";
  cin >> userInput;

  switch(userInput) {
    case 'A': cout << "Excellent" << endl; break;
    case 'B': cout << "Good" << endl; break;
    case 'C': cout << "Okay Job" << endl; break;
    case 'D': cout << "Just Managed To Pass" << endl; break;
    case 'F': cout << "Failed" << endl; break;
  }

  return 0;
}
