#include <iostream>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;

void MilesPerHour(float &, float &, float &);

int main() {92  
  string lineBreak(40, '_');
  string errorMsg("\nThat is an invalid input. Please try again.");
  cout << "\nEnter -1 to Quit.\n" << endl;
  bool run = true;

  while(run) {
    float milesPerHour{}, miles{}, hours{};
    cout << "How many miles were travelled?: ";
    cin >> miles;

    if (miles == -1) {
      run = false;
    } else if (miles < -1 || !miles || cin.bad() || cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << errorMsg << endl;
    } else if (miles > 0) {
      cout << "How many hours were travelled?: ";
      cin >> hours;

      if (hours == -1) {
        run = false;
      } else if (hours < -1 || !hours || cin.bad() || cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << errorMsg << endl;
      } else {
        MilesPerHour(milesPerHour, miles, hours);
        cout << "Miles Per Hour: " << setprecision(2) << fixed << milesPerHour << "\n" << lineBreak << endl;
      }
    }
  }
  return 0;
}


void MilesPerHour(float &mph, float &m, float &h) {
  mph = (m / h);
}
