///**********************************************************************************
/// Description: 1C-1 Ask user to enter 5 numbers and output the final average of all 5 numbers.
/// Author: Tobiah Bickley
/// COMSC 165 Section 8312
/// Date: September 11, 2018
///***********************************************************************************
#include <iostream>

using namespace std;

int main() {
  int total = 0;

  for (int i = 5; i > 0; i--) {
    cout << "Enter a number: ";
    int number = 0;
    cin >> number;

    total += number;
  }

  cout << "Average: " << total / 5 << endl;


  return 0;
}
