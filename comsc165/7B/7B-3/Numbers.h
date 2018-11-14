#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
using namespace std;

class Numbers {
private:
  int SIZE;
  float *nums;
public:
  Numbers(int inputSize) {
    SIZE = inputSize;
    nums = new float[SIZE];
  }
  ~Numbers() {
    delete nums;
  }

  float getAverage() {
    float sum{0};
    for (int i = 0; i < SIZE; i++) {
      sum += nums[i];
    }
    return (sum / (float)SIZE);
  }
  float getHigh() {
    float highest = 0;
    for (int i = 0; i < SIZE; i++) {
      if (nums[i] > highest) highest = nums[i];
    }
    return highest;
  }
  float getLow() {
    float low = numeric_limits<int>::max();
    for (int i = 0; i < SIZE; i++) {
      if (nums[i] < low) low = nums[i];
    }
    return low;
  }
  void saveNumber(int number, int index) {
    nums[index] = number;
  }
  int getNumber(int index) {
    return nums[index];
  }

  void printResults() {
    cout << "\nNums: ";
    for (int i = 0; i < SIZE; i++) {
      cout << this->getNumber(i) << " ";
    }

    cout << "\nAverage: " << this->getAverage() << endl;
    cout << "Highest: " << this->getHigh() << endl;
    cout << "Lowest: " << this->getLow() << endl;
  }
};
#endif
