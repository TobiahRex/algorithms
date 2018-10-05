///**********************************************************************************
/// Description: Practice using pointers
/// Author: Tobiah Bickley
/// COMSC 165 Section 8312
/// Date: September 13, 2018
///***********************************************************************************
#include <iostream>
using namespace std;


int main() {
  int pi{3};
  int *pi_location{nullptr};
  cout << pi_location << endl;
  pi_location = &pi;

  cout << pi << endl;
  cout << pi_location << endl;
  cout << *pi_location << endl;

  return 0;
}
