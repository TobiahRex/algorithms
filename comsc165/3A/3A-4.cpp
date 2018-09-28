#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void GetGrades(int &g[], int, int &);
float GetAvg(int a[], int);

int main() {
  const int SIZE = 1000;
  int GradeCount{};
  int GradesInput[SIZE];

  GetGrades(GradesInput, SIZE);
  float answer = GetAvg(GradesInput);
  cout << "Avg Grade: " << answer;

  return 0;
}

void GetGrades(int &grades[], int SIZE, int &GradeCount) {
  string lineBreak(10, '_');
  cout << "Please enter student grades\n" << endl
  << "NOTE: Enter '0' to calculate Average Grade" << endl << linebreak << endl;
  bool not_sentinal{true};

  for (int i{}; not_sentinal == true ;i++) {
    cout << "Student #" << i + 1 << " : ";

    int grade{};
    cin >> grade;
    if (grade == 0) {
      not_sentinal = false;
    } else {
      GradeCount += 1;
      grades[i] = grade;
    }
  }
}

float GetAvg(int a[], int SIZE) {
  int sum{};
  float avg{}, qty = (float)(SIZE);

  for (int i = 0; i < SIZE; i++) {
    sum += a[i];
  }

  avg = sum / qty;
  return avg;
}
