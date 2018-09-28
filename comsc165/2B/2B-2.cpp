#include <iostream>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;

float NormalizeMoney(int);

int main() {
  string lineBreak(40, '_');
  cout << lineBreak << "\nHow many entries do you need to input?: ";
  int entries{};
  cin >> entries;

  for (int i{}; entries > 0; entries--, i++) {
    cout << "\nEntry (" << i + 1 << ") : ";
    int cents{};
    cin >> cents;
    float total = NormalizeMoney(cents);
    string lineBreakSmall(10, '_');
    cout << "Cents Received: " << cents << endl;
    cout << "Dollars: " << setprecision(2) << fixed << total << endl << lineBreakSmall << endl;
  }

  return 0;
}


float NormalizeMoney(int cents) {
  static int sum;
  sum += cents;

  // // Parse total sum into Dollars and Cents
  int total_cents{},
  tempSum = sum,
  total_dollars = cents > 100 ? 1 : 0;

  while((tempSum -= 100) > 99) total_dollars += 1;
  total_cents = tempSum;
  cout << "Total Sum($): " << (total_dollars + (total_cents / 100.00)) << endl;

  // Parse input Cents to Dollars & Cents
  int current_cents{},
  current_dollars = cents > 100 ? 1 : 0;
  while((cents -= 100) > 99) current_dollars += 1;
  current_cents = cents;
  float total = (dollars_print + (cents_print / 100));
  return total;
}
