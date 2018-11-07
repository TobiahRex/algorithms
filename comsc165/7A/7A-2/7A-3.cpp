#include <iostream>

class SavingsAccount {
  private:
    int dollars;
    int cents;
  public:
    void _parseDeposit(int &dollars, int &cents) {
      while(cents >= 100) {
        dollars += 1;
        cents -= 100;
      }
    }
    void openAccount(float initDeposit);
    void makeDeposit(float deposit);
    void getBalance() const;
};

int main() {
  return 0;
}
