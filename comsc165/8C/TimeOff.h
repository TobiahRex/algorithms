#ifndef TIMEOFF_H
#define TIMEOFF_H
#include <iostream>
#include <string>
#include "NumDays.h"
using namespace std;

class TimeOff {
  NumDays maxSickDays; //max sick leave
  NumDays sickTaken; //sicktaken
  NumDays maxVacation; //max vaction
  NumDays vacTaken; //taken
  NumDays maxUnpaid; //unpiad
  NumDays unpaidTaken; //inpaid taken
  string name; //name
  int  employeeId; //emp id

public:
  TimeOff() {

  }
  int getmaxSickDays() {
      return maxSickDays.getDays();
  };
  void setmaxSickDays(int n) {
    maxSickDays = NumDays(n);
  };
  int getsickTaken() {
    return sickTaken.getDays();
  };
  void setsickTaken(int n) {
    sickTaken = NumDays(n);
  };
  int getmaxVacation() {
    return maxVacation.getDays();
  };
  void setmaxVacation(int n) {
    if (n > 240) {
      maxVacation = NumDays(240);
    } else {
      maxVacation = NumDays(n);
    }
  };
  int getvacTaken() {
    return vacTaken.getDays();
  };
  void setvacTaken(int n) {
    vacTaken = NumDays(n);
  };
  int getmaxUnpaid() {
    return maxUnpaid.getDays();
  };
  void setmaxUnpaid(int n) {
    maxUnpaid = NumDays(n);
  };
  int getunpaidTaken() {
    return unpaidTaken.getDays();
  };
  void setunpaidTaken(int n) {
    unpaidTaken = NumDays(n);
  };

  void calculate() {
    // cout << maxVacation.getDays() << endl;
    // cout << vacTaken.getDays() << endl;
    setmaxSickDays(maxSickDays.getDays() - sickTaken.getDays());
  }

  void getDetails() {
    cout << "Enter Employee name: " << endl;
    getline(cin, name);
    cin.clear();
    int temp{0};

    cout << "Enter Id: " << endl;
    cin >> employeeId;

    cout << "How many max sick hours? " << endl;
    cin >> temp;
    setmaxSickDays(temp);

    cout << "How many sick hours taken? " << endl;
    cin >> temp;
    setsickTaken(temp);

    cout << "How many max vacation hours? " << endl;
    cin >> temp;
    setmaxVacation(temp);

    cout << "How many vacation hours taken? " << endl;
    cin >> temp;
    setvacTaken(temp);

    cout << "How many max upaid hours? " << endl;
    cin >> temp;
    setmaxUnpaid(temp);

    cout << "How many unpaid hours taken? " << endl;
    cin >> temp;
    setunpaidTaken(temp);
  };
  void printDetails() {
    cout << "Available vacation: " << maxVacation.getDays() - vacTaken.getDays() << " Days." << endl;
    cout << "Available sick leave: " << getmaxSickDays() << " Days." << endl;
    cout << "Available unpaid days: " << maxUnpaid.getDays() - unpaidTaken.getDays() << " Days." << endl;
  };
};
#endif
