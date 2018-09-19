#include <iostream>
#include <limits>
#include <string>
using namespace std;

void MilesPerHour(int &, int &);

int main() {
  string lineBreak(40, '_');
  string errorMsg("That is an invalid input. Please try again.");
  bool run = true;

  while(run) {
    int miles{}, hours{};
    float milesPerHour{};

    cout << lineBreak << "\nEnter -1 to Quit.\n" << endl;
    cout << "\nHow many miles were travelled?: ";
    cin >> miles;

    if (miles == -1) {
      run = false;
    } else if (!miles || cin.bad() || cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << errorMsg << endl;
    } else if (miles > 0) {
      cout << "\nHow many hours were travelled?: ";
      cin >> hours;

      if (!hours || cin.bad() || cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << errorMsg << endl;
      } else {
        MilesPerHour(miles, hours);
      }
    }
  }
  return 0;
}


void MilesPerHour(int cents) {

}
