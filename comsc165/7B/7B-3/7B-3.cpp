/*
Design a class that has an array of floating-point numbers. The constructor
should accept an integer argument and dynamically allocate the array to hold
that many numbers. The destructor should free the memory held by the array.
In addition, there should be member functions to perform the following operations:
•Store a number in any element of the array
•Retrieve a number from any element of the array
•Return the highest value stored in the array
•Return the lowest value stored in the array
•Return the average of all the numbers stored in the array

•Write a program to demonstrate the class. The program should prompt the user
for how many numbers they would like to store and this should be the argument
to the class constructor. Prompt the user for the numbers and store them in
the object. Display the values in the object. Display the average of the
values. Display the highest of the values. Display the lowest of the values.

Run 1 - 80, 90, 100, 30, 70, 40, 50, 50, 20, 60
Run 2 - 200.5, 700.67, 852.9, 1300, 350.11
*/
#include "Numbers.h"
#include <iostream>
using namespace std;

int main() {
  Numbers *nums = nullptr;

  cout << "How many numbers would you like to enter? ";
  int size;
  cin >> size;

  if (size > 0) {
    nums = new Numbers(size);
  } else {
    exit(EXIT_FAILURE);
  }

  int index{0};

  while(index < size) {
    cout << "Enter number " << index + 1 << ": ";
    float input_number{0};
    cin >> input_number;

    if (input_number <= 0) {
      cout << "Number must be greater than 0";
      cin.clear();
    } else {
      nums->saveNumber(input_number, index);
      index += 1;
    }
  }

  nums->printResults();

  delete nums;

  return 0;
}
