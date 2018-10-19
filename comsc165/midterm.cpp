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
  string userName;
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

void GetEmployeeInfo(Employee &);
void GetAddress(Address &);
void GetLoginInfo(LoginInfo &);
void GetPayrollInfo(PayrollInfo &);

void PrintEmployeeInfo(Employee &);

int main() {
  const int SIZE = 3;
  Employee employees[SIZE];

  for (int i = 0; i < SIZE; i++) {
    GetEmployeeInfo(employees[i]);
  }

  for (int i = 0; i < SIZE; i++) {
    PrintEmployeeInfo(employees[i]);
  }

  return 0;
}

void GetEmployeeInfo(Employee &employee) {
  GetAddress(employee.address);
  GetLoginInfo(employee.security);
  GetPayrollInfo(employee.salary);
}

void GetAddress(Address &address) {
  cout << "address: " << address.city << endl;
}

void GetLoginInfo(LoginInfo &credentials) {
  cout << "password: " << credentials.password << endl;
}

void GetPayrollInfo(PayrollInfo &data) {
  cout << "Payroll Data: " << data.hourlyRate << endl;
}

void PrintEmployeeInfo(Employee &e) {
  cout << "\n\t\t\t --- Employee ---" << endl
  << "ID: " << e.id << endl
  << "First Name: " << e.firstName << endl
  << "Last Name: " << e.lastName << endl

  cout << "Address ---" << endl
  << "City: \t\t" << e.address.city << endl
  << "State: \t\t" << e.address.state << endl
  << "Street: \t\t" << e.address.street << endl
  << "Zip Code: \t\t" << e.address.zipCode << endl

  cout << "Salary ---" << endl
  << "Hourly Rate: \t\t" << e.salary.hourlyRate
  << "Hours Per Week: \t\t" << e.salary.hoursPerWeek
  << "Monthly Salary: \t\t" << e.salary.monthlySalary

  cout << "Credentials ---" << endl
  << "User Name: \t\t" << e.security.hourlyRate
  << "Password: \t\t" << e.security.hoursPerWeek
  << "Password Hint: \t\t" << e.security.monthlySalary

}
