#ifndef TIMEOFF_H
#define TIMEOFF_H
#include <iostream>
#include <string>
#include "NumDays.h";
using namespace std;

class TimeOff
{
  NumDays maxSickDays; //max sick leave
  NumDays sickTaken; //sicktaken
  NumDays maxVacation; //max vaction
  NumDays vacTaken; //taken
  NumDays maxUnpaid; //unpiad
  NumDays unpaidTaken; //inpaid taken
  string name; //name
  int  employeeId; //emp id
  int monthsWorked;//how many months he worked

public:
  TimeOff() {

  }
  int getmaxSickDays() {
      return maxSickDays.days / 8;
  };
  void setmaxSickDays(int n) {
    maxSickDays.days = n;
  };
  int getsickTaken() {
    return sickTaken.days;
  };
  void setsickTaken(int n) {
    sickTaken.days = n;
  };
  int getmaxVacation() {
    return maxVacation.days / 8;
  };
  void setmaxVacation(int n) {
    maxVacation.days = n;
  };
  int getvacTaken(); {
    return vacTaken.days;
  };
  void setvacTaken(int n) {
    vacTaken.days = n;
  };
  int getmaxUnpaid() {
    return maxUnpaid.days;
  };
  void setmaxUnpaid(int n) {
    maxUnpaid.days = n;
  };
  int getunpaidTaken() {
    return unpaidTaken;
  };
  void setunpaidTaken(int n) {
    unpaidTaken.days = n;
  };

  void calculate() {
    if((monthsWorked * 12) <= 240) {
      setmaxVacation(monthsWorked * 12);
    } else {
      setmaxVacation(240);
      setmaxSickDays(monthsWorked * 8);
    }
  };

  void getDetails() {
    cout << "\n enter Employee name:";//read name
    cin >> name;
    cout << "\n Enter Id:"; //read emp id
    cin >> employeeId;
    cout << "\nHow many months has the Employee worked for the company? ";//read how mny months worked
    cin >> monthsWorked;
  }; //read details
  void printDetails() {
    cout << "\n Available vacation:" << getmaxVacation() << " Days";
    cout << "\n Available sick leave:" << getmaxSickDays() << " Days";
  };
};
#endif
