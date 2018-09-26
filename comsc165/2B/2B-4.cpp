#include <iostream>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;

void GetGrades(float &);

int main() {
  float avg;
  GetGrades(avg);

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

void GetGrades(float &avg) {
  cout << "Enter the number of grades you wish to enter: ";
  float gradesQty{}, gradeSum{};
  cin >> gradesQty;

  for (int i = 0; i < gradesQty; i++) {
    cout << "Enter grade " << i + 1 << " : ";
    float grade{};
    cin >> grade;
    gradeSum += grade;
  }

  avg = gradeSum / gradesQty;
}
