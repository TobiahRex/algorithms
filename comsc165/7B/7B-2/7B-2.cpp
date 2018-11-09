/* 7B-2
•Design a StudentGrades class that has member variables to hold four grades.
The class should have a constructor, accessor, and mutator functions for
the grades fields and a member function that returns the average of the grades.

Demonstrate the class by writing a separate program that creates an instance of
the class. The program should ask the user to enter four grades, which are
stored in the StudentGrades object. Then the program should display the values
in the four grades member variables and the average of the grades, as reported
by the StudentGrades object.

Run 1: 88, 90, 99, 100
Run 2: 45, 55, 65, 75
*/
#include <iostream>
#include <cstdlib>
#include "StudentGrades.h"
using namespace std;

int main() {
  StudentGrades grades;
  grades.inputGrades();
  grades.printGrades();
  grades.printAverage();

  return 0;
}
