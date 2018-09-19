///**********************************************************************************
/// Description: Displays the entire contents of a file.
/// Author: Tobiah Bickley
/// COMSC 110 Section 1035
/// Date: July 14, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

float FindAverage(float qty, float sum) {
  float avg = sum / qty;

  return avg;
}

float GetGrades() {
  cout << "Enter the number of grades you wish to enter: ";
  float gradesQty{}, gradeSum{};
  cin >> gradesQty;

  for (int i = 0; i < gradesQty; i++) {
    cout << "Enter grade " << i + 1 << " : ";
    float grade{};
    cin >> grade;
    gradeSum += grade;
  }

  float average = FindAverage(gradesQty, gradeSum);
  return average;
}

int main() {
  float avg = GetGrades();

  string grade;

  avg >= 90 ? grade = "A" :
  avg >= 80 ? grade = "B" :
  avg >= 70 ? grade = "C" :
  avg >= 60 ? grade = "D" :
  grade = "F";

  cout << "Average Score: " << setprecision(2) << fixed << avg << endl;
  cout << "Grade: " << grade << endl;

  return 0;
}
