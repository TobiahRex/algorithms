#include <iostream>
using namespace std;

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int partition (vector<int> &arr, int lo, int hi) {
  int iNext = lo;
  int iPartition = hi;

  while(true) {
    if(arr[iNext] > arr[iPartition]) {
      swap(arr[iNext], arr[iPartition - 1]);
      swap(arr[iPartition - 1], arr[iPartition]);
      iPartition--;
    } else if (iNext == iPartition) break;
    else iNext++;
  }
  return iPartition;
}

void quickSort(vector<int> &arr, int lo = -1, int hi = -2) {
  if (lo == -1 && hi == -2) {
    lo = 0;
    hi = arr.size() - 1;
  }
  if (lo == hi || lo > hi) return;

  int p = partition(arr, lo, hi);
  quickSort(arr, lo, p - 1);
  quickSort(arr, p + 1, hi);
}

int main() {
  vector<int> nums = {3, 1, 5, 7, 8, 9, 2, 0, 4};

  quickSort(nums);

  return 0;
}
