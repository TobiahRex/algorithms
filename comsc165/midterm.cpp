#include <iostream>
#include <string>
using namespace std;

struct Address {
  string street;
  string city;
  string state;
  string zipCode;
};

struct LoginInfo {
  string name;
  string password;
  string passwordHint;
};

struct PayrollInfo {
  float hourlyRate;
  float hoursPerWeek;
  float monthlySalary;
};

struct Employee {
  int id;
  string firstName;
  string lastName;
  Address address;
  LoginInfo security;
  PayrollInfo salary;
};

int main() {
  const int SIZE = 3;
  Employee employees[SIZE];


  return 0;
}
