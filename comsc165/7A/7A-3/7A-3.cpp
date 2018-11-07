#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void runPartOne();
void runPartTwo();

class SavingsAccount {
  private:
    int dollars{0};
    int cents{0};
  public:
    void _parseDeposit(float c, bool deposit) {
      if (deposit) {
        c *= 100;
        int currentTotal = cents + (dollars * 100);
        c += currentTotal;
        dollars = 0;
        cents = 0;

        while(c >= 100) {
          dollars += 1;
          c -= 100;
        }
        cents += c;
      } else {
        c *= -100;
        int currentTotal = cents + (dollars * 100);
        c += currentTotal;
        dollars = 0;
        cents = 0;

        while(c >= 100) {
          dollars += 1;
          c -= 100;
        }
        cents = c;
      }
    }
    void openAccount(float initDeposit) {
      this->_parseDeposit(initDeposit, true);
    }
    void makeDeposit(float deposit) {
      this->_parseDeposit(deposit, true);
    }
    void makeWithdrawal(float amount) {
      this->_parseDeposit(amount, false);
    }
    void getBalance() const {
      string zero_or_empty(".");
      if (cents < 10) zero_or_empty = ".0";
      cout << "Balance: $" << setprecision(2) << fixed << dollars << zero_or_empty << cents << endl;
    }
};

int main() {
  runPartOne();
  runPartTwo();
  return 0;
}

void runPartOne() {
  SavingsAccount bank1;
  bank1.openAccount(200.50);
  bank1.getBalance();
  bank1.makeDeposit(40.50);
  bank1.getBalance();
  bank1.makeWithdrawal(100.98);
  bank1.getBalance();
  delete bank1;
}

void runPartTwo() {
  SavingsAccount bank1;
  cout << "How much money would you like to open the account with? ";
  float openAccount;
  cin >> openAccount;
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Enter 1 for: DEPOSIT"
  cout << "Enter -1 for: WITHDRAWAL"
  int answer;
  cin >> answer;
  if (answer == 1) {
    cout << "Enter Deposit Amount: ";
    int deposit;
    cin >> deposit;
    bank1.makeDeposit(deposit);
    bank1.getBalance();
    cout << endl;
  } else if (answer == -1) {
    cout << "Enter Withdrawal Amount: ";
    int withdrawal;
    cin >> withdrawal;
    bank1.makeWithdrawal(withdrawal);
    bank1.getBalance();
    cout << endl;
  }
}
