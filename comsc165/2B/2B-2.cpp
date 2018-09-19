#include <iostream>
#include <limits>
#include <string>
using namespace std;

void NormalizeMoney(int);

int main() {
  string lineBreak(20, '_'), lineBreakSmall(10, '_');
  cout << lineBreak << "How many entries do you need to input?: ";
  // cout << "\nEnter an interger for each entry." << endl;
  int entries{};
  cin >> entries;

  for (int i{}; entries > 0; entries--, i++) {

    cout << lineBreakSmall << "Entry (" << i + 1 << ") : ";
    int cents{};
    cin >> cents;

    NormalizeMoney(cents);
  }

  return 0;
}


void NormalizeMoney(int money) {
  static float sum{};
  sum += money;

  int cents{},
  dollars = money > 100 ? 1 : 0;

  while((money -= 100) > 99) dollars += 1;
  cents = money;

  cout << "Dollars: " << dollars << endl;
  cout << "Cents: " << cents << endl;

  dollars = sum > 100 ? 1 : 0;
  while((sum -= 100) > 99) dollars += 1;
  cents = sum;

  cout << "Total Sum($): " << dollars << "." << cents << endl;
}
