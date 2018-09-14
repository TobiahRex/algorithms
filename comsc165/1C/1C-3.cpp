///**********************************************************************************
/// Description: 1C-3 |
/// Author: Tobiah Bickley
/// COMSC 165 Section 8312
/// Date: September 11, 2018
///***********************************************************************************
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
  ifstream infile;
  infile.open("/Users/BICKLEY/code/cs/c-plus-plus/comsc165/1C/Lab1C3Input.txt");

  if (!infile) {
    cout << "ERROR: Could not open file." << endl;
    exit(1);
  }

  ofstream billFile("./Bill.txt");


  string line;
  float price{};
  int qty{};
  string linebreak(20, '_');

  infile >> price >> qty;

  billFile << "Price: " << price << endl
  << "Quantity: " << qty << endl
  << linebreak << endl
  << "Total: " << setprecision(2) << fixed << price * qty << endl;

  infile.close();
  billFile.close();

  return 0;
}
