///**********************************************************************************
/// Description: Displays the entire contents of a file.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 14, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
using namespace std;

void SumLabel() {
  cout << " - This is the Sum." << endl;
}
void DifferenceLabel() {
  cout << " - This is the Difference." << endl;
}

int main() {
  int num1{}, num2{};

  cout << "Enter number 1: ";
  cin >> num1;
  cout << "Enter number 2: ";
  cin >> num2;

  cout << num1 + num2;
  SumLabel();
  cout << num1 - num2;
  DifferenceLabel();

  return 0;
}
