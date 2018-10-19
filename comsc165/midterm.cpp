#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
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

void PrintEmployeeInfo(Employee &, int);

int main() {
  const int SIZE = 3;
  Employee employees[SIZE];

  for (int i = 0; i < SIZE; i++) {
    GetEmployeeInfo(employees[i]);
  }

  for (int i = 0; i < SIZE; i++) {
    PrintEmployeeInfo(employees[i], i);
  }

  return 0;
}

void GetEmployeeInfo(Employee &employee) {
  GetAddress(employee.address);
  GetLoginInfo(employee.security);
  GetPayrollInfo(employee.salary);
}

void GetAddress(Address &address) {
  cout << "What is the Employees City?" << endl << "City: ";
  cin >> address.city;

  cout << "What is the Employees State?" << endl << "State: ";
  cin >> address.state;

  cout << "What is the Employees Street?" << endl << "Street: ";
  cin >> address.street;

  cout << "What is the Employees Zip Code?" << endl << "Zip Code: ";
  cin >> address.zipCode;
}

void GetLoginInfo(LoginInfo &credentials) {
  cout << "password: " << credentials.password << endl;
}

void GetPayrollInfo(PayrollInfo &data) {
  bool promptUser{true};
  while(promptUser) {
    cout << "How many hours per week does this employee work?" << endl << "Hours per Week: ";
    cin >> data.hoursPerWeek;

    if (data.hoursPerWeek > 40 || cin.bad() || cin.fail()) {
      cout << "'" << size << "' value must be less than 40" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      promptUser = false;
    }
  }

  cout << "What is this employees hourly rate?" << endl << "Hourly Rate: ";
  cin >> data.hourlyRate;

  data.monthlySalary = (hourlyRate * hoursPerWeek * 4);
}

void PrintEmployeeInfo(Employee &e, int index) {
  cout << "\n\t\t\t --- Employee " << index + 1 << " ---" << endl
  << "ID: \t\t" << e.id << endl
  << "First Name: \t\t" << e.firstName << endl
  << "Last Name: \t\t" << e.lastName << endl;

  cout << "Address ---" << endl
  << "City: \t\t" << e.address.city << endl
  << "State: \t\t" << e.address.state << endl
  << "Street: \t\t" << e.address.street << endl
  << "Zip Code: \t\t" << e.address.zipCode << endl;

  cout << "Salary ---" << endl
  << "Hourly Rate: \t\t" << e.salary.hourlyRate << endl
  << "Hours Per Week: \t\t" << e.salary.hoursPerWeek << endl
  << setprecision(2) << fixed <<  "Monthly Salary: \t\t" << e.salary.monthlySalary << endl;

  cout << "Credentials ---" << endl
  << "User Name: \t\t" << e.security.userName << endl
  << "Password: \t\t" << e.security.password << endl
  << "Password Hint: \t\t" << e.security.passwordHint << endl;

}
