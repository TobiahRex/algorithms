#ifndef NUMDAYS_H
#define NUMDAYS_H
#include <iostream>
using namespace std;

class NumDays {
private:
  int hours;
  float days;
public:
  // NumDays() {
  //   hours = 0;
  //   days = 0;
  // }
  NumDays(int hrs) {
    hours = hrs;
    days = this->calcDays(hrs);
  }
  int getHours() {
    return hours;
  }
  float getDays() {
    return days;
  }
  float calcDays(int hrs) {
    float days = hrs / 8.00;
    return days;
  }
  int operator+(const NumDays &right) {
    return (hours + right.hours);
  }
  int operator-(const NumDays &right) {
    return (hours - right.hours);
  }
  NumDays operator ++ (int) {
    NumDays temp = *this;
    hours += 1;
    days = this->calcDays(hours);

    return temp;
  }
  NumDays operator ++ () {
    hours += 1;
    days = this->calcDays(hours);
    return *this;
  }
  NumDays operator -- (int) {
    NumDays *temp = new NumDays(hours);
    hours -= 1;
    days = this->calcDays(hours);
    return *temp;
  }
  NumDays operator -- () {
    hours -= 1;
    days = this->calcDays(hours);
    return *this;
  }
};
#endif
