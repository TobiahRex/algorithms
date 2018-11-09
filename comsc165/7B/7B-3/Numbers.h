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
  void getNums() {
    int count{0};

    while(count < SIZE) {
      cout << "Enter number " << count + 1 << ": ";
      int temp{0};
      cin >> temp;

      if (temp <= 0) {
        cout << "Number must be greater than 0";
        cin.clear();
      } else {
        nums[count] = temp;
        count += 1;
      }
    }
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

  void printResults() {
    cout << "\nNums: ";
    for (int i = 0; i < SIZE; i++) {
      cout << " " << nums[i];
    }

    cout << "\nAverage: " << this->getAverage() << endl;
    cout << "Highest: " << this->getHigh() << endl;
    cout << "Lowest: " << this->getLow() << endl;
  }
};
#endif
