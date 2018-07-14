///**********************************************************************************
/// Description: Implementation of the classic Quick Sort
/// Author: Tobiah Rex
/// Date: July 13, 2018
/// Status : Complete
///***********************************************************************************
#include <iostream>
#include <vector>
using namespace std;

// void swap(int &num1, int &num2) {
//   int temp = num1;
//   num1 = num2;
//   num2 = temp;
// }

// vector<int> quickSort(vector<int> &arr) {
//   int arrLength = arr.size();
//   if (arrLength == 1) return arr;
//
//   // pointer for pivot index.
//   // swap function.
//
//   // loop to iterate across each element.
//   // iterate across all elements currently BEFORE the pivot index.
//   // if arr[i] is greater than arr[pivotIndex] then...
//   //  a) swap(arr[i], arr[pivotIndex -1]);
//   //  b) swap(arr[pivotIndexIndex - 1], arr[pivotIndex]);
//   //  c) decrement pivotIndex by 1.
//   // otherwise...
//   //  n/a
//
//   int pivotIndex = arrLength - 1;
//   for (int i{0}; i < pivotIndex; i++) {
//     if (arr[i] > arr[pivotIndex]) {
//       swap(arr[i], arr[pivotIndex - 1]);
//       swap(arr[pivotIndex - 1], arr[pivotIndex]);
//       pivotIndex--;
//     }
//   }
//   vector<T>::const_iterator left = arr.begin() + pivotIndex;
//   vector<T>::const_iterator right = pivotIndex + arr.end();
//   vector<T> newVec(left, right);
//
//   for (auto x : newVec) cout << " " << x << endl;
//
//   vector<int> other1 = quickSort()
// }
int main() {
  vector<int> nums = {3, 7, 8, 2, 1, 9, 5, 4};
  // vector<T>::const_iterator left = nums.begin() + 4;
  // vector<T>::const_iterator right = 4 + (nums.end() - 1);
  // vector<T> newVec(left, right);

  for (auto x : nums) cout << " " << x << endl;
  // quickSort(nums);

  // for (auto num : nums) cout << " " << num << endl;

  return 0;
}
