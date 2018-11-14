#include<iostream>
#include<string>
#include "NumDays.h"
#include "TimeOff.h"
using namespace std;


int main()
{
  TimeOff inst; //object creation
  inst.getDetails(); //call getdetails to read
  inst.calculate(); //call to calc
  inst.printDetails();//call to display
}
