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

  if (!infile) {
    cout << "ERROR: Could not open file." << endl;
    exit(1);
  }

  const int SIZE{10};
  int nums[SIZE], i{0};

  while(infile >> nums[i]) {
    i++;
  }

  int numsDouble[SIZE];
  for (int j = 0; j < SIZE; j++) {
    numsDouble[j] = (nums[j] * 2);
  }

  for (i = 0; i < SIZE; i++) {
    cout << nums[i] << endl;
  }
  for (i = 0; i < SIZE; i++) {
    cout << numsDouble[i] << endl;
  }

  return 0;
}
