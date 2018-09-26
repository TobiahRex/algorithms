///**********************************************************************************
/// Description: Reads data from inputfile. Manipulatoes the contents and saves the modifications in a new array.
/// Author: Tobiah Bickley
/// COMSC 165 Section 8312
/// Date: Sep 25, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream infile;
  infile.open("/Users/BICKLEY/code/cs/c-plus-plus/comsc165/3A/3A-2_input.txt");

  const int SIZE{4};
  int arr1[SIZE] = {5, 15, 25, 30},
   arr2[SIZE] = {2, 15, 20, 30};

  for (int i = 0; i < SIZE; i++) {
    if (arr1[i] != arr2[i]) {
      cout << "not equal" << endl;
    } else {
      cout << "equal" << endl;
    }
  }

  return 0;
}
