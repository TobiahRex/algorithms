///**********************************************************************************
/// Description: Displays the entire contents of a file.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 14, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <fstream>
using namespace std;

float CalNetPay(int hrs, float rate) {
  float NetPay = hrs * rate;
  return NetPay;
}

int main() {
  ifstream infile;
  infile.open("/Users/BICKLEY/code/cs/c-plus-plus/comsc165/2A/Lab2A3Input.txt");

  ofstream outfile;
  outfile.open("Lab2A3Output.txt");

  if (!infile || !outfile) {
    cout << "ERROR: Could not open file." << endl;
    exit(1);
  }

  string line;
  int hours{};
  float payRate{};

  while(infile >> hours >> payRate) {
    float result = CalNetPay(hours, payRate);
    cout << "Net Pay: " << result << endl;
    outfile << "Net Pay: " << result << endl;
  }

  infile.close();
  outfile.close();

  return 0;
}
