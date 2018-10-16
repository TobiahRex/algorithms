#include <iostream>
#include <limits>
using namespace std;

int *DoubleArraySize(int *, int);
void PrintArray(int *, int);

int main() {
  bool promptUser{true};
  int size{};

  while(promptUser) {
    cout << "How many values are in the list?: ";
    cin >> size;

    if (size < 0 || cin.bad() || cin.fail()) {
      cout << "'" << size << "' value must be greater than -1." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      promptUser = false;
    }
  }

  int *values = nullptr;
  values = new int[size];

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
        *(values + value_i) = value;
        value_i += 1;
      }
    } else {
      getValues = false;
    }
  }

  int *largerArray = DoubleArraySize(values, size);
  cout << "Original Array: ";
  PrintArray(values, size);
  cout << endl << "New Array: ";
  PrintArray(largerArray, size * 2);
  cout << endl;
  delete [] values;

  return 0;
}

int *DoubleArraySize(int *arr, int size) {
  int newSize = size * 2;

  int *largerArr = nullptr;
  largerArr = new int[newSize];

  for (int i = 0; i < newSize; i++) {
    int x{-1};
    *(largerArr + i) = x;
  }

  for (int i = 0; i < size; i++) {
    int current = *(arr + i);
    *(largerArr + i) = current;
  }

  return largerArr;
}

void PrintArray(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << *(arr + i) << " ";
  }
}
