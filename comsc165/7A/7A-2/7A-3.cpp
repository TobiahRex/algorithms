#include <iostream>

class SavingsAccount {
  private:
    int dollars{0};
    int cents{0};
  public:
    void _parseDeposit(int c, bool deposit) {
      if (deposit) {
        while(c >= 100) {
          dollars += 1;
          c -= 100;
        }
        cents += c;
      } else {
        while(c >= 100) {
          dollars -= 1;
          c -= 100;
        }
        cents -= c;
      }
    }
    void openAccount(float initDeposit) {
      this._parseDeposit(initDeposit, true);
    }
    void makeDeposit(float deposit) {
      this._parseDeposit(deposit, true);
    }
    void makeWithdrawal(float amount) {
      this._parseDeposit(amount, false);
    }
    void getBalance() const;
};

int main() {
  return 0;
}
