///**********************************************************************************
/// Description: Implementation of the classic Quick Sort
/// Author: Tobiah Rex
/// Date: July 13, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
// #include <string>
using namespace std;

vector<int> splice(vector<int> &arr, int start, int stop) {
  vector<int>::const_iterator right = arr.begin() + stop;
  vector<int>::const_iterator left;

  switch(start) {
    case 0: left = arr.begin(); break;
    default: left = arr.begin() + start;
  }

  vector<int> newArr(left, right);
  return newArr;
}

void swap(int &num1, int &num2) {
  int temp = num1;
  num1 = num2;
  num2 = temp;
}

int partition(vector<int> &arr, int lo, int hi) {
  int i{lo};

  while (true) {
    if (arr[i] > arr[hi]) {
      swap(arr[i], arr[hi - 1]);
      swap(arr[hi - 1], arr[hi]);
      hi--;
    } else if (i == hi) break;
    else  i++;
  }
  return hi;
}

void quickSort(vector<int> &arr, int lo{-1}, int hi{-2}) {
  if (lo == -1) lo = 0;
  if (hi == -2) hi = arr.size() - 1;
  if (lo == hi) return;

  int p = partition(arr, lo, hi);
  quickSort(arr, lo, p - 1);
  quickSort(arr, p + 1, hi);
}

int main() {
  vector<int> nums = {3, 7, 8, 2, 1, 9, 5, 4};
  quickSort(nums);

  for (auto num : sorted) cout << " " << num;
  cout << endl;

  return 0;
}
