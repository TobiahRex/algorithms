#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

void GetFoodCount(int data[3][7], string customers[], string days[], int ROWS, int COLS) {
  for (int i{0}; i < ROWS; i++) {
    cout << "-- Data For " << customers[i] << " --" << endl;
    for (int j{0}; j < COLS; j++) {
      cout << days[j] << ": pounds eaten = ";
      int lbs{0};
      cin >> lbs;

      if (lbs < 0 || cin.bad() || cin.fail()) {
        cout << "'" << lbs << "' is not a valid input. Value must be greater than 0." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      } else {
        data[i][j] = lbs;
      }
    }
  }
}

void GetAvgFood(int data[3][7], string customers[], int ROWS, int COLS) {
  string lineBreak(10, '_');
  cout << lineBreak << endl;

  for (int i{0}; i < ROWS; i++) {
    float customerTotal{0}, customerAvg{0};

    for (int j{0}; j < COLS; j++) {
      customerTotal += data[i][j];
    }
    customerAvg = customerTotal / 7.00;
    cout << customers[i] << "Average: " << setprecision(2) << fixed << customerAvg << endl;
  }
}

void GetLeastFood(int data[3][7], string customers[], string days[], int ROWS, int COLS) {
  string lineBreak(10, '_');
  string leastDay("");
  string leastCustomer("");
  int leastFood{numeric_limits<int>::max()};
  cout << lineBreak << endl;

  for (int i{0}; i < ROWS; i++) {
    for (int j{0}; j < COLS; j++) {
      if (data[i][j] < leastFood) {
        leastFood = data[i][j];
        leastDay = days[j];
        leastCustomer = customers[i];
      }
    }
  }

  cout << "Least Amount of Food: " << leastFood << " lbs." << endl
  << "Day: " << leastDay << endl
  << "Diner Category: " << leastCustomer << endl;
}

void GetMostFood(int data[3][7], string customers[], string days[], int ROWS, int COLS) {
  string lineBreak(10, '_');
  string mostDay("");
  string mostCustomer("");
  int mostFood{0};
  cout << lineBreak << endl;

  for (int i{0}; i < ROWS; i++) {
    for (int j{0}; j < COLS; j++) {
      if (data[i][j] > mostFood) {
        mostFood = data[i][j];
        mostDay = days[j];
        mostCustomer = customers[i];
      }
    }
  }
  cout << "Most Amount of Food: " << mostFood << " lbs." << endl
  << "Day: " << mostDay << endl
  << "Diner Category: " << mostCustomer << endl;
}

int main() {
  const int ROWS{3};
  const int COLUMNS{7};
  string customerType[ROWS] = {"Kids", "Adults", "Seniors"};
  string daysOfWeek[COLUMNS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  int dinerData[ROWS][COLUMNS];

  GetFoodCount(dinerData, customerType, daysOfWeek, ROWS, COLUMNS);
  GetAvgFood(dinerData, customerType, ROWS, COLUMNS);
  GetLeastFood(dinerData, customerType, daysOfWeek, ROWS, COLUMNS);
  GetMostFood(dinerData, customerType, daysOfWeek, ROWS, COLUMNS);
}
