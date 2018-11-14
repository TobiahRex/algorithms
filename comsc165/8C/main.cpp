#include<iostream>
#include<string>
#include "NumDays.h"
#include "TimeOff.h";
using namespace std;

//driver function to opearte all the functions
int main()
{
  TimeOff inst; //object creation
  inst.getDetails(); //call getdetails to read
  inst.calculate(); //call to calc
  inst.printDetails();//call to display
}
