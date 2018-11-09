#ifndef NUMBERS_H
#define NUMBERS_H
#include <string>
#include <iostream>
using namespace std;

class NumberToDate {
private:
  int dayNumber;
  static string Jan;
  static string Feb;
  static string Mar;
  static string Apr;
  static string May;
  static string Jun;
  static string Jul;
  static string Aug;
  static string Sep;
  static string Oct;
  static string Nov;
  static string Dec;
public:
  NumberToDate(int value) {
    dayNumber = value;
  }
  void print() {
    cout << "Results: " << this->getStringDate() << endl;
  }
  string getStringDate() {
    int monthCount{0};
    string answer("");

    int lastDays[12] = {
      31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    int tempDays = dayNumber;
    while(tempDays - lastDays[monthCount] > 0) {
      tempDays -= lastDays[monthCount];
      monthCount += 1;
    }

    answer = this->getMonth(monthCount + 1); // string
    answer += " " + to_string(tempDays);

    return answer;
  }
  string static getMonth(int monthCount) {
    switch(monthCount) {
      case 1: return Jan;
      case 2: return Feb;
      case 3: return Mar;
      case 4: return Apr;
      case 5: return May;
      case 6: return Jun;
      case 7: return Jul;
      case 8: return Aug;
      case 9: return Sep;
      case 10: return Oct;
      case 11: return Nov;
      case 12: return Dec;
    }
    return "";
  }
};
string NumberToDate::Jan = "January";
string NumberToDate::Feb = "February";
string NumberToDate::Mar = "March";
string NumberToDate::Apr = "April";
string NumberToDate::May = "May";
string NumberToDate::Jun = "June";
string NumberToDate::Jul = "July";
string NumberToDate::Aug = "August";
string NumberToDate::Sep = "September";
string NumberToDate::Oct = "October";
string NumberToDate::Nov = "November";
string NumberToDate::Dec = "December";
#endif
