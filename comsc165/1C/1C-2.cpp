///**********************************************************************************
/// Description: 1C-2 Ask user how many students are in class.  Ask each student how many hours per day (max 3 days) they study, then return their total average time studying.
/// Author: Tobiah Bickley
/// COMSC 165 Section 8312
/// Date: September 11, 2018
///***********************************************************************************
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int numberOfStudents = 0;

  cout << "How many students are in class?: ";
  cin >> numberOfStudents;

  for (; numberOfStudents > 0; numberOfStudents--) {
    float studentTotal = 0;
    cout << "\nHow many hours did you study for each Day?" << endl;
    for (int i = 0; i < 3; i++) {
      float hoursPerDay = 0;
      cout << "Day " << i + 1 << ": ";
      cin >> hoursPerDay;

      studentTotal += hoursPerDay;
    }

    cout << "You studied for an average of " << setprecision(2) << fixed << studentTotal / 3 << " hours per day" << endl;
  }

  return 0;
}
