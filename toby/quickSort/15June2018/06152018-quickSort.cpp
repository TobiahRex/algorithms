// Quicksort has a worst case run time of O(n^2);
// #1 - The Array is either sorted in reverse. In which case, the partition function of the algorithm does not make a roughly even split of the array.  Rather it makes a split with the majority of the array in 1 split, continuously; n-1 times.
// #2 - The Array is already sorted in order.
// #3 - The Array has all the same values, or has a majority of values that are the same.
// Quick sort has an average run-time of O(n(logN));
// #1. Makes roughly even partitions upon each invocation. Each level in the Tree is an O(n) operation. Dividing in half each time, makes it O(n(logN));
// #2. The space complexity is O(n).  Making it the ideal sorting function.

#include <iostream>
#include <vector>
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

  for (auto num : nums) cout << " " << num;
  cout << endl;

  return 0;
}
