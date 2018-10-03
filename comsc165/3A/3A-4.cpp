#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void GetGrades(int [], float &);
float GetAvg(int [], float);

int main() {
  const int SIZE = 1000;
  float GradeCount{};
  int GradesInput[SIZE];

  GetGrades(GradesInput, GradeCount);
  float answer = GetAvg(GradesInput, GradeCount);
  cout << "\nAvg Grade: " << setprecision(2) << fixed << answer << endl;

  return 0;
}

void GetGrades(int grades[], float &GradeCount) {
  string lineBreak(10, '_');
  cout << "Please enter student grades\n" << endl
  << "NOTE: Enter '-1' to calculate Average Grade" << endl << lineBreak << endl;

  bool prompt_user{true};

  for (int i{}; prompt_user == true ;i++) {
    cout << "Student #" << i + 1 << " : ";

    int grade{};
    cin >> grade;

    if (grade == -1) {
      prompt_user = false;
    } else {
      GradeCount += 1;
      grades[i] = grade;
    }
  }
}

float GetAvg(int grades[], float GradeCount) {
  int sum{};
  float avg{};

  for (int i = 0; i < GradeCount; i++) {
    sum += grades[i];
  }

  avg = sum / GradeCount;
  return avg;
}
