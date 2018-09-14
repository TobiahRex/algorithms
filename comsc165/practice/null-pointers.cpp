///**********************************************************************************
/// Description: Practice using pointers
/// Author: Tobiah Bickley
/// COMSC 165 Section 8312
/// Date: September 13, 2018
///***********************************************************************************
#include <iostream>
using namespace std;

int main() {
  float pi = 3.14;
  int pi_location = &pi;

  cout << pi_location << endl;

  return 0;
}
