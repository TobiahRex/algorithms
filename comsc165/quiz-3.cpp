// OUtput is in comments at the bottom
#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

void findSumAndAverage(double [], double &, int, double &);
void findAverage(double &, int, double &);

int main() {
  bool promptUser{true};
  int months{};

  while(promptUser) {
    cout << "How many months of sales would you like to enter?: ";
    cin >> months;

    if (months < 2 || cin.bad() || cin.fail()) {
      cout << "'" << months << "' # of Months must be greater than 2." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      promptUser = false;
    }
  }

  double *sales = nullptr;
  sales = new double[months];

  bool getSales{true};
  int sale_count{};

  while(getSales) {
    if (sale_count < months) {
      double sale{};
      cout << "Enter Sale: ";
      cin >> sale;

      if (sale < 1000 || cin.bad() || cin.fail()) {
        cout << "'" << sale << "' Sale value must be greater than 1000." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      } else {
        cout << sale_count << endl;

        *(sales + sale_count) = sale;

        sale_count += 1;
      }
    } else {
      getSales = false;
    }
  }

  double total{}, average{};
  findSumAndAverage(sales, total, months, average);

  cout << "Total Sales: $" << setprecision(2) << fixed << total << endl;
  cout << "Average Sale: $" << setprecision(2) << fixed << average << endl;

  return 0;
}

void findSumAndAverage(double sales[], double &total, int length, double &average) {
  for (int i = 0; i < length; i++ ) {
    cout << sales[i] << endl;
    total += sales[i];
  }

  findAverage(total, length, average);
}

void findAverage(double &total, int length, double &average) {
  average = (total / length);
}
