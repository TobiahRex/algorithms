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

void GetEmployeeInfo(Employee &, int);
void GetAddress(Address &);
void GetLoginInfo(LoginInfo &);
void GetPayrollInfo(PayrollInfo &);

void PrintEmployeeInfo(Employee &, int);

int main() {
  const int SIZE = 3;
  Employee employees[SIZE];

  for (int i = 0; i < SIZE; i++) {
    GetEmployeeInfo(employees[i], i);
  }

  for (int i = 0; i < SIZE; i++) {
    PrintEmployeeInfo(employees[i], i);
  }

  return 0;
}

void GetEmployeeInfo(Employee &employee, int count) {
  cout << "For Employee " << count + 1 << endl;
  cout << "What is the Employees ID?" << endl << "ID: ";
  cin >> employee.id;
  cin.clear();
  cin.ignore();
  cout << "What is the Employees First Name? ";
  getline(cin, employee.firstName);
  cout << "What is the Employees Last Name? ";
  getline(cin, employee.lastName);

  GetAddress(employee.address);
  GetLoginInfo(employee.security);
  GetPayrollInfo(employee.salary);
}

void GetAddress(Address &address) {
  cout << "What is the Employees City? ";
  getline(cin, address.city);

  cout << "What is the Employees State? " ;
  getline(cin, address.state);

  cout << "What is the Employees Street? ";
  getline(cin, address.street);

  cout << "What is the Employees Zip Code? ";
  cin >> address.zipCode;
  cin.clear();
  cin.ignore();
}

void GetLoginInfo(LoginInfo &credentials) {
  cout << "What is the users login name?";
  cin >> credentials.userName;

  bool promptUser{true};
  string password("");

  while(promptUser) {
    cout << "What is the users Password? (Must be lowercase & numbers ONLY)." << endl << "Password: ";
    cin >> password;

    bool badPassword{false};
    for (auto character : password) {
      if (ispunct(character)) {
        badPassword = true;
      } else
      if (isupper(character)) {
        badPassword = true;
      } else
      if (isspace(character)) {
        badPassword = true;
      }
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

     if (badPassword) {
       cout << "'" << password << "' has invalid input. Please try again" << endl;
     } else {
       promptUser = false;
     }
  }

  credentials.password = password;

  cout << "What is the users Password Hint?." << endl << "Password Hint: ";
  getline(cin, credentials.passwordHint);

}

void GetPayrollInfo(PayrollInfo &data) {
  bool promptUser{true};
  while(promptUser) {
    cout << "How many hours per week does this employee work?" << endl << "Hours per Week: ";
    cin >> data.hoursPerWeek;

    if (data.hoursPerWeek > 40 || cin.bad() || cin.fail()) {
      cout << "'" << data.hoursPerWeek << "' value must be less than 40" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      promptUser = false;
    }
  }

  cout << "What is this employees hourly rate?" << endl << "Hourly Rate: ";
  cin >> data.hourlyRate;

  data.monthlySalary = (data.hourlyRate * data.hoursPerWeek * 4);
}

void PrintEmployeeInfo(Employee &e, int index) {
  cout << "\n\t\t\t --- Employee " << index + 1 << " ---" << endl
  << "ID: \t\t\t" << e.id << endl
  << "First Name: \t\t" << e.firstName << endl
  << "Last Name: \t\t" << e.lastName << endl;

  cout << "Address ---" << endl
  << "Street: \t\t" << e.address.street << endl
  << "City: \t\t\t" << e.address.city << endl
  << "State: \t\t\t" << e.address.state << endl
  << "Zip Code: \t\t" << e.address.zipCode << endl;

  cout << "Salary ---" << endl
  << setprecision(2) << fixed << "Hourly Rate: \t\t" << e.salary.hourlyRate << endl
  << "Hours Per Week: \t" << e.salary.hoursPerWeek << endl
  << setprecision(2) << fixed <<  "Monthly Salary: \t$ " << e.salary.monthlySalary << endl;

  cout << "Credentials ---" << endl
  << "User Name: \t\t" << e.security.userName << endl
  << "Password: \t\t" << e.security.password << endl
  << "Password Hint: \t\t" << e.security.passwordHint << endl;

}
