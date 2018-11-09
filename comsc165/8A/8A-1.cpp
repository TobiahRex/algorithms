/*
Declare a class named NumberToDate that takes an integer representing a day of
the year and converts it to a string consisting of the month followed by day
of the month.

•Assume that a year has 365 days,
•For example:
•Day 3 would be January 3.
•Day 33 would be February 2.
•Day 365 would be December 31.
•The constructor for the class should take as parameter an integer
representing the day of the year.
•The class should have a member function print() that prints the day in the
month–day format.
•The class should have an integer member variable to represent the day.
•The class should have static member variables holding string objects that
can be used to assist in the translation from the integer format to the
month-day format.
•Write a program to that will prompt a user for the day (as a whole number)
that they want to convert to  a date and display the result. Keep prompting
the user till they are done.

•Run: 2, 32, 365, 45, 77, 123, 234, 364
*/
#include "NumberToDate.h"
using namespace std;

int main() {
  bool askUser{true};
  cout << "Enter -1 To Quit" << endl;

  while(askUser) {
    cout << "Enter a Julian Date: ";
    int value{0};
    cin >> value;
    if (value > 365 || cin.bad() || cin.fail()) {
      cout << "That is not a valid input.";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (value < 0) {
      askUser = false;
    } else {
      NumberToDate *date = new NumberToDate(value);
      date->print();
      delete date;
    }
  }

  return 0;
}
