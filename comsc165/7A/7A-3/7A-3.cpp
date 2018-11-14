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
      float currentTotal = cents + (dollars * 100);
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
  cout << "PART 1:" << endl;
  SavingsAccount bank1;
  bank1.openAccount(200.50);
  bank1.getBalance();
  bank1.makeDeposit(40.50);
  bank1.getBalance();
  bank1.makeWithdrawal(100.98);
  bank1.getBalance();
}

void runPartTwo() {
  cout << "\n\nPART 2:" << endl;
  SavingsAccount bank1;
  cout << "Please input the initial deposit to open account? ";
  float openAccount;
  cin >> openAccount;
  bank1.openAccount(openAccount);
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  bank1.getBalance();

  bool askUser{true}, withdrawalFlag{false};

  while(askUser) {
    cout << "Would you like to make a deposit (Y/N)? ";
    char answer;
    cin >> answer;
    if (answer == 'y' || answer == 'Y') {
      cout << "Enter Deposit Amount: ";
      float deposit;
      cin >> deposit;
      bank1.makeDeposit(deposit);
      bank1.getBalance();
      cout << endl;
    } else if (answer == 'n' || answer == 'N') {
      withdrawalFlag = true;
      cout << "Would you like to enter a withdrawal (Y/N)?";
      char withdrawal;
      cin >> withdrawal;
      cin.clear();
      if (withdrawal == 'Y' || withdrawal == 'y') {
        cout << "How much would you like to withdrawal? ";
        float amountToWithdrawal;
        cin >> amountToWithdrawal;
        cin.clear();
        bank1.makeWithdrawal(amountToWithdrawal);
        bank1.getBalance();
        cout << endl;
      } else {
        askUser = false;
      }
    } else {
      cout << "That is not a valid input. Please try again.";
      cin.clear();
    }
  }
}
