///**********************************************************************************
/// Description: 1B-3 User must choose from a menu of beverages and specify the quantity of beverages they want.  Finally, the program prints the total due to the user.
/// Author: Tobiah Bickley
/// COMSC 165 Section 8312
/// Date: September 11, 2018
///***********************************************************************************
#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main() {
  bool exitFlag = false;

  do {
    float totalCost = 0;
    string lBreak(50, '_');
    cout << lBreak << endl
    << "\t\tHot Beverage Menu" << endl << endl
    << "A: Coffee $1.00" << "\t\t\t" << "B: Tea $0.75" << endl
    << "C: Hot Chocolate $1.25" << "\t\t" << "D: Cappucino $2.50" << endl
    << "E: Exit" << endl << endl;

    char userInput;
    cin >> userInput;

    if ((int)userInput < 65 || 69 < (int)userInput || cin.bad() || cin.fail()) {
      cout << "'" << userInput << "' is not a valid input. Please choose from the menu." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if(userInput == 69) {
      cout << "Goodbye :)" << endl;
      exitFlag = true;
    } else {
      int qty = 0;

      bool qtyFlag = true;
      while(qtyFlag) {
        cout << "How many cups would you like?: ";
        cin >> qty;

        if (0 >= qty || cin.bad() || cin.fail()) {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
          cout << "Qty must be greater than zero.  Please try again." << endl;
        } else {
          qtyFlag = false;
        }
      }

      switch(userInput) {
        case 'A': totalCost += qty * 1.00; break;
        case 'B': totalCost += qty * 0.75; break;
        case 'C': totalCost += qty * 1.25; break;
        case 'D': totalCost += qty * 2.50; break;
        default: break;
      }

      cout << setprecision(2) << fixed << "Total Due: $ " << totalCost << endl;
    }
  } while(exitFlag == false);


  return 0;
}
