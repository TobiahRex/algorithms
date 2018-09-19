#include <iostream>
#include <limits>
#include <string>
using namespace std;

void MilesPerHour(float, float &, float &);

int main() {
  string lineBreak(40, '\n_'), shortLineBreak(20, '\n_');
  string errorMsg("That is an invalid input. Please try again.");
  bool run = true;

  while(run) {
    float milesPerHour{}, miles{}, hours{};

    cout << lineBreak << "Enter -1 to Quit.\n" << endl;
    cout << "How many miles were travelled?: ";
    cin >> miles;

    if (miles == -1) {
      run = false;
    } else if (!miles || cin.bad() || cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << errorMsg << endl;
    } else if (miles > 0) {
      cout << "How many hours were travelled?: ";
      cin >> hours;

      if (hours == -1) {
        run = false;
      } else if (!hours || cin.bad() || cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << errorMsg << endl;
      } else {
        MilesPerHour(milesPerHour, miles, hours);
        cout << "\nMiles Per Hour: " << milesPerHour
        << shortLineBreak << endl;
      }
    }
  }
  return 0;
}


void MilesPerHour(int mph, float &m, float &h) {
  mph = (m / h);
  return mph;
}
