#include <iostream>
#include <limits>
#include <iomanip>
#include <math.h>
using namespace std;

void GetValues(int *, int);
void SortValues(int *, int);
double CalcAverage(int *, int);
double CalcMedian(int *, int);
double CalcMode(int *, int);

int main() {
  bool promptUser{true};
  int size{};

  while(promptUser) {
    cout << "How many values are in the list?: ";
    cin >> size;

    if (size < 0 || cin.bad() || cin.fail()) {
      cout << "'" << size << "' value must be greater than -1 OR an interger." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      promptUser = false;
    }
  }

  int *values = nullptr;
  values = new int[size];

  GetValues(values, size);
  SortValues(values, size);

  double average = CalcAverage(values, size);
  cout << setprecision(2) << fixed << "Average: " << average << endl;

  double median = CalcMedian(values, size);
  cout << setprecision(2) << fixed << "Median: " << median << endl;

  int mode = CalcMode(values, size);
  cout << setprecision(2) << fixed << "Mode: " << mode << endl;

  delete [] values;
  return 0;
}

void GetValues(int *arr, int size) {
  bool getValues{true};
  int value_i{};

  while(getValues) {
    if (value_i < size) {
      int value{};
      cout << "Enter Value: ";
      cin >> value;

      if (value < 0 || cin.bad() || cin.fail()) {
        cout << "Value must be greater than -1 | Try again." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      } else {
        *(arr + value_i) = value;
        value_i += 1;
      }
    } else {
      getValues = false;
    }
  }
}

void SortValues(int *arr, int size) {
  for (int i{0}; i < size - 1; i++) {
    int smallest{i};
    for (int j = i + 1; j < size; j++) {

      int current = *(arr + j);
      int temp_smallest = *(arr + smallest);

      if (current < temp_smallest) {
        smallest = j;
      }
    }
    if (i != smallest) {
      int temp = *(arr + smallest);
      *(arr + smallest) = *(arr + i);
      *(arr + i) = temp;
    }
  }
}

double CalcAverage(int *arr, int size) {
  double average{}, total{};

  for (int i{0}; i < size; i++) {
    total += *(arr + i);
  }

  average = total / (double)size;

  return average;
}

double CalcMedian(int *arr, int size) {
  double middle{};

  if (size % 2 != 0) {
    int c = ceil(size / 2);
    middle = *(arr + c);
  } else {
    int c = ceil(size / 2);
    int f = c - 1;
    double upper = (double)*(arr + c);
    double lower = (double)*(arr + f);
    middle = (upper + lower) / 2.00;
  }
  return middle;
}

double CalcMode(int *arr, int size) {
  int most{}, answer{};

  for (int i = 0; i < size; i++) {
    int current_count{};
    double valueToFind = *(arr + i);

    for (int j = 0; j < size; j++) {
      double thisValue = *(arr + j);
      if (thisValue == valueToFind) {
        current_count += 1;
      }
    }
    if (current_count > most) {
      most = current_count;
      answer = valueToFind;
    }
  }

  if (most == 1) {
    return -1;
  } else {
    return answer;
  }
}
