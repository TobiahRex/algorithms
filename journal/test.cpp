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


int main() {
  vector<int> nums, newArr1, newArr2, sorted;
  nums = {3, 7, 8, 2, 1, 9, 5, 4};
  newArr1 = splice(nums, 0, 4);
  newArr2 = splice(nums, 4, nums.size());
  newArr2.insert(newArr2.end(), newArr1.begin(), newArr1.end());
  // sorted = sorted.insert(sorted.begin(), newArr2.begin(), newArr2.end(), newArr1.begin(), newArr1.end());

  for (auto num : newArr2) cout << " " << num;
  cout << endl;

  // quickSort(nums);

  // for (auto num : nums) cout << " " << num << endl;

  return 0;
}
