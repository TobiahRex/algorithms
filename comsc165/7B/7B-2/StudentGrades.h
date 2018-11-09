#ifndef STUDENTGRADES_H
#define STUDENTGRADES_H
#include <iomanip>
#include <iostream>
using namespace std;

class StudentGrades {
  private:
    int grade1;
    int grade2;
    int grade3;
    int grade4;

  public:
    StudentGrades() {
      grade1 = 0;
      grade2 = 0;
      grade3 = 0;
      grade4 = 0;
    }
    void inputGrades() {
      int count = 0;

      while(count < 4) {
        cout << "Enter Student Grade: ";
        int tempGrade{0};
        cin >> tempGrade;
        cin.clear();

        if (tempGrade <= 0) {
          cout << "Grade must be greater than 0" << endl;
        } else {
          this->setGrade(tempGrade, count);
          count += 1;
        }
      }
    }
    void setGrade(int grade, int count) {
      switch(count) {
        case 0: grade1 = grade; break;
        case 1: grade2 = grade; break;
        case 2: grade3 = grade; break;
        case 3: grade4 = grade; break;
      }
    }
    float getAverage() const {
      return ((grade1 + grade2 + grade3 + grade4) / 4.00);
    }
    void printGrades() {
      setw(10);
      cout << "Grade 1: " <<  grade1 << endl;
      cout << "Grade 2: " <<  grade2 << endl;
      cout << "Grade 3: " <<  grade3 << endl;
      cout << "Grade 4: " <<  grade4 << endl;
    }
    void printAverage() {
      setw(15);
      cout << "Average: " << setprecision(2) << fixed << this->getAverage() << endl;
    }
};
#endif
