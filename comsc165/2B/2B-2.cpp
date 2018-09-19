#include <iostream>
#include <limits>
#include <string>
using namespace std;

void NormalizeMoney(int);

int main() {
  string lineBreak(40, '_');
  cout << lineBreak << "\nHow many entries do you need to input?: ";
  int entries{};
  cin >> entries;

  for (int i{}; entries > 0; entries--, i++) {
    cout << "\nEntry (" << i + 1 << ") : ";
    int cents{};
    cin >> cents;
    NormalizeMoney(cents);
  }

  return 0;
}


void NormalizeMoney(int cents) {
  static int sum;
  sum += cents;

  // Parse input Cents to Dollars & Cents
  int cents_print{},
  dollars_print = cents > 100 ? 1 : 0;
  while((cents -= 100) > 99) dollars_print += 1;
  cents_print = cents;

  // print current cents input
  cout << "Dollars: " << dollars_print << endl;
  cout << "Cents: " << cents_print << endl;

  // Parse total sum into Dollars and Cents
  int tempSum = sum;
  dollars_print = tempSum > 100 ? 1 : 0;
  while((tempSum -= 100) > 99) dollars_print += 1;
  cents_print = tempSum;

  // print total
  string lineBreakSmall(10, '_');
  cout << "Total Sum($): " << dollars_print << "." << (cents_print < 10 ? "0" : "") << cents_print << "\n" << lineBreakSmall << endl;
}
