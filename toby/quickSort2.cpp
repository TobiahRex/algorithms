#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int lo, int hi) {
  int iPartition = hi;
  int iCurrent = lo;
  while(true) {
    if (arr[lo] > arr[hi]) {
      swap(arr[lo], arr[hi - 1]);
      swap(arr[hi - 1], arr[hi]);
      iPartition--;
    } else if(iPartition == iCurrent) {
      break;
    } else {
      iCurrent++;
    }
  }
  return iPartition;
}

void quickSort(vector<int> &arr, int lo = -1, int hi = -2) {
  if (lo == -1 && hi == -2) {
    lo = 0;
    hi = arr.size() - 1;
  }
  if (lo > hi || lo == hi) return;

  int p = partition(arr, lo, hi);
  quickSort(arr, lo, p - 1);
  quickSort(arr, p + 1, hi);
}

int main() {
  int nums = {3, 1, 5, 9, 8, 6, 4};
  quickSort(nums);

  for (int num : nums) cout << " " << num;
  cout << endl;

  return 0;
}
